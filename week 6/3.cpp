#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> &vis,vector<vector<int>> &arr,int parent,int t){
    vis[t] = true;
    for(auto i:arr[t]){
        if(!vis[i]){
            bool a = check(vis,arr,t,i);
            if(a==true) return true;
        }
        else if(i!=parent) return false;
    }
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
    for(int i=0;i<n;i++){
        if(!vis[i]){
            bool a = check(vis,ans,-1,i);
            if(a==true){
                cout<<"Cyclic";
                return 0;
            }
        }
    }
    cout<<"Not Cyclic";
    return 0;
}