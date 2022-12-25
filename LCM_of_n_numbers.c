#include<stdio.h>
int main(){
    int n,i,max=-100;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    while(true){
        int times=0;
        for(i=0;i<n;i++){
            if(max%arr[i]==0){
                times+=1;
            }
        }
        if(times==n){
            printf("%d",max);
            break;
        }
        else{
            max+=1;
        }
    }
}