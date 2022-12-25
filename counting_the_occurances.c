#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char ch[1000],ch1;
	int i=0,count=0,j=0;
	fgets(ch,sizeof(ch),stdin);
	scanf("%c",&ch1);
	for(i=0;i<strlen(ch);i++){
		if(ch[i]==ch1){
			j=1;
			count++;
		}
	}
	if(j==0){
		printf("-1");
		exit(0);
	}
	printf("%d",count);
	return 0;
}