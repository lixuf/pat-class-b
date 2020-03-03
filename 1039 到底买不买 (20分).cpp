#include<string>
#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<char, int> xiao;
	string a, b;
	cin >> a >> b;
	for (int n1 = 0; n1 < a.size(); n1++)
	{
		if (xiao.count(a[n1]))
		{
			xiao[a[n1]] -= 1;
		}
		else
		{
			xiao[a[n1]] = -1;
		}
	}
	for (int n2 = 0; n2 < b.size(); n2++)
	{
		if (xiao.count(b[n2]))
		{
			xiao[b[n2]] += 1;
		}
		else
		{
			xiao[b[n2]] = 1;
		}
	}
	int duo = 0, shao = 0;
	for (pair<char, int> x : xiao)
	{
		if (x.second < 0)
		{
			duo += (-x.second);
		}
		else
		{
			shao += x.second;
		}
	}
	if (shao)
	{
		cout << "No " << shao;
	}
	else
	{
		cout << "Yes " << duo;
	
	}
	system("pause");
	return 0;
}