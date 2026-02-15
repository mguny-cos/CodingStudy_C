#include <stdio.h>

int main(){
	
	int num1;
	int num2;
	int i;
	int a;
	
	scanf("%d", &i);
	
	for(a=0;a<i;a++){
		scanf("%d %d", &num1, &num2);
		printf("%d\n", num1+num2);
	}
	
	
	
	return 0;
}