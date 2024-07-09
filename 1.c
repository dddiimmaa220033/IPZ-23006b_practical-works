#include<stdio.h>
#include<windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    double t1,t2,t3;
    printf("Введіть три значення через пробіл: ");
    scanf("%lf %lf %lf",&t1,&t2,&t3);
	while(getchar()!='\n');
    double total_time=1/(1/t1+1/t2+1/t3);
    printf("Час, необхідний для з'їдання пирога: %.2f годин\n",total_time);
    return 0;
}
