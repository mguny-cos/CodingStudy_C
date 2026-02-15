#include <stdio.h>

int main(){
	
	int num;
	int i;
	int a = 0;
	int total = 0;
	
	scanf("%d", &num);
	
	for(i=0 ; i<num ; i++){
		a = ++a;
		total = total + a;
	}
	
	printf("%d", total);
	
	return 0;
}