#include <stdio.h>
#include <string.h>

#define MAX_LEN 14

double factorial(int n) 
{
    if(n==0||n==1)
        return 1.0;
    double result=1.0;
    for (int i=2;i<=n;++i)
        result*=(double)i;
    return result;
}

double countAnagrams(char*word) 
{
    int len=strlen(word);
    double totalAnagrams=factorial(len);

    int counts[256]={0};
    for (int i = 0; i < len; ++i) 
	{
        counts[(int)word[i]]++;
    }

    for (int i = 0; i < 256; ++i) 
	{
        if (counts[i]>1) 
		{
            totalAnagrams/=factorial(counts[i]);
        }
    }

    return totalAnagrams;
}

int main() 
{
    char word[MAX_LEN+1];
    printf("Введіть слово: ");
    scanf("%s",word);
	while(getchar()!='\n');
    double anagramCount=countAnagrams(word);
    printf("Кількість анаграм: %.0f\n",anagramCount);
    return 0;
}
