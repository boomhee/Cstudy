#include <stdio.h>

int main(){
	int i, count =0, answer;
	scanf("%d", &answer);
	for (i=1;i<101;i++){
		if(i%answer !=0){
			continue;
		}
		count++;
	}
	printf("1부터 100까지 수 중에서 %d 의 배수는 %d개 입니다.",answer,count);
	
	return 0;
}
