#define _CRT_SECURE_NO_WARNINGS //scnaf 함수 보안 취약점으로 인해 에러방지..(scsanf 에러 나오는데 당황 찾아보니 이거였음..;;) 본직적으로 해결하려면 scanf _s 함수 사용하면됨
#include <stdio.h>

int main()
{
	int num; //입력받을 값을 저장

	printf("입력 :"); //입력 출력

	scanf("%d", &num); //입력 받을 값을 scanf 함수를 이용하여 입력

	printf("%d분은  %d초입니다.", num,num*60); // 1분장 60 이므로 식은 60*변수 --> num*60 
	
}