#include<stdio.h>
void main(){
    int arr[100],i=0,num_range;
    printf("Enter how many number want to store");
    scanf("%d",&num_range);
    printf("enter the elements:");
    for(i=0;i<=num_range;i++){
        scanf("%d",&arr[i]);
        
    }
    printf("the array is :");
    for(i=0;i<=num_range;i++){
        printf("%d",arr[i]);
    }
}
