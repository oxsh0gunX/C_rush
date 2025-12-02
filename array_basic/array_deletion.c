#include <stdio.h>
void main(){
    int arr[]={1,3,4,5},size=4,pos;
    printf("Enter the postion to delete: ");
    scanf("%d",&pos);
    for(int i=pos-1;i<=size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
    for(int i=0;i<=size-1;i++){
        printf("%d",arr[i]);
    }
    
    
}
