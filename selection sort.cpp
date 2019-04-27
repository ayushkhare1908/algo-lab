#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;

int main(void){
    int a[100005],n,temp;
    time_t start, end;
    double t;

    cout<<"Enter no of elements ";
    cin>>n;

    for(int i=0;i<n;i++)
        a[i]=rand()%100;

    cout<<endl;

    start=clock();

    for(int i=0;i<n-1;i++)
    {
        int key=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[key])
                key=j;

        temp=a[key];
        a[key]=a[i];
        a[i]=temp;
    }
    end=clock();

    t=(difftime(end,start)/CLOCKS_PER_SEC);
    cout<<std::fixed<<t<<endl;
    return 0;
}
