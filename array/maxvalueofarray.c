#include<stdio.h>
int main(){
    int arr[8]={9046 ,76,456,767,854,754,963,987};
    int max =arr[0];
    for(int i=0;i<=8;i++){
        if(max<arr[i]){
        max=arr[i];
        }
       
    }
     printf("%d ",max);
    return 0;
}