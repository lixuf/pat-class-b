#include<map>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	map<int, int> i2i;
	for (int n1 = 0; n1 < n; n1++)
	{
		int mid;
		cin >> mid;
		if (i2i.count(mid) == 0)
		{
			i2i[mid] = 1;
		}
		else
		{
			i2i[mid] += 1;
		}
	}
	cin >> n;
	for (int n1 = 0; n1 < n; n1++)
	{
		
		int mid;
		cin >> mid;
		if (i2i.count(mid))
		{
			cout << i2i[mid];
		}
		else
		{
			cout << 0;
		}
		if (n1 != n - 1)
		{
			cout << " ";
		}
		
	}
	system("pause");
	return 0;
}