#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <math.h>

int inputkeys(int keynum);

int main() {
	// 전역 변수
	int key = 0;
	int subkey = 0;
	
MAIN :

	// 메인 화면
	system("cls");
	printf("====================\n");
	printf("<수 변환기>\n\n");
	printf("1. 삼각비 값\n");
	printf("2. e^x 값\n");
	printf("3. log 값\n");
	printf("4. 절댓값\n");
	printf("5. 제곱근 값\n");
	printf("6. x^y 값\n");
	printf("7. 나머지 값\n");
	printf("8. 종료\n");
	printf("====================\n");

	key = _getch();
	subkey = inputkeys(key);

	// 서브 화면

	if (subkey == 2) {
		switch (key)
		{
		case 49 :
			system("cls");

			double t = 0;

			printf("삼각비 값으로 바꿀 값을 입력해주세요.\n\n");
			printf("입력 : ");
			scanf("%lf", &t);
			fseek(stdin, 0, SEEK_SET);

			printf("\n입력된 수 : %d\n\n", t);
			printf("사인 : %lf\n", sin(t));
			printf("코사인 : %lf\n", cos(t));
			printf("탄젠트 : %lf\n\n", tan(t));
			printf("아크 사인 : %lf\n", asin(t));
			printf("아크 코사인 : %lf\n", acos(t));
			printf("아크 탄젠트 : %lf\n", atan(t));
			printf("아크 코사인 : %lf\n\n", acos(t));
			printf("하이퍼볼릭 사인 : %lf\n", sinh(t));
			printf("하이퍼볼릭 코사인 : %lf\n", cosh(t));
			printf("하이퍼볼릭 탄젠트 : %lf\n", tanh(t));

		input1 :

			key = _getch();
			subkey = inputkeys(key);
			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("백 스페이스 키를 입력해주시길 바랍니다.\n");
				goto input1;
			}

		case 50 :
			system("cls");

			double ex = 0;

			printf("e^x(e의 x승, 단 e는 자연상수)에서 x의 값을 입력해주세요.\n");
			printf("입력 : ");
			scanf("%lf", &ex);
			fseek(stdin, 0, SEEK_SET);

			printf("\n입력된 수 : %lf\n\n", ex);
			printf("e^x : %lf\n", exp(ex));

		input2:

			key = _getch();
			subkey = inputkeys(key);
			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("백 스페이스 키를 입력해주시길 바랍니다.\n");
				goto input2;
			}

		case 51 :
			system("cls");

			double nlog = 0;

			printf("log 값으로 바꿀 수를 입력해주세요.\n");
			printf("입력 : ");
			scanf("%lf", &nlog);
			fseek(stdin, 0, SEEK_SET);

			printf("\n입력된 수 : %lf\n\n", nlog);
			printf("log값 : %lf\n", log(nlog));
			printf("log10 값 : %lf\n", log10(nlog));

		input3:

			key = _getch();
			subkey = inputkeys(key);
			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("백 스페이스 키를 입력해주시길 바랍니다.\n");
				goto input3;
			}

		case 52 :
			system("cls");

			double nabs = 0;

			printf("절댓값을 구할 수를 입력해주세요\n");
			printf("입력 : ");
			scanf("%lf", &nabs);
			fseek(stdin, 0, SEEK_SET);

			printf("\n입력된 수 : %lf\n\n", nabs);
			printf("절댓값 : %lf\n", abs(nabs));

		input4:

			key = _getch();
			subkey = inputkeys(key);
			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("백 스페이스 키를 입력해주시길 바랍니다.\n");
				goto input4;
			}
		case 53 :
			system("cls");

			double nsqrt = 0;

			printf("'루트 n'에서 n의 값을 입력해주세요\n");
			printf("입력 : ");
			scanf("%lf", &nsqrt);
			fseek(stdin, 0, SEEK_SET);

			printf("\n입력된 수 : %lf\n\n", nsqrt);
			printf("제곱근 값 : %lf\n", sqrt(nsqrt));

		input5:

			key = _getch();
			subkey = inputkeys(key);
			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("백 스페이스 키를 입력해주시길 바랍니다.\n");
				goto input5;
			}
		case 54 :
			system("cls");

			double xpow = 0;
			double ypow = 0;

			printf("x^y(x의 y승)의 값들을 입력해주세요\n");
			printf("x 입력 : ");
			scanf("%lf", &xpow);
			fseek(stdin, 0, SEEK_SET);
			scanf("%lf", ypow);
			fseek(stdin, 0, SEEK_SET);

			printf("\n입력된 수 : x = %lf, y = %lf\n\n", xpow, ypow);
			printf("x^y 값 : %lf\n", pow(xpow, ypow));

		input6:

			key = _getch();
			subkey = inputkeys(key);
			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("백 스페이스 키를 입력해주시길 바랍니다.\n");
				goto input6;
			}
		case 55 :
		case 56 :
		default :
			
		}
	}
	else {
		printf("이미 메인화면에 있습니다.\a");
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