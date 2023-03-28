#include<stdio.h>

int main()
{
    int height, weight;
    printf("키와 몸무게를 입력해주세요: ");
    scanf("%d %d", &height, &weight);
    printf("키 %dcm이고 몸무게는 %dkg입니다.", height,weight);
    
    return 0;
}