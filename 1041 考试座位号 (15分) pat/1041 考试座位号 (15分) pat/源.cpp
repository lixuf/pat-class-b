#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	map<int, pair<string, int>> chaxun;
	for (int n1 = 0; n1 < n; n1++)
	{
		string kao;
		int shiji, kaoji;
		cin >> kao>>shiji >> kaoji;
		pair<string, int> mid = { kao,kaoji };
		chaxun[shiji] = mid;
	}
	int m;
	cin >> m;
	for (int n1 = 0; n1 < m; n1++)
	{
		int mid;
		cin >> mid;
		string kao;
		int kaoji;
		kao = chaxun[mid].first;
		kaoji = chaxun[mid].second;
		cout << kao << " " << kaoji;
		if (n1 != (m - 1))
		{
			cout << "\n";
		}
	}
	system("pause");
	return 0;
}