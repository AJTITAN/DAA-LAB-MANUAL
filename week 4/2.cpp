#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int i = s-1;
    for(int j=s;j<=e;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[i+1],arr[e]);
    return i+1;
}
 
void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
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
    quickSort(arr,0,n-1);
    for(auto i:arr) cout<<i<<" ";
    return 0;
}
