#include<bits/stdc++.h>
#define WR "txt"
#define N 10010

void Open() { freopen(WR".in", "r", stdin); freopen(WR".out", "w", stdout); }
void Close() { fclose(stdin); fclose(stdout); }
using namespace std;
int Read()  {
	int val = 0, opt = 1; char ch;
	while (!isdigit(ch = getchar() )) if (ch == '-') opt = -1;
	while (isdigit( ch )) (val *= 10) += ch - '0', ch= getchar();
	return val * opt;
}

int n, D, a[N], p[N], Ans;
char s[N];

void work()  {
	Ans = 0;
	memset(p, 0, sizeof p);
	memset(a, 0, sizeof a);
	n = Read();
	scanf("%s", s + 1);
	D = Read();
	for (int i = 1;i <= D; i++)  a[Read()] = i;
	int t = 0;
	for (int i = 1;i <= n; i++)  {
		if (s[i] == '1') t = i;
		if (!t) continue;
		p[i] = 1;
		if (a[i + 1] && i + 1 - t >= a[i + 1])  t = 0;
	}
	t = 0;
	for (int i = n; i; i--)  {
		if (s[i] == '1') t = i;
		if (!t) continue;
		p[i] = 1;
		if (a[i] && t - i + 1 >= a[i]) t = 0;
	}
	for (int i = 1;i <= n; i++) Ans += p[i];
	printf("%d\n", Ans);
}

int main(void)  {
	//Open();
	for (int T = Read(); T; T--)
		work();
	//Close();
	return 0;
}