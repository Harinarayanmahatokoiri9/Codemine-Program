#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j,temp;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		arr[i]=pow(arr[i],2);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}