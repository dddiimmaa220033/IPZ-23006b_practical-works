#include <stdio.h>
#include <math.h>
#include <windows.h>

double vector_length(int x1,int y1,int x2,int y2) 
{
    int dx=x2-x1;
    int dy=y2-y1;
    double dx_squared=dx*dx;
    double dy_squared=dy*dy;
    double sum_of_squares=dx_squared+dy_squared;
    double length=sqrt(sum_of_squares);  
    return length;
}

int main() 
{
	SetConsoleOutputCP(CP_UTF8);
    int x1,y1,x2,y2;
    printf("Введіть координати точки початку вектора (x1, y1): ");
    scanf("%d %d",&x1,&y1);
	while(getchar()!='\n');
    printf("Введіть координати точки кінця вектора (x2, y2): ");
    scanf("%d %d",&x2,&y2);
	while(getchar()!='\n');
    double length = vector_length(x1,y1,x2,y2);
    printf("Довжина вектора: %.6f\n",length);
    return 0;
}
