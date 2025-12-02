#include<stdio.h>
void main(){
    int arr_1[5]={1,2,3,4,5},arr_2[5]={6,7,8,9,0},arr_3[10];
    int size_1=5,size_2=5,size_3=10,i=0;
    for(i=0;i<=size_1-1;i++){
        arr_3[i]=arr_1[i];
    }
    for(i=0;i<=size_2-1;i++){
        arr_3[size_2+i]=arr_2[i];
    }
    for(i=0;i<=size_3-1;i++){
        printf("%d",arr_3[i]);
    }
}
