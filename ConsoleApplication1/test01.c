#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//簡単なプログラムであっても
	//scanf からの戻り値をよく見ることが大切
	int a, b;
	if (scanf("%d%d", &a, &b) == 2) {
		//正常に入力された
		printf("%d + %d = %d\n", a, b, a + b);
	}
	else {
		//入力失敗
		printf("正しく入力されませんでした。");
	}
}
