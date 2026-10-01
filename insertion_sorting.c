#include<stdio.h>
int main(){
    int arr[100],n,i=0,j;

    printf("Enter the Array Size :");
    scanf("%d",&n);

    printf("Enter the Eliments :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Unsorted array:\n");
    for(i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    int temp;
    printf("Insertion Sort :");
    for(i=1;i<n;i++){
        for(j=i;j>0;j--){
            if(arr[j] < arr[j-1]){
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
        
    }
    for(i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }
    
}