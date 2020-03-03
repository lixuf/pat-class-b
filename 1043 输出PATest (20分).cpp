#include<string>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
	map<char, int> m;
	string i;
	cin >> i;
	m['P'] = 0;
	m['A'] = 1;
	m['T'] = 2;
	m['e'] = 3;
	m['s'] = 4;
	m['t'] = 5;
	map<int, char> mf;
	mf[0] = 'P';
	mf[1] = 'A';
	mf[2] = 'T';
	mf[3] = 'e';
	mf[4] = 's';
	mf[5] = 't';
	vector<int> re(6, 0);
	for (int n1 = 0; n1 < i.size();n1++)
	{
		if (m.count(i[n1]))
		{
			re[m[i[n1]]] += 1;
		}
	}
	int min = 0;
	int max = 0;
	for (int n1 = 0; n1 < 6; n1++)
	{
		if (re[n1] < min)
		{
			min = re[n1];
		}
		if (re[n1] > max)
		{
			max = re[n1];
		}
	}
	for (int n1 = 0; n1 < min; n1++)
	{
		printf("PATest");
	}
	max = max - min;
	for (int n1 = 0; n1 < max; n1++)
	{
		for (int n2 = 0; n2 < 6; n2++)
		{
			if (re[n2] > min)
			{
				printf("%c", mf[n2]);
				re[n2] -= 1;
			}
		}
	}
	system("pause");
	return 0;
	
}