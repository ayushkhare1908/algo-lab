#include<stdio.h>
#include<time.h>
void bubble(int a[],int s)
{
 int i,j;
 int temp;
 for(i=1;i<s;i++)
  {
    for(j=0;j<s-i;j++)
     {
      if(a[j]>a[j+1])
       {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
       }
     }
   }
}

int main()
{
 int arr[150000];
 double t;
 int i;
 int size;
 clock_t start,end;


 printf("\nEnter the size of array :");
 scanf("%d",&size);
 for(i=0;i<size;i++)
 arr[i]=rand()%100;

start=clock();
 bubble(arr,size);

 printf("\nSorted Array is \n");
 for(i=0;i<size;i++)
 printf("%d   ",arr[i]);
end=clock();
t=(end-start)/CLOCKS_PER_SEC;
printf("\n Time to run is %f",&t);
return 0;

}
