//UVA 11172 Relational Operator
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define INF 1000000000

//memset(memo, -1, sizeof memo);
//memset(arr, 0, sizeof arr);
// index = (index + 1) % n; // index++; if (index >= n) index = 0;
// index = (index + n - 1) % n; // index--; if (index < 0) index = n - 1;
// int ans = (int)((double)d + 0.5); // for rounding to nearest integer
// ans = min(ans, new_computation); // min/max shortcut

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int a, b, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d %d", &a, &b);
		if (a < b) printf("<\n");
		else if (a > b) printf(">\n");
		else printf("=\n");
	}


}	