#include<bits/stdc++.h>
using namespace std;
void display(int arr[], int n){
    cout<<endl;
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

void count_sort(int arr[], int n){
    int arr_f[n+1]={0};
    int arr_out[n];

    for(int i=0;i<n;i++)
        arr_f[arr[i]]++;

    for(int i=1;i<n+1;i++)
        arr_f[i] = arr_f[i] + arr_f[i-1];

    for(int i=0;i<n;i++){
        arr_out[arr_f[arr[i]]-1] = arr[i];
        arr_f[arr[i]]--;
    }

    display(arr_out,n);
}

int main(void){
    int arr[100005];
    int n;

    cout<<"Enter the size of array ";
    cin>>n;

    for(int i=0;i<n;i++)
        arr[i]=rand()%10;

    display(arr,n);
    count_sort(arr,n);
    return 0;
}
