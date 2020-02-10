#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int cata[5] = { 0,0,0,0,0 };
	int counter = 1;
	int a3 = 0;
	int n;
	int ans = 0;
	cin >> n;
	for (int n1 = 0; n1 < n; n1++)
	{
		int mid;
		cin >> mid;
		if (mid % 5 == 0 && mid % 2 == 0)
		{
			cata[0] += mid;
		}
		else if (mid % 5 == 1)
		{
			cata[1]+=(counter*mid);
			counter = 0 - counter;
			ans = 1;
		}
		else if(mid%5==2)
		{
			cata[2] += 1;
		}
		else if (mid % 5 == 3)
		{
			cata[3] += mid;
			a3 += 1;
		}
		else if (mid % 5 == 4)
		{
			if (cata[4] < mid)
			{
				cata[4] = mid;
			}
		}
	}
	float cata3;
	cata3 = cata[3] / float(a3);
	if (cata[0] == 0)
	{
		printf("N ");
	}
	else
	{
		printf("%d ", cata[0]);
	}
	if (cata[1] == 0&&ans==0)
	{
		printf("N ");
	}
	else
	{
		printf("%d ", cata[1]);
	}
	if (cata[2] == 0)
	{
		printf("N ");
	}
	else
	{
		printf("%d ", cata[2]);
	}
	if (cata[3] == 0)
	{
		printf("N ");
	}
	else
	{
		printf("%.1f ", cata3);
	}
	if (cata[4] == 0)
	{
		printf("N");
	}
	else
	{
		printf("%d", cata[4]);
	}

	system("pause");
	return 0;
}