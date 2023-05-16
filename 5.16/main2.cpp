#include <stdio.h>

int main(){
	int start, end, tempStart, sum=0;
	printf("두수를 입력하세요. ");
	scanf("%d %d" , &start, &end);
	tempStart = start;
	for (; start<end +1;start++){
		sum+= start;
	}
	
	printf("%d 부터 %d까지의 합은 %d입니다.", tempStart, end, sum);
	return 0;
}
