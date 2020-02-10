#include<iostream>
#include<vector>
#include<string>
using namespace std;
int quan[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
char m[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
int ctoi(char x)
{
	return int(x - 48);
}
int main()
{
	int n;
	cin >> n;
	vector<string> result;
	for (int n1 = 0; n1 < n; n1++)
	{
		string mid;
		cin >> mid;
		int jiaoyann=0;
		char jiaoyan;
		for (int n2 = 0; n2 < 17; n2++)
		{
			jiaoyann += (ctoi(mid[n2])*quan[n2]);
		}
		jiaoyan = m[jiaoyann % 11];
		if (jiaoyan != mid[17])
		{
			result.push_back(mid);
		}

	}
	if (result.size() == 0)
	{

		cout << "All passed";
		system("pause");
		return 0;
	}
	for (int n1 = 0; n1 < result.size(); n1++)
	{
		cout << result[n1];
		if (n1 != result.size() - 1)
		{
			cout << "\n";
		}
	}
	system("pause");
	return 0;
}