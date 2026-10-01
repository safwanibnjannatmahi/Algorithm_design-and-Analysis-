#include<stdio.h>


int main(){
    int i,n;
    int arr[10];
    int sum = 0;
    float avg;

    printf("Enter the Range of the array:");
    scanf("%d",&n);
    
    printf("Enter the Eliments ");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }

    avg = (float)sum / n;

    printf("The Array elimets:");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    int s;
    int Found=0;
    printf("Enter the eliment you want to search:");
    scanf("%d",&s);

    for(i=0;i<n;i++){
        if (s==arr[i]){
            printf("The Eliment Are found on %d", &i+1);
            break;
        }
    }
    if(i>n){
        printf("Not Found!");
    }
    return 0;
}