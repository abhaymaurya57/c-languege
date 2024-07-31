#include<stdio.h>
int main(){
    int arr[10]={3,2,9,7,5,1,5,8,4,4};
    int triplets= 0;
    int x = 15;
    for(int i=0;i<=9;i++){
        for(int j=i+1;j<=9;j++){
            for(int k=j+1;k<=9;k++){
                if(arr[i]+arr[j]+arr[k]=x){
                    triplets++;
                }
            }
        }
    }
    printf("%d ",triplets);
    return 0;
}