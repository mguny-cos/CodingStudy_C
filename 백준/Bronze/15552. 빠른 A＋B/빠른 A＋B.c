#include <stdio.h>

int main(){
	
	int num;
	int a;
	int p1;
	int p2;
	
	scanf("%d", &num);
	
	for(a=0 ; a<num ; a++){
		scanf("%d %d", &p1,&p2);
		printf("%d\n", p1+p2);
	}
	
	
	
	
	return 0;
}