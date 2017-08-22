#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[]={1,2,3,5,4,7};
		int k=4,n=6,m;
		int i;

		for(i=n;i>=k;i--){
            arr[i]=arr[i-1];
		}
        arr[k-1]=10;
		for(m=0;m<n;m++){
			printf("arr[%d]=%d\n",m,arr[m]);
		}
    return 0;
}
