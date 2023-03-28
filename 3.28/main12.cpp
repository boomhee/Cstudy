#include<stdio.h>

int main()
{
    int a;
    printf("1개의 값을 입력하세요 :");
    scanf("%d",&a);
    printf("%d는 8진수 %o 입니다.\n",a,a);
    printf("%d는 16진수 %x 입니다.\n",a,a);
    printf("%d는 아스키 코드 %c 입니다.\n",a,a);
    
    return 0;
}