#include <stdio.h>
int main(){
	int i , answer;
	scanf("%d", &answer);
	
	for ( i=0; i<answer; i++){
		if (answer %i == 0){
			break;
		}
	}
	
	if(answer == 1) printf("�Ҽ� �Դϴ�.");
	else printf("�Ҽ��� �ƴմϴ�.");
	return 0; 
}
