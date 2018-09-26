//UVA p11799 Horror Dash
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define INF 1000000000
#define debug3(v1, v2, v3) cout << v1 << " " << v2 << " " <<  v3 <<"\n";
#define debug2(index, value) cout << index << " " << value << "\n";
#define debug1(value) cout << value << "\n";

//memset(memo, -1, sizeof memo);
//memset
// index = (index + 1) % n; // index++; if (index >= n) index = 0;
// index = (index + n - 1) % n; // index--; if (index < 0) index = n - 1;
// int ans = (int)((double)d + 0.5); // for rounding to nearest integer
// ans = min(ans, new_computation); // min/max shortcut

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int testcase;
	scanf("%d", &testcase);
	for (int count = 0; count < testcase; count++){
		int n, c;
		int result = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++){
			scanf("%d", &c);
			result = max(c, result);
		}
		printf("Case %d: %d\n", count+1, result);
	}
}