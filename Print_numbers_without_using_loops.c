#include<stdio.h>
int main(){
	int a,i=0;
	scanf("%d",&a);
	if(a>=1 && a<=10000){
		begin:
		i=i+1;
		printf("%d ",i);
		if(i<a){
			 goto begin;
		}
	return 0;
	}
	else
	{
	    printf("The Number Series is Not Possible Print");
	}
}