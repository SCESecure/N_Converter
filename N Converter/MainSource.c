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
	printf("8. ����\n");
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

			printf("�ﰢ�� ������ �ٲ� ���� �Է����ּ���.\n\n");
			printf("�Է� : ");
			scanf("%lf", &t);
			fseek(stdin, 0, SEEK_SET);

			printf("\n�Էµ� �� : %d\n\n", t);
			printf("���� : %lf\n", sin(t));
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
			system("cls");

			double ex = 0;

			printf("e^x(e�� x��, �� e�� �ڿ����)���� x�� ���� �Է����ּ���.\n");
			printf("�Է� : ");
			scanf("%lf", &ex);
			fseek(stdin, 0, SEEK_SET);

			printf("\n�Էµ� �� : %lf\n\n", ex);
			printf("e^x : %lf\n", exp(ex));

		input2:

			key = _getch();
			subkey = inputkeys(key);
			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("�� �����̽� Ű�� �Է����ֽñ� �ٶ��ϴ�.\n");
				goto input2;
			}

		case 51 :
			system("cls");

			double nlog = 0;

			printf("log ������ �ٲ� ���� �Է����ּ���.\n");
			printf("�Է� : ");
			scanf("%lf", &nlog);
			fseek(stdin, 0, SEEK_SET);

			printf("\n�Էµ� �� : %lf\n\n", nlog);
			printf("log�� : %lf\n", log(nlog));
			printf("log10 �� : %lf\n", log10(nlog));

		input3:

			key = _getch();
			subkey = inputkeys(key);
			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("�� �����̽� Ű�� �Է����ֽñ� �ٶ��ϴ�.\n");
				goto input3;
			}

		case 52 :
			system("cls");

			double nabs = 0;

			printf("������ ���� ���� �Է����ּ���\n");
			printf("�Է� : ");
			scanf("%lf", &nabs);
			fseek(stdin, 0, SEEK_SET);

			printf("\n�Էµ� �� : %lf\n\n", nabs);
			printf("���� : %lf\n", abs(nabs));

		input4:

			key = _getch();
			subkey = inputkeys(key);
			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("�� �����̽� Ű�� �Է����ֽñ� �ٶ��ϴ�.\n");
				goto input4;
			}
		case 53 :
			system("cls");

			double nsqrt = 0;

			printf("'��Ʈ n'���� n�� ���� �Է����ּ���\n");
			printf("�Է� : ");
			scanf("%lf", &nsqrt);
			fseek(stdin, 0, SEEK_SET);

			printf("\n�Էµ� �� : %lf\n\n", nsqrt);
			printf("������ �� : %lf\n", sqrt(nsqrt));

		input5:

			key = _getch();
			subkey = inputkeys(key);
			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("�� �����̽� Ű�� �Է����ֽñ� �ٶ��ϴ�.\n");
				goto input5;
			}
		case 54 :
			system("cls");

			double xpow = 0;
			double ypow = 0;

			printf("x^y(x�� y��)�� ������ �Է����ּ���\n");
			printf("x �Է� : ");
			scanf("%lf", &xpow);
			fseek(stdin, 0, SEEK_SET);
			scanf("%lf", ypow);
			fseek(stdin, 0, SEEK_SET);

			printf("\n�Էµ� �� : x = %lf, y = %lf\n\n", xpow, ypow);
			printf("x^y �� : %lf\n", pow(xpow, ypow));

		input6:

			key = _getch();
			subkey = inputkeys(key);
			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("�� �����̽� Ű�� �Է����ֽñ� �ٶ��ϴ�.\n");
				goto input6;
			}
		case 55 :
		case 56 :
		default :
			
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