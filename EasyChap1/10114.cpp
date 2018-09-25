//UVA p10114 - Loansome Car Buyers
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

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int duration, record;
	double downpayment, amountloan;

	scanf("%d %lf %lf %d", &duration, &downpayment, &amountloan, &record);
	while (true){
		if (duration < 0) 
			break;
		int resultmonth = 0;
		int currentmonth;double currentpercent;
		double currentvalue = amountloan;
		int month[101]; double percent[101];
		for (int i = 0; i < record; i++)
			scanf("%d %lf", &month[i], &percent[i]);
		double monthlyPay = amountloan / duration;
		month[record] = 999999;
		//perform month 0
		currentmonth = 0;
		currentpercent = percent[currentmonth];

		currentvalue = (amountloan + downpayment) * (1 - currentpercent);
		//done month 0
		while (amountloan > currentvalue){
			resultmonth++;
			if (resultmonth >= month[currentmonth+1]){
				currentmonth++;
			}
			currentpercent = percent[currentmonth];
			currentvalue = currentvalue * (1 - currentpercent);
			amountloan -= monthlyPay;
			// debug3(resultmonth, currentvalue, amountloan);
		}
		if (resultmonth != 1)
			printf("%d months\n", resultmonth);
		else if (resultmonth = 1)
			printf("%d month\n", resultmonth);


		scanf("%d %lf %lf %d", &duration, &downpayment, &amountloan, &record);
	}


}	