#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
int main(void){
    long long int arr[100005],n,c,swap;
    time_t start,end;
    double tc;

    cout<<"Enter no of elements ";
    cin>>n;

    for(int i=0;i<n;i++)
        arr[i]=rand()%100;

    start=clock();

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1]){
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }

    end=clock();

    cout<<endl<<endl;
    tc=difftime(end,start)/CLOCKS_PER_SEC;

    cout<<std::fixed;
    cout<<tc<<endl;

    return 0;
}
