#include<stdio.h>
int main(){
	int a,b,c,d,i=1,count=0;
	scanf("%d %d",&a,&b);
	c=a+b;
	while(i<=c){
		d=c+i;
		count++;
		int sum=0,j=1;
		for(j;j<=d;j++){
			if(d%j==0){
				sum++;
			}
		}
		if(sum==2){
			printf("%d",count);
			break;
		}
		i++;
	}
}