#include<bits/stdc++.h>>
using namespace std;
#define ll long long 

int main() {
    ll t1,tt=1;
    
    cin >> t1;

    while(tt<=t1) {
        string s,s1;
        cin >>s;

        s1 = s;
        reverse(s1.begin(),s1.end());
        /*
            palindrom string kina check korar way string take reverse korle always same e hobe like 
            121 akta string etajke reverse korle 121 ee so eta palidrom 
          */
        if(s==s1) {
            cout << "Case "<<tt<<": Yes"<<endl;
        } 
        else   {
             cout << "Case "<<tt<<": No"<<endl;
        }
        
        tt++;
    }
    return 0;
}
