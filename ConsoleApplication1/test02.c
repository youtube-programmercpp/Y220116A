#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	const int n = scanf("%d%d", &a, &b);//初期化
	switch (n) {
	case 2://scanf からの戻り値が２の場合
		printf("%d\n", a + b);
		break;
	case 1://scanf からの戻り値が１の場合
		printf("一つ目の入力は成功\n");
		printf("二つ目の入力は失敗\n");
		break;
	case 0://scanf からの戻り値が０の場合
		printf("最初から失敗\n");
		break;
	case EOF://End-Of-File
		printf("EOFとなりました。\n");
		break;
	}
}
