#include<stdio.h>

int main()
{
    int key;
    printf("문자열을 입력하세요: ");
    char secret = getchar();
    printf("키 값을 입력하세요");
    scanf("%d", &key);
    printf("입력하신 문자를 암호호화한 문자는 %c 입니다." , secret-32+key);
    return 0;
}