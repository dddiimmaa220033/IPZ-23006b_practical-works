#include <stdio.h>
#include <windows.h>

int main() 
{
	SetConsoleOutputCP(CP_UTF8);
    int n;
    printf("Введите натуральное число n (1 < n < 150): ");
    scanf("%d",&n);
	while(getchar()!='\n');
    if(n<=1||n>=150) 
	{
        printf("Число n должно быть в диапазоне от 2 до 149 включительно.\n");
        return 1;
    }

    int count=0;

    for(int m=1;m<=n;++m) 
	{
        if(n%m==n/m) 
		{
            count++;
        }
    }
    printf("Количество равных делителей числа %d: %d\n",n,count);
    return 0;
}
