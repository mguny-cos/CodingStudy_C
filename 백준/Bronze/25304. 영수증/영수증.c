#include <stdio.h>

int main(){
	
	int total;            // 영수증에 나와있는 총 합계가격
	int N;                // 구매한 물건의 종류 개수
	int price;            // 물건의 가격
	int many;             // 물건을 구매한 개수
	int turn;             // 반복 횟수 for문 작동을 위한 변수
	int total_check=0;    // 물건의 개수와 가격을 곱한 값을 모두 더한 수
	
    
	scanf("%d", &total);
	scanf("%d", &N);     
	
    // 물건 가격의 총 합계 계산 반복문
	for(turn=0;turn<N;turn++){
		scanf("%d %d", &price, &many);
		price = price*many;
		total_check = total_check + price;
	}
	
    // 물건 가격의 총 합계와 영수증에 나와있는 총 합계 가격 확인
	if(total_check==total){
		printf("Yes");
	}
	else
		printf("No");
	
	
	
	return 0;
}