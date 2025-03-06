#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll > v[100001];
ll visited[100001];
/*
solver : sam_in07
date : 6/3/2025
time : 1:18 pm
topic : Binary Search

*/

ll tt , n , c , i ;

bool ok(ll num , ll arr[]) {
	ll pos = arr[0] , cnt = 1;
	for(i = 1; i < n; i++) {
		if((arr[i] - pos) >= num) {
			cnt++;
			pos = arr[i];

			if(cnt == c)
				return true;
		}
	}
	return false;
}

ll bs(ll arr[]) {
	ll lo = 0 , hi = arr[n-1] , ans = -1;

    while(lo < hi) {
    	ll mid = lo + (hi - lo)/2;
    	if(ok(mid , arr)) {
    		if(mid > ans)
    			ans = mid;

    		lo = mid + 1;
    	}
    	else
    		hi = mid;
    }
    return ans;
}
int main() {
 

    cin >> tt ; 
    while(tt--) {
    	cin >> n  >> c ; 

        ll arr[n];
    	for(i = 0; i < n; i++)
    	{
            cin >> arr[i];
        }

    	sort(arr , arr+n);

        ll anss = bs(arr);
        cout << anss << endl;

        //memset(arr , 0 , sizeof arr);
    }
   	return 0;
}
