#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

double count_numbers(int p)
{
    if(p<3)return(1<<p); 
    double*dp5=(double*)malloc((p + 1)*sizeof(double));
    double*dp9=(double*)malloc((p + 1)*sizeof(double));
    dp5[1]=1;
    dp9[1]=1;
    dp5[2]=2;
    dp9[2]=2;
    for (int i=3;i<=p;i++)
	{
        dp5[i]=dp5[i-1]+dp5[i-2];
        dp9[i]=dp9[i-1]+dp9[i-2];
    }
    double result = dp5[p] + dp9[p];
    free(dp5);
    free(dp9);
    return result;
}

int main() 
{
	SetConsoleOutputCP(CP_UTF8);
    int p;
    printf("Введіть кількість розрядів p: ");
    scanf("%d",&p);
	while (getchar() != '\n');
    if(p>30)
	{
        printf("Значення p повинно бути менше або дорівнювати 30.\n");
        return 1;
    }
    double result=count_numbers(p);
    printf("Кількість чисел із %d розрядів, в яких три однакові цифри не стоять поруч: %lld\n",p,result);
    return 0;
}
