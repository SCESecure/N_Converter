#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <math.h>

int inputkeys(int keynum);

int main() {
	// ���� ����
	int key = 0;
	int subkey = 0;
	
MAIN :

	// ���� ȭ��
	system("cls");
	printf("====================\n");
	printf("<�� ��ȯ��>\n\n");
	printf("1. �ﰢ�� ��\n");
	printf("2. e^x ��\n");
	printf("3. log ��\n");
	printf("4. ����\n");
	printf("5. ������ ��\n");
	printf("6. x^y ��\n");
	printf("7. ������ ��\n");
	printf("====================\n");

	key = _getch();
	subkey = inputkeys(key);

	// ���� ȭ��

	if (subkey == 2) {
		switch (key)
		{
		case 49 :
			system("cls");

			double t = 0;

			printf("�ﰢ�� ������ �ٲ� ���� �Է����ּ���.\n");
			printf("�Է� : ");
			scanf("%lf", &t);

			printf("\n ���� : %lf\n", sin(t));
			printf("�ڻ��� : %lf\n", cos(t));
			printf("ź��Ʈ : %lf\n\n", tan(t));
			printf("��ũ ���� : %lf\n", asin(t));
			printf("��ũ �ڻ��� : %lf\n", acos(t));
			printf("��ũ ź��Ʈ : %lf\n", atan(t));
			printf("��ũ �ڻ��� : %lf\n\n", acos(t));
			printf("�����ۺ��� ���� : %lf\n", sinh(t));
			printf("�����ۺ��� �ڻ��� : %lf\n", cosh(t));
			printf("�����ۺ��� ź��Ʈ : %lf\n", tanh(t));

		input1 :

			key = _getch();
			subkey = inputkeys(key);
			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("�� �����̽� Ű�� �Է����ֽñ� �ٶ��ϴ�.\n");
				goto input1;
			}

		case 50 :
		case 51 :
		case 52 :
		case 53 :
		case 54 :
		case 55 :
		default:
			break;
		}
	}
	else {
		printf("�̹� ����ȭ�鿡 �ֽ��ϴ�.\a");
	}
	
}

int inputkeys(int keynum) {

	int keyr = 0;

	if (keynum == 8) {
		keyr = 1;
		return keyr;
	}
	else {
		keyr = 2;
		return keyr;
	}
}