#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
struct node
{
	int hao;
	int de;
	int cai;
	node(int _hao, int _de, int _cai) :hao(_hao), de(_de), cai(_cai) {};

};

int n, low, h;
bool ju(node x, int y)
{
	if (y == 0)
	{
		if (x.de >= h && x.cai >= h)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (y == 1)
	{
		if (x.de >= h && x.cai < h)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (y == 2)
	{
		if (x.de >= x.cai)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (y == 3)
	{
		return 1;
	}
}
bool ep(node x, node y)
{
	if (x.de > y.de)
	{
		return 1;
	}
	else if (x.de == y.de)
	{
		if (x.hao > y.hao)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}
bool cmp(node x, node y)
{
	if ((x.de + x.cai) > (y.de + y.cai))
	{
		return 1;
	}
	else if ((x.de + x.cai) == (y.de + y.cai))
	{
		return ep(x, y);
	}
	else
	{
		return 0;
	}
}

int main()
{
	vector<node> list1;
	vector<node> list2;
	vector<node> list3;
	vector<node> list4;
	scanf_s("%d%d%d", &n, &low, &h);
	for (int n1 = 0; n1 < n; n1++)
	{
		int mid1, mid2, mid3;
		scanf_s("%d%d%d", &mid1, &mid2, &mid3);
		if (mid2 >= low && mid3 >= low)
		{
			if (mid2 >= h && mid3 >= h)
			{
				list1.push_back(node(mid1, mid2, mid3));
			}
			else if (mid2 >= h)
			{
				list2.push_back(node(mid1, mid2, mid3));
			}
			else if (mid2 >= mid3)
			{
				list3.push_back(node(mid1, mid2, mid3));
			}
			else
			{
				list4.push_back(node(mid1, mid2, mid3));
			}
		}
	}
	sort(list1.begin(), list1.end(), cmp);
	sort(list2.begin(), list2.end(), cmp);
	sort(list3.begin(), list3.end(), cmp);
	sort(list4.begin(), list4.end(), cmp);
	int cp = 0;
	int woe = 0;
	int lenl = list1.size() + list2.size() + list3.size() + list4.size();
	printf("%d", lenl);
	if (lenl != 0)
	{
		printf("\n");
	}
	for (int n2 = 0; n2 < list1.size(); n2++)
	{
		cp = 1;
		printf("%d %d %d", list1[n2].hao, list1[n2].de, list1[n2].cai);
		if (n2 != list1.size() - 1)
		{
			printf("\n");
		}
	}
	if (list2.size() != 0&&cp==1)
	{
		printf("\n");
	}
	for (int n2 = 0; n2 < list2.size(); n2++)
	{
		cp = 1;
		printf("%d %d %d", list2[n2].hao, list2[n2].de, list2[n2].cai);
		if (n2 != list2.size() - 1)
		{
			printf("\n");
		}
	}
	if (list3.size() != 0&&cp==1)
	{
		printf("\n");
	}
	for (int n2 = 0; n2 < list3.size(); n2++)
	{
		cp = 1;
		printf("%d %d %d", list3[n2].hao, list3[n2].de, list3[n2].cai);
		if (n2 != list3.size() - 1)
		{
			printf("\n");
		}
	}
	if (list4.size() != 0&&cp==1)
	{
		printf("\n");
	}
	for (int n2 = 0; n2 < list4.size(); n2++)
	{
		printf("%d %d %d", list4[n2].hao, list4[n2].de, list4[n2].cai);
		if (n2 != list4.size() - 1)
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}

/*
1 60 80
10000001 64 90



*/