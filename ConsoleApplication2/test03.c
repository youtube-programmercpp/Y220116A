#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //exit 関数
int main()
{
	//入力された値が 0 以上である間繰り返す
	for (;;) {
		int 入力値;
		if (scanf("%d", &入力値) == 1) {
			if (入力値 >= 0)
				continue;
			else
				break;
		}
		else {
			printf("正しく入力されませんでした。\n");
			exit(EXIT_FAILURE);
		}
		printf("*\n");
	}
}
