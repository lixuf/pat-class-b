#include<string>
#include<iostream>
#include<vector>
using namespace std;
string day[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
string mid1, mid2,mid3,mid4;
int ctoi(char x)
{
	if (x >= 65 && x <= 90)
	{
		return x - 65;
	}
	if (x >= 48 && x <= 57)
	{
		return x - 48;
	}
}

int main()
{
	int minlen = 0;
	cin >> mid1 >> mid2>>mid3>>mid4;
	if (mid1.size() > mid2.size())
	{
		minlen = mid2.size();
	}
	else
	{
		minlen = mid1.size();
	}
	int swich = 0;
	for (int n1 = 0; n1 < minlen; n1++)
	{
		if (mid1[n1] == mid2[n1]&&swich==0)
		{
			if (mid1[n1]  >= 'A' && mid1[n1] <='N')
			{
				cout << day[mid1[n1] - 'A'] << " ";
				swich = 1;
			}
		}
		else if(mid1[n1] == mid2[n1] && swich==1)
		{
			
			int cha2 = mid1[n1] - '0';
			if (cha2 >= 0 && cha2 <= 9)
			{
				printf("%02d:", cha2);
				break;
			}
			if (mid1[n1] >= 'A'&&mid1[n1] <= 'N')
			{
				printf("%d:", mid1[n1] - 'A' + 10);
				break;
			}
		}
	}
	if (mid3.size() > mid4.size())
	{
		minlen = mid4.size();
	}
	else
	{
		minlen = mid3.size();
	}
	for (int n1 = 0; n1 < minlen; n1++)
	{
		if (mid3[n1] == mid4[n1])
		{
			if (mid3[n1] >= 'A'&&mid3[n1] <= 'Z')
			{
				printf("%02d", n1);
				break;
			}
			if (mid3[n1] >= 'a'&&mid3[n1] <= 'z')
			{
				printf("%02d", n1);
				break;
			}
		}
	}
	system("pause");
	return 0;
	
}