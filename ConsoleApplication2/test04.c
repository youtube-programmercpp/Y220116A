#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //exit 関数, EXIT_SUCCESS, EXIT_FAILURE
int main()
{
	//入力された値が 0 以上である間繰り返す
	int 入力値;
繰り返しの開始点: //ラベル(label)
	if (scanf("%d", &入力値) == 1) {
		if (入力値 >= 0)
			goto 繰り返しの開始点;
		else
			goto 終了点;
	}
	else {
		printf("正しく入力されませんでした。\n");
		exit(EXIT_FAILURE);
	}
終了点:
	return EXIT_SUCCESS;
}
