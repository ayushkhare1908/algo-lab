#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;

int main(void){
    int a[100005],n,temp;
    time_t start,end;
    double t;

    cout<<"Enter no of elements ";
    cin>>n;

    for(int i=0;i<n;i++)
        a[i]=rand()%100;


    cout<<endl;
    for(int k=0;k<n;k++)
        cout<<a[k]<<" ";
    cout<<endl;

    start=clock();

    for(int i=0;i<n;i++){
        int key=a[i];
        for(int j=0;j<n;j++){
            if(a[j]>key){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;


                cout<<endl;
                for(int k=0;k<n;k++)
                    cout<<a[k]<<" ";
            }
        }
    }

    end=clock();

    t=(difftime(end,start)/CLOCKS_PER_SEC);
    cout<<std::fixed;
    cout<<t<<endl;

    return 0;
}
