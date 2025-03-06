#include<bits/stdc++.h>
#define ll long long

using namespace std;
const ll maxii = 1000000;


/*
solver : sam_in07
date : 3/2/2025
time : 11:33pm
topic : sorting





*/

int main() {
ll i , n , m , k , sum = 0  , cnt = 0 ;
cin >> k >> n ;
vector<ll>v(n);
for(i=0 ; i<n ; i++)  {
    cin >> v[i];

}
sort(v.begin() , v.end()) ;

for(i=0 ; i<n ; i ++) {
   //sum += v[i] ;
  if (sum + v[i] <= k) {
            sum += v[i];
            cnt++;
        }
}

cout << sum <<  " " << cnt << endl;

    return 0;
}


