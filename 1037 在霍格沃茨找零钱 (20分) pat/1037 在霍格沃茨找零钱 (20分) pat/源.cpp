#include<iostream>
using namespace std;
int main()
{
	int price[4] = { 0 };
	int pay[4] = { 0 };
	int zhaohui[4];
	scanf_s("%d.%d.%d", &price[1], &price[2], &price[3]);
	scanf_s("%d.%d.%d", &pay[1], &pay[2], &pay[3]);
	int jinzhi[4] = { 0,1,17,29 };
	int pay1[4] = { pay[0],pay[1],pay[2],pay[3] };
	for (int n1 = 3; n1 >=1; n1--)
	{
		if (pay1[n1] - price[n1] < 0)
		{
			int zhuan;
			if ((pay1[n1] - price[n1]) % jinzhi[n1] == 0)
			{
				zhuan=(pay1[n1] - price[n1]) / jinzhi[n1] ;
			}
			else
			{
				zhuan = (pay1[n1] - price[n1]) / jinzhi[n1]+1;
			}
			pay1[n1] = pay1[n1] + zhuan * jinzhi[n1];
			pay1[n1 - 1] = pay1[n1 - 1] - zhuan;
		}
		zhaohui[n1] = pay1[n1] - price[n1];
	}
	if (pay1[0] != 0)
	{
		for (int n1 = 3; n1 >= 1; n1--)
		{
			if (price[n1] - pay[n1] < 0)
			{
				int zhuan;
				if ((price[n1] - pay[n1]) % jinzhi[n1] == 0)
				{
					zhuan = (price[n1] - pay[n1]) / jinzhi[n1];
				}
				else
				{
					zhuan = (price[n1] - pay[n1]) / jinzhi[n1] + 1;
				}
				price[n1] = price[n1] + zhuan * jinzhi[n1];
				price[n1 - 1] = price[n1 - 1] - zhuan;
			}
			zhaohui[n1] = price[n1] - pay[n1];
		}
		printf("-%d.%d.%d", zhaohui[1], zhaohui[2], zhaohui[3]);
	}
	else
	{
		printf("%d.%d.%d", zhaohui[1], zhaohui[2], zhaohui[3]);
	}
	
	system("pause");
	return 0;
}