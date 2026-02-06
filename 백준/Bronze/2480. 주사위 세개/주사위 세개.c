#include <stdio.h>

int main(){
	
	int a, b, c;
	int prize; 
	scanf("%d %d %d", &a, &b, &c);
	
	if(a==b && a!=c){
		prize = 1000 + (a*100);
		printf("%d", prize);
	}
	else if(b==c && b!=a){
		prize = 1000 + (b*100);
		printf("%d", prize);
	}
	else if(a==c && c!=b){
		prize = 1000 + (a*100);
		printf("%d", prize);
	}
	if(a==b && b==c && c==a){
		prize = 10000 + (a*1000);
		printf("%d", prize);
	}
	if(a!=b && b!=c && a!=c){
		if(a>b && a>c){
			prize = a*100;
			printf("%d", prize);
		}
		else if(b>a && b>c){
			prize = b*100;
			printf("%d", prize);
		}
		else if(c>a && c>b){
			prize = c*100;
			printf("%d", prize);
		}
	}
	
	
	return 0;
}