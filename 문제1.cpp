#define _CRT_SECURE_NO_WARNINGS //scnaf �Լ� ���� ��������� ���� ��������..(scsanf ���� �����µ� ��Ȳ ã�ƺ��� �̰ſ���..;;) ���������� �ذ��Ϸ��� scanf _s �Լ� ����ϸ��
#include <stdio.h>

int main()
{
	int num; //�Է¹��� ���� ����

	printf("�Է� :"); //�Է� ���

	scanf("%d", &num); //�Է� ���� ���� scanf �Լ��� �̿��Ͽ� �Է�

	printf("%d����  %d���Դϴ�.", num,num*60); // 1���� 60 �̹Ƿ� ���� 60*���� --> num*60 
	
}