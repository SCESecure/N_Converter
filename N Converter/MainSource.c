#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

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
	printf("<�� ��ȯ�� 1.1>\n\n");
	printf("[�ڼ��� ����� ������ https://github.com/SCESecure/N_Converter ���� Ȯ�� �ٶ��ϴ�.]\n\n");
	printf("1. �ﰢ�� ��\n");
	printf("2. e^x ��\n");
	printf("3. log ��\n");
	printf("4. ����\n");
	printf("5. ������ ��\n");
	printf("6. x^y ��\n");
	printf("7. x�� y�� ���� ������ ��\n");
	printf("8. ����� ǥ��\n");
	printf("9. ����\n");
	printf("====================\n");

Minput :

	key = _getch();
	subkey = inputkeys(key);

	// ���� ȭ��

	if (subkey == 2) {
		switch (key)
		{
		case 49: // �ﰢ��
			system("cls");

			double t = 0;

			printf("�ﰢ�� ������ �ٲ� ���� �Է����ּ���.\n\n");
			printf("�Է� : ");
			scanf_s("%lf", &t);
			fseek(stdin, 0, SEEK_SET);

			printf("\n�Էµ� �� : %lf\n\n", t);
			printf("���� : %lf\n", sin(t));
			printf("�ڻ��� : %lf\n", cos(t));
			printf("ź��Ʈ : %lf\n\n", tan(t));
			printf("��ũ ���� : %lf\n", asin(t));
			printf("��ũ �ڻ��� : %lf\n", acos(t));
			printf("��ũ ź��Ʈ : %lf\n", atan(t));
			printf("��ũ �ڻ��� : %lf\n\n", acos(t));
			printf("�����ۺ��� ���� : %lf\n", sinh(t));
			printf("�����ۺ��� �ڻ��� : %lf\n", cosh(t));
			printf("�����ۺ��� ź��Ʈ : %lf\n\n", tanh(t));

		input1:

			key = _getch();
			subkey = inputkeys(key);

			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("�� �����̽� Ű�� �Է����ֽñ� �ٶ��ϴ�.\n");
				goto input1;
			}

		case 50: // e^x
			system("cls");

			double ex = 0;

			printf("e^x(e�� x��, �� e�� �ڿ����)���� x�� ���� �Է����ּ���.\n\n");
			printf("�Է� : ");
			scanf_s("%lf", &ex);
			fseek(stdin, 0, SEEK_SET);

			printf("\n�Էµ� �� : %lf\n\n", ex);
			printf("e^x : %lf\n\n", exp(ex));

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

		case 51: // log
			system("cls");

			double nlog = 0;

			printf("log ������ �ٲ� ���� �Է����ּ���.\n\n");
			printf("�Է� : ");
			scanf_s("%lf", &nlog);
			fseek(stdin, 0, SEEK_SET);

			printf("\n�Էµ� �� : %lf\n\n", nlog);
			printf("log�� : %lf\n", log(nlog));
			printf("log10 �� : %lf\n\n", log10(nlog));

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

		case 52: // abs
			system("cls");

			double nabs = 0;

			printf("������ ���� ���� �Է����ּ���\n\n");
			printf("�Է� : ");
			scanf_s("%lf", &nabs);
			fseek(stdin, 0, SEEK_SET);

			printf("\n�Էµ� �� : %lf\n\n", nabs);
			printf("���� : %lf\n\n", fabs(nabs));

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
		case 53: // sqrt
			system("cls");

			double nsqrt = 0;

			printf("'��Ʈ n'���� n�� ���� �Է����ּ���\n\n");
			printf("�Է� : ");
			scanf_s("%lf", &nsqrt);
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
		case 54: // x^y
			system("cls");

			double xpow = 0;
			double ypow = 0;

			printf("x^y(x�� y��)�� ������ �Է����ּ���\n\n");
			printf("x �� �Է� : ");
			scanf_s("%lf", &xpow);
			fseek(stdin, 0, SEEK_SET);
			printf("y �� �Է� : ");
			scanf_s("%lf", &ypow);
			fseek(stdin, 0, SEEK_SET);

			printf("\n�Էµ� �� : x = %lf, y = %lf\n\n", xpow, ypow);
			printf("x^y �� : %lf\n\n", pow(xpow, ypow));

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
		case 55: // fmod
		FMOD :

			system("cls");

			double xmod = 0;
			double ymod = 0;

			printf("x�� y�� ���� ������ ���� ���� �� ���� �Է����ּ���\n\n");
			printf("x �� �Է� : ");
			scanf_s("%lf", &xmod);
			fseek(stdin, 0, SEEK_SET);
			printf("y �� �Է� : ");
			scanf_s("%lf", &ymod);
			fseek(stdin, 0, SEEK_SET);

			if (xmod < ymod) {
				system("cls");
				printf("�Է��Ͻ� �� x ���� y ������ Ŀ���մϴ�. (�� �����̽� ���� ���ư���)\n\n");
				
			ERinput1 :

				key = _getch();
				subkey = inputkeys(key);
				if (subkey == 1) {
					goto FMOD;
				}
				else {
					printf("�� �����̽�Ű�� �Է����ֽñ� �ٶ��ϴ�.\n");
					goto ERinput1;
				}
			}
			else if (ymod == 0) {
				system("cls");
				printf("y ���� 0�� �� �� �����ϴ�. (�� �����̽� ���� ���ư���)\n\n");

			ERinput2:

				key = _getch();
				subkey = inputkeys(key);
				if (subkey == 1) {
					goto FMOD;
				}
				else {
					printf("�� �����̽�Ű�� �Է����ֽñ� �ٶ��ϴ�.\n");
					goto ERinput2;
				}
			}

			printf("\n�Էµ� �� : x = %lf, y = %lf\n\n", xmod, ymod);
			printf("������ �� : %lf\n\n", fmod(xmod, ymod));

		input7:

			key = _getch();
			subkey = inputkeys(key);

			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("�� �����̽� Ű�� �Է����ֽñ� �ٶ��ϴ�.\n");
				goto input7;
			}
		case 56:
			system("cls");
			printf("====================\n\n");
			printf("���α׷����� �����ϴ� ��� ������ ������ �����ϴ�.\n\n");
			printf("====================\n\n");
			printf("�ڿ����(e) : %lf\n\n", M_E);
			printf("log2e : %lf\n", M_LOG2E);
			printf("log10e : %lf\n", M_LOG10E);
			printf("loge2 : %lf\n", M_LN2);
			printf("loge10 : %lf\n\n", M_LN10);
			printf("������(��) : %lf\n", M_PI);
			printf("��/2 : %lf\n", M_PI_2);
			printf("��/4 : %lf\n", M_PI_4);
			printf("1/�� : %lf\n", M_1_PI);
			printf("2/�� : %lf\n", M_2_PI);
			printf("2/��� : %lf\n\n", M_2_SQRTPI);
			printf("��2 : %lf\n", M_SQRT2);
			printf("1/��2 : %lf\n\n", M_SQRT1_2);

		input8:

			key = _getch();
			subkey = inputkeys(key);
			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("�� �����̽� Ű�� �Է����ֽñ� �ٶ��ϴ�.\n");
				goto input8;
			}

		case 57 :
			system("cls");

			int exitkey = 0;
			int funEkey = 0;

			printf("====================\n\n");
			printf("������ �����ðڽ��ϱ�? [y/n]\n\n");
			printf("====================\n\n");

		EXIT :

			exitkey = _getch();
			funEkey = inputkeys(exitkey);


			if (exitkey == 89 || exitkey == 121) {
				return 0;
			}
			else if (exitkey == 78 || exitkey == 110 || funEkey == 1) {
				goto MAIN;
			}
			else {
				printf("Y �Ǵ� N�� �������ֽñ� �ٶ��ϴ�.\n");
				goto EXIT;
			}
		default :
			printf("������ Ű�� �Է����ֽñ� �ٶ��ϴ�.\n");
			goto Minput;
		}
	}
	else {
	system("cls");
		printf("�̹� ����ȭ�鿡 �ֽ��ϴ�.\n\n");
	MERRinput:

		key = _getch();
		subkey = inputkeys(key);

		if (subkey == 1) {
			goto MAIN;
		}
		else {
			printf("�� �����̽� Ű�� �Է����ֽñ� �ٶ��ϴ�.\n");
			goto MERRinput;
		}
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

// Code by ��ť��(Secure)