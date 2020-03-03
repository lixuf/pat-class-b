#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	map<char, int> coute;
	string ini;
	getline(cin,ini);
	for (int n1 = 0; n1 < ini.size(); n1++)
	{
		if (ini[n1] >= 'A'&&ini[n1] <= 'Z')
		{
			ini[n1] = ini[n1] - 'A' + 'a';
		}
		else if(ini[n1]<'a'||ini[n1]>'z')
		{
			continue;
		}
		if (coute.count(ini[n1]))
		{
			coute[ini[n1]] += 1;
		}
		else
		{
			coute[ini[n1]] = 1;
		}
	}
	int maxn = 0;
	char ochar;
	for (pair<char, int> x : coute)
	{
		if (x.second > maxn)
		{
			maxn = x.second;
			ochar = x.first;
		}
		else if(x.second==maxn&&x.first<ochar)
			{
				ochar = x.first;
			}
			
		
	}
	cout << ochar << " " << maxn;
	system("pause");
	return 0;
}