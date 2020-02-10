#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char c;
	cin >> c;
	for (int n1 = 0; n1 < n; n1++)
	{
		cout << c;
	}
	cout << "\n";
	int hang;
	if (n % 2 == 1)
	{
		hang = n / 2 + 1;
	}
	else
	{
		hang = n / 2;
	}
	hang -= 2;
	for (int n1 = 0; n1 < hang; n1++)
	{
		cout << c;
		for (int n2 = 0; n2 < n - 2; n2++)
		{
			cout << " ";
		}
		cout << c<<"\n";
	}
	for (int n1 = 0; n1 < n; n1++)
	{
		cout << c;
	}
	system("pause");
	return 0;
	
}