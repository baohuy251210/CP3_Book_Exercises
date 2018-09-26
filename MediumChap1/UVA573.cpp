//UVA p573 The Snail 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define INF 1000000000
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

	while (true){
		int wheight, climbDist, ddownDist, climbPercent;
		scanf("%d %d %d %d", &wheight, &climbDist, &ddownDist, &climbPercent);
		if (wheight == 0)
			break;
		int resultDay = 0;
		double height = (double)wheight;
		double downDist = (double) ddownDist;
		double distToGo = (double)height;
		double curClimbDist = (double)climbDist;
		double fatique = curClimbDist * ((double)climbPercent / 100);
		while (true ){
			resultDay++;
			distToGo -= curClimbDist;
			// debug2("curClimbDist:", curClimbDist);
			// debug2("height after climbing:", height-distToGo);
			if (distToGo < 0){
				printf("success on day %d\n", resultDay);
				break;
			}
			curClimbDist -= fatique;
			if (curClimbDist < 0) 
				curClimbDist = 0;
			distToGo += downDist;
			// debug2("height after sliding:", height - distToGo);
			if (distToGo > height){
				printf("failure on day %d\n", resultDay);
				break;
			}
			
		}
		

	}


}