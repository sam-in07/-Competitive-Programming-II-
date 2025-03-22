#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll                 long long 
#define maxi               1e17
// #define MOD                1e9+7
#define pie                3.14159265358979323846264338327

#define mitsuha_wifu      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define kyouka_chan       freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define sayonara          return 0 ;
#define lancer_            ll isaac_foster;cin >> isaac_foster ;while(isaac_foster--) 

/*
solver : sam_in07
date : 22/3/2025
time : 17:27 pm
topic : binary search  

*/
void takumi_fujiwara() ;



int main (){  
   mitsuha_wifu ;
 
    #ifndef  ONLINE_JUDGE
       kyouka_chan ;
    #endif 
   
 //lancer_   
 {
       takumi_fujiwara();
}
 return 0;
}
void takumi_fujiwara()   {
ll i , n ,  mx = 0 , count = 0 , m  ;  

cin >> n >> m ;

vector<ll>v(n) , v1(m) , v11 ;

for(i=0 ; i<n ; i++)  {
     cin >> v[i] ;
}

for(i=0 ;  i <m ; i++) {
    cin >> v1[i] ; 
}
sort(v.begin() , v.end()) ; 
// for(i= 0 ; i<n ; i++) {
//      if(v[i] < v1[i]) {
//         count ++ ; 
//      }
//      v11.push_back(count) ;
// }

for(i=0  ; i<m ; i++) {
    cout << upper_bound(v.begin(), v.end(), v1[i]) - v.begin() << " ";
}

}




/*
why bs :
find how many elements in v are less than or equal to v1[j]. 
upper_bound returns an iterator to the first 
element greater than v1[j], so the difference
 between this iterator and the beginning of the array gives the count of elements that are less than or equal to v1[j].


*/
