#include<map>
#include<cstdio>
using namespace std;
int main()
{
	int team, yuan, fen;
	int n;
	scanf_s("%d", &n);
	map<int, int>co;
	int maxn, max=0;
	for (int n1 = 0; n1 < n; n1++)
	{
		scanf_s("%d-%d %d", &team, &yuan, &fen);
		if (co.count(team))
		{
			co[team] += fen;
		}
		else
		{
			co[team] = fen;
		}
		if (co[team] > max)
		{
			max = co[team];
			maxn = team;
		}
	}
	printf("%d %d", maxn, max);
	system("pause");
	return 0;

}