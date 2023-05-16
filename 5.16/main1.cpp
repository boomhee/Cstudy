#include <stdio.h>

int main(){
	int j , i ;
	for( i = 2; i<4;i++){
		for (j=1; j<10 ;j++){
			printf("%d X %d = %2d\n", i , j , i*j);
		}
		printf("\n");
	}
	
	return 0;
}
