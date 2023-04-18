#include <stdio.h>

int main(){
	int answer;
	while(1){
		scanf("%d", &answer);
		if(answer==0){
			break;
		}else{
			printf("%d ют╥б\n",answer);
		}
	}
	return 0;
}
