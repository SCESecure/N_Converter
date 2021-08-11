#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

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
	printf("<수 변환기 1.1>\n\n");
	printf("[자세한 내용과 사용법은 https://github.com/SCESecure/N_Converter 에서 확인 바랍니다.]\n\n");
	printf("1. 삼각비 값\n");
	printf("2. e^x 값\n");
	printf("3. log 값\n");
	printf("4. 절댓값\n");
	printf("5. 제곱근 값\n");
	printf("6. x^y 값\n");
	printf("7. x를 y로 나눈 나머지 값\n");
	printf("8. 상수값 표시\n");
	printf("9. 종료\n");
	printf("====================\n");

Minput :

	key = _getch();
	subkey = inputkeys(key);

	// 서브 화면

	if (subkey == 2) {
		switch (key)
		{
		case 49: // 삼각비
			system("cls");

			double t = 0;

			printf("삼각비 값으로 바꿀 값을 입력해주세요.\n\n");
			printf("입력 : ");
			scanf_s("%lf", &t);
			fseek(stdin, 0, SEEK_SET);

			printf("\n입력된 수 : %lf\n\n", t);
			printf("사인 : %lf\n", sin(t));
			printf("코사인 : %lf\n", cos(t));
			printf("탄젠트 : %lf\n\n", tan(t));
			printf("아크 사인 : %lf\n", asin(t));
			printf("아크 코사인 : %lf\n", acos(t));
			printf("아크 탄젠트 : %lf\n", atan(t));
			printf("아크 코사인 : %lf\n\n", acos(t));
			printf("하이퍼볼릭 사인 : %lf\n", sinh(t));
			printf("하이퍼볼릭 코사인 : %lf\n", cosh(t));
			printf("하이퍼볼릭 탄젠트 : %lf\n\n", tanh(t));

		input1:

			key = _getch();
			subkey = inputkeys(key);

			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("백 스페이스 키를 입력해주시길 바랍니다.\n");
				goto input1;
			}

		case 50: // e^x
			system("cls");

			double ex = 0;

			printf("e^x(e의 x승, 단 e는 자연상수)에서 x의 값을 입력해주세요.\n\n");
			printf("입력 : ");
			scanf_s("%lf", &ex);
			fseek(stdin, 0, SEEK_SET);

			printf("\n입력된 수 : %lf\n\n", ex);
			printf("e^x : %lf\n\n", exp(ex));

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

		case 51: // log
			system("cls");

			double nlog = 0;

			printf("log 값으로 바꿀 수를 입력해주세요.\n\n");
			printf("입력 : ");
			scanf_s("%lf", &nlog);
			fseek(stdin, 0, SEEK_SET);

			printf("\n입력된 수 : %lf\n\n", nlog);
			printf("log값 : %lf\n", log(nlog));
			printf("log10 값 : %lf\n\n", log10(nlog));

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

		case 52: // abs
			system("cls");

			double nabs = 0;

			printf("절댓값을 구할 수를 입력해주세요\n\n");
			printf("입력 : ");
			scanf_s("%lf", &nabs);
			fseek(stdin, 0, SEEK_SET);

			printf("\n입력된 수 : %lf\n\n", nabs);
			printf("절댓값 : %lf\n\n", fabs(nabs));

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
		case 53: // sqrt
			system("cls");

			double nsqrt = 0;

			printf("'루트 n'에서 n의 값을 입력해주세요\n\n");
			printf("입력 : ");
			scanf_s("%lf", &nsqrt);
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
		case 54: // x^y
			system("cls");

			double xpow = 0;
			double ypow = 0;

			printf("x^y(x의 y승)의 값들을 입력해주세요\n\n");
			printf("x 값 입력 : ");
			scanf_s("%lf", &xpow);
			fseek(stdin, 0, SEEK_SET);
			printf("y 값 입력 : ");
			scanf_s("%lf", &ypow);
			fseek(stdin, 0, SEEK_SET);

			printf("\n입력된 수 : x = %lf, y = %lf\n\n", xpow, ypow);
			printf("x^y 값 : %lf\n\n", pow(xpow, ypow));

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
		case 55: // fmod
		FMOD :

			system("cls");

			double xmod = 0;
			double ymod = 0;

			printf("x를 y로 나눈 나머지 값을 구할 때 값을 입력해주세요\n\n");
			printf("x 값 입력 : ");
			scanf_s("%lf", &xmod);
			fseek(stdin, 0, SEEK_SET);
			printf("y 값 입력 : ");
			scanf_s("%lf", &ymod);
			fseek(stdin, 0, SEEK_SET);

			if (xmod < ymod) {
				system("cls");
				printf("입력하실 때 x 값이 y 값보다 커야합니다. (백 스페이스 눌러 돌아가기)\n\n");
				
			ERinput1 :

				key = _getch();
				subkey = inputkeys(key);
				if (subkey == 1) {
					goto FMOD;
				}
				else {
					printf("백 스페이스키를 입력해주시길 바랍니다.\n");
					goto ERinput1;
				}
			}
			else if (ymod == 0) {
				system("cls");
				printf("y 값이 0이 될 수 없습니다. (백 스페이스 눌러 돌아가기)\n\n");

			ERinput2:

				key = _getch();
				subkey = inputkeys(key);
				if (subkey == 1) {
					goto FMOD;
				}
				else {
					printf("백 스페이스키를 입력해주시길 바랍니다.\n");
					goto ERinput2;
				}
			}

			printf("\n입력된 수 : x = %lf, y = %lf\n\n", xmod, ymod);
			printf("나머지 값 : %lf\n\n", fmod(xmod, ymod));

		input7:

			key = _getch();
			subkey = inputkeys(key);

			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("백 스페이스 키를 입력해주시길 바랍니다.\n");
				goto input7;
			}
		case 56:
			system("cls");
			printf("====================\n\n");
			printf("프로그램에서 지원하는 상수 값들은 다음과 같습니다.\n\n");
			printf("====================\n\n");
			printf("자연상수(e) : %lf\n\n", M_E);
			printf("log2e : %lf\n", M_LOG2E);
			printf("log10e : %lf\n", M_LOG10E);
			printf("loge2 : %lf\n", M_LN2);
			printf("loge10 : %lf\n\n", M_LN10);
			printf("원주율(π) : %lf\n", M_PI);
			printf("π/2 : %lf\n", M_PI_2);
			printf("π/4 : %lf\n", M_PI_4);
			printf("1/π : %lf\n", M_1_PI);
			printf("2/π : %lf\n", M_2_PI);
			printf("2/√π : %lf\n\n", M_2_SQRTPI);
			printf("√2 : %lf\n", M_SQRT2);
			printf("1/√2 : %lf\n\n", M_SQRT1_2);

		input8:

			key = _getch();
			subkey = inputkeys(key);
			if (subkey == 1) {
				goto MAIN;
			}
			else {
				printf("백 스페이스 키를 입력해주시길 바랍니다.\n");
				goto input8;
			}

		case 57 :
			system("cls");

			int exitkey = 0;
			int funEkey = 0;

			printf("====================\n\n");
			printf("정말로 나가시겠습니까? [y/n]\n\n");
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
				printf("Y 또는 N을 선택해주시길 바랍니다.\n");
				goto EXIT;
			}
		default :
			printf("지정된 키를 입력해주시길 바랍니다.\n");
			goto Minput;
		}
	}
	else {
	system("cls");
		printf("이미 메인화면에 있습니다.\n\n");
	MERRinput:

		key = _getch();
		subkey = inputkeys(key);

		if (subkey == 1) {
			goto MAIN;
		}
		else {
			printf("백 스페이스 키를 입력해주시길 바랍니다.\n");
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

// Code by 시큐어(Secure)