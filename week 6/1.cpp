#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&vis,int source,int destination,vector<vector<int>> &mp){
    if(source==destination) return true;
    if(vis[source]) return false;
    vis[source] = 1;
    for(auto i:mp[source]){
        if (check(vis,i,destination,mp)) return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int graph[n][n];
    vector<vector<int>>ans(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(graph[i][j]==1){
                ans[i].push_back(j);
            }
        }
    }
    vector<int>vis(n,0);
    int source,destination;
    cin>>source;
    cin>>destination;
    if(check(vis,source-1,destination-1,ans)) cout<<"Path Exsists\n";
    else cout<<"not exsist";
    return 0;
}