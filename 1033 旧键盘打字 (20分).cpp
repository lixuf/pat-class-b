#include<map>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string x, y;
	cin >> x >> y;
	map<char, int> c2i;
	for (int n1 = 0; n1 < x.size(); n1++)
	{
		if ('A' <= x[n1]&&x[n1] <= 'Z')
		{
			c2i[x[n1]] = 1;
			c2i[x[n1]-'A'+'a'] = 1;
		}
		else if (x[n1] == '+')
		{
			for (char n2 = 'A'; n2 <= 'Z'; n2++)
			{
				c2i[n2] = 1;
			}
		}
		else
		{
			c2i[x[n1]] = 1;
		}
	}
	for (int n1 = 0; n1 < y.size(); n1++)
	{
		if (c2i.count(y[n1]) == 0)
		{
			cout << y[n1];
		}
	}
	system("pause");
	return 0;
}
/*
7IE._SAT,
7_This,_is_a_test.
*/