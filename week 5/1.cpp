#include<bits/stdc++.h>
using namespace std;

const int maxi=26;

void findmax(char arr[],int n){
    int freq[maxi]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]-'a']++;
    }
    int maxFreq=0;
    char maxChar;
    for(int i=0;i<maxi;i++){
        if(freq[i]>maxFreq){
            maxFreq=freq[i];
            maxChar=i+'a';
        }
    }
    if(maxFreq > 1){
        cout<<maxChar<<"-"<<maxFreq<<endl;
    }
    else{
        cout<<"No Duplicates Present"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    char arr[n];
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findmax(arr,n);
    }

   return 0;
}
