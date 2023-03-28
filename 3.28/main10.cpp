#include<stdio.h>

int main()
{
    int a,b,c;
    printf ("3개의 값을 입력하세요: ");
    scanf("%d %d %d", &a,&b,&c);
    printf("입력한 3개의 합은 %d", a+b+c);
    return 0;
}