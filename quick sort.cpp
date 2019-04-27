#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int part(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;

    for(int j=low; j<high; j++)
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    swap(arr[i+1],arr[high]);
    return (i+1);
}

void quick_sort(int arr[],int low, int high){
    if(low<high){
        int pi=part(arr,low,high);

        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
    }
}

int main(void){
    int arr[100005],n;
    time_t start, end;
    double t;

    cout<<"Enter number of elements ";
    cin>>n;

    for(int i=0;i<n;i++)
        arr[i]=rand()%100;

    start=clock();
    quick_sort(arr,0,n-1);
    end=clock();

    cout<<endl<<endl;

    t=difftime(end,start)/CLOCKS_PER_SEC;
    cout<<std::fixed<<t<<endl;

    return 0;
}
