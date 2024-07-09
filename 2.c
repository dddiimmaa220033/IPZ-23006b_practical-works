#include <stdio.h>
#include <windows.h>

int g(int a,int b)
{
    while (b!=0)
	{
		int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int l(int a,int b) 
{
    return (a/g(a,b))*b;
}

int main() 
{
    SetConsoleOutputCP(CP_UTF8);
    int p;
    printf("Введіть кількість чисел: ");
    scanf("%d",&p);
	while (getchar() != '\n');
    int numbers[p];
    printf("Введіть числа: ");
    for (int i=0;i<p;i++) 
	{
        scanf("%d",&numbers[i]);
		while(getchar()!='\n');
    }
    int result=numbers[0];
    for (int i=1;i<p;i++) 
	{
        result=l(result,numbers[i]);
    }
    printf("Найменше спільне кратне: %d\n",result);
    return 0;
}
