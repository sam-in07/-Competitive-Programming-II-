#include <bits/stdc++.h>
using namespace std;


/*
solver : sam_in07
date : 22/3/2025
time : 23:02 pm
topic : Binary search 

*/

int main() {
    int i , n , tt ;
    cin >> n;
    vector<int> v(n);
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }

    
    cin >> tt;
    while (tt--) {
        int x;
        cin >> x;
        auto lb = lower_bound(v.begin(), v.end(), x);
        auto ub = upper_bound(v.begin(), v.end(), x);
        
        if (lb == v.end() or *lb != x) {
            cout << "-1\n";
        }
        else {
            cout << (lb - v.begin()) << " " << (ub - v.begin()) << endl;
        }
    }
    return 0 ; 
}
