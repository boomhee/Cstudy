#include <stdio.h>
int main(){
	int i , answer;
	scanf("%d", &answer);
	
	for ( i=0; i<answer; i++){
		if (answer %i == 0){
			break;
		}
	}
	
	if(answer == 1) printf("소수 입니다.");
	else printf("소수가 아닙니다.");
	return 0; 
}
