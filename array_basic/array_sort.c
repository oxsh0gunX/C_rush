#include<stdio.h>
void main(){
    int arr[]={3,4,7,6,2,8},size=6,temp=0,i=0,j=0;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
for (i=0;i<=size-1;i++){
    printf("%d",arr[i]);
}
    
}
