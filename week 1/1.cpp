#include<bits/stdc++.h>
using namespace std;
void linear_search(int arr[],int n,int k){
    int c=1;
    for(int i=0;i<n;i++){
        if(arr[i]==k) {
            cout<<"present "<<c;
            return ;
        }
            c++;
    }
    cout<<"not present "<<c;
}
int main()
{
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be searched = ";
    int k;
    cin>>k;
    linear_search(arr,n,k);
    return 0;
}