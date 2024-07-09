#include <stdio.h>
#include <limits.h>
#include <windows.h>

int min_steps(int x,int y) 
{
    int dp[y + 1];
    for(int i=0;i<=y;++i) 
	{
        dp[i]=INT_MAX;
    }
    dp[x]=0; 
    
    for(int i=x;i<=y;++i) 
	{
        if(dp[i]!=INT_MAX) 
		{  
            if(i+1<= y) 
			{
                if(dp[i]+1<dp[i+1]) 
				{
                    dp[i+1]=dp[i]+1;
                }
            }
            if(i*2<=y) 
			{
                if(dp[i]+1<dp[i*2]) 
				{
                    dp[i*2]=dp[i]+1;
                }
            }
            if(i-1>=0) 
			{
                if(dp[i]+1<dp[i-1]) 
				{
                    dp[i-1]=dp[i]+1;
                }
            }
        }
    }
    return dp[y];
}

int main() 
{
	SetConsoleOutputCP(CP_UTF8);
    int x,y;
    printf("Введіть x та y: ");
    scanf("%d%d",&x,&y);
    printf("Мінімальна кількість кроків для переходу з %d до %d: %d\n",x,y,min_steps(x,y));
    return 0;
}
