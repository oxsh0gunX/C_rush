#include <stdio.h>
void main(){
    int arr[]={1,3,4,5},size=4,element,pos;
    printf("Enter the postion to insert: ");
    scanf("%d",&pos);
    printf("Ente the element to inster: ");
    scanf("%d",&element);
    for (int i=size-1;i<=pos-1;i++){
        arr[i+1]=arr[i];
    }arr[pos-1]=element;
    size++;
    for(int i=0;i<=size;i++){
        printf("%d",arr[i]);
    }
    
}
