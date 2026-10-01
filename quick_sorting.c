#include<stdio.h>

void quicksort(int a[25],int first, int last){
    int i,j,pivot,temp;
    if()

}
int main(){
    int arr[25],n,i=0;

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
    quicksort(arr,0,n-1);
    printf("Sorted Array:\n")
    for(i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }
    
}
