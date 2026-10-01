#include <stdio.h>

int main(){
    int arr[100];
    int i=0,n;

    printf("Enter the array Size:");
    scanf("%d",&n);

    printf("Enter The Array eliments:");
    for(i=0;i<n;i++){
        printf("Arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    int j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(arr[i]>arr[j+1])
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    printf("Sorted Array:");
    for(i=0;i<n;i++){
        printf(" %d\n",arr[i] );
    }
   return 0; 
    
}