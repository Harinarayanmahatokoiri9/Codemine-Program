#include<stdio.h>    
int main()  
{  
    int n,i,j,max=0,ans;
    scanf("%d",&n);
    int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}   
      
    for(i=0;i<n;i++)
	{  
        int count=0;
		for(j=0;j<n;j++)
		{  
            if(arr[i]==arr[j] && i!=j)
			{
				count++;
			} 
        }
		if(count>max)
		{
			ans=arr[i];
			max=count;
		}
		else if(count==max)
		{
			if(ans>arr[i])
			{
				ans=arr[i];
			}
		}
    }
    printf("%d",ans);  
}