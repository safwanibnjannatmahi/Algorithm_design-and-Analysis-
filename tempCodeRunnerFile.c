#include<stdio.h>


int main(){
    int i,n;
    int arr[n];

    printf("Enter the Range of the array:");
    scanf("%d",&n);
    
    printf("Enter the Eliments ");

    for(i=0;i<n;i++){
        scanf("%d/n",&arr[i]);
    }

    printf("The Array elimets:");
     for(i=0;i<n;i++){
        printf("%d/n",arr[i]);
    }
}