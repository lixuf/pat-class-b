#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int fenshu[100001] = { 0 };
	vector<int> haoma;
	for (int n1 = 0; n1 < n; n1++)
	{
		int mid,fen;
		cin >> mid>>fen;
		fenshu[mid] = fenshu[mid] + fen;
		haoma.push_back(mid);
	}
	int pre = fenshu[haoma[0]], prehao = haoma[0];
	for (int n1 = 1; n1 < haoma.size(); n1++)
	{
		if (fenshu[haoma[n1]] > pre)
		{
			pre = fenshu[haoma[n1]];
			prehao = haoma[n1];
		}
	}
	cout << prehao << " " << pre;
	system("pause");
	return 0;
}