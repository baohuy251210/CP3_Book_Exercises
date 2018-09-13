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
	int k;
	scanf("%d", &k);
	while (k > 0){
		int n, m, x, y;
		scanf("%d %d", &n, &m);
		for (int i = 0; i < k; i++){
			scanf("%d %d", &x, &y);
			if (x < n && y < m) printf("SO\n");
			else if (x < n && y > m) printf("NO\n");
			else if (x > n && y < m) printf("SE\n");
			else if (x > n && y > m) printf("NE\n");
			else printf("divisa\n");
		}
	scanf("%d", &k);
	}


}