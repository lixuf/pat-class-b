#include<iostream>
#include<string>
using namespace std;
int main()
{
	string ins;
	cin >> ins;
	int sign1;
	if (ins[0] == '+')
	{
		sign1 = 1;
	}
	else
	{
		sign1 = -1;
	}
	int e_ind = ins.find('E');
	string shu = ins.substr(1, e_ind-1);
	int signe;
	if (ins[e_ind + 1] == '+')
	{
		signe = 1;
	}
	else
	{
		signe = -1;
	}
	int shue = stoi(ins.substr(e_ind + 2, ins.size() - e_ind - 2));
	shue = signe * shue -( shu.size() - 2);
	shu.erase(1, 1);
	if (sign1 < 0)
	{
		cout << "-";
	}
	if (shue >= 0)
	{
		shu.insert(shu.end(), shue, '0');
		cout << shu;
		system("pause");
		return 0;
	}
	else
	{
		if (shu.size() - 1 >= (-shue))
		{
			shu.insert(shu.end() + shue, '.');
			cout << shu;
			system("pause");
			return 0;
		}
		else
		{
			shu.insert(shu.begin(),-shue-shu.size()+1,'0' );
			shu.insert(shu.end() + shue, '.');
			cout << shu;
			system("pause");
			return 0;
		}
	}
}