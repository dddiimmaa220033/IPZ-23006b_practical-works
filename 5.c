#include<stdio.h>
#include <windows.h>

#define MOD 12345

int countSequences(int n)
{
    int dp[n+1];
    dp[0]=1;
    dp[1]=2;
    dp[2]=4;
    for(int i=3;i<=n;i++)
    {
        dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%MOD;
    }
    return dp[n];
}

int main()
{
	SetConsoleOutputCP(CP_UTF8);
    int n;
    printf("Введіть довжину послідовностей n: ");
    scanf("%d",&n);
	while(getchar()!='\n');
    if(n<=1||n>=10000)
    {
        printf("Значення n повинно бути в діапазоні 1 < n < 10000\n");
        return 1;
    }
    printf("Кількість допустимих послідовностей довжиною %d: %d\n",n,countSequences(n));
    return 0;
}
