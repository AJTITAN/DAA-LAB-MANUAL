#include<bits/stdc++.h>
using namespace std;
bool check(int t,vector<int> &res,vector<vector<int>> &arr){
    queue<int>q;
    q.push(t);
    res[t] = 1;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        for(auto i:arr[temp]){
            if(res[i]==-1){
                res[i] = 1-res[temp];
                q.push(i);
            }
            else if(res[i]==res[temp]) return false;
        }
    }
    return true;
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
    vector<int>res(n,-1);
    for(int i=0;i<n;i++){
        if(res[i]==-1){
            if(!check(i,res,ans)){
                cout<<"Not bipartite";
                return 0;
            }
        }
    }
    cout<<"Bipartite";
    return 0;
}