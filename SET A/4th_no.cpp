#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll > v[100001];
ll visited[100001];
/*
solver : sam_in07
date : 5/3/2025
time : 11:18 pm
topic : DFS

*/

//void dfs(ll node, const vector<vector<ll>>& adj, vector<bool>& visited) {
 //   stack<ll> s;
//    s.push(node);
 //   visited[node] = true;

 //   while (!s.empty()) {
  //      ll u = s.top();
 //       s.pop();

 //       for (ll v : adj[u]) {
 //           if (!visited[v]) {
  //              visited[v] = true;
  //              s.push(v);
   //         }
  //      }
   // }
//}

//easy way to imp dfs ...thats why i write this 

void dfs(ll n)
{
    visited[n]=1;
    for(auto child:v[n])
    {
        if(visited[child]==0)
         dfs(child);
    }
}


int main() {
  ll n,e , a,b , i , count=0;
    cin>>n>>e;
    for(i=0;i<e;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(i=1;i<=n;i++)
    {
        if(visited[i]==0)
         dfs(i),count++;
    }
    cout<<count;
    return 0;
}


/*
Sample Input
8 5
1 2
2 3
2 4
3 5
6 7

Your Output
3 */
