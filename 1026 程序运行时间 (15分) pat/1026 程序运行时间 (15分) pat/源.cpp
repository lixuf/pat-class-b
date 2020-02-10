#include<iostream>
#include<vector>

using namespace std;
const int clk_t = 100;
int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	float n = n2 - n1;
	n = n / clk_t;
	float yu = n-int(n);
	int cha = n;
	if (yu >= 0.5)
	{
		cha += 1;
	}
	int second = cha % 60;
	int minute = (cha - second)%3600/60;
	int hour = ((cha - second) - minute) / 3600;
	printf("%02d:%02d:%02d", hour,minute,second);
	system("pause");
	return 0;
}