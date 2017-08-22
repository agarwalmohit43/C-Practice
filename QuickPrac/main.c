#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=11,i;
    int a[11] = { 14, 10, 11, 256, 127, 351, 33, 35, 42, 44, 0 };
    printf("\nUn-Sorted array:  ");
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    quick(a,0,n-1);
    printf("\nSorted array: ");
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    return 0;

}

void quick(int a[],int low,int high){
int pivloc;

if(low>=high)
    return;

pivloc=partition(a,low,high);
quick(a,low,pivloc-1);
quick(a,pivloc+1,high);
}

int partition(int a[],int low,int high){
int i=low+1,j=high,pivot=a[low],temp;

while(i<=j){
    while((a[i]<pivot)&&(i<high))
        i++;
    while(a[j]>pivot)
        j--;
    if(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;

    }else{i++;}
}
a[low]=a[j];
a[j]=pivot;
return j;



}
