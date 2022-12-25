#include<stdio.h>
int main(){
	int n,i,min;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]<=min){
			min=arr[i];
		}
	}
	while(min>=1){
		int sum=0;
		for(i=0;i<n;i++){
			if(arr[i]%min==0){
				sum++;
			}
		}
		if(sum==n || min==1){
			break;
		}
		min--;
	}
	printf("%d",min);
}