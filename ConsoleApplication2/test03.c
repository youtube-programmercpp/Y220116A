#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //exit �֐�
int main()
{
	//���͂��ꂽ�l�� 0 �ȏ�ł���ԌJ��Ԃ�
	for (;;) {
		int ���͒l;
		if (scanf("%d", &���͒l) == 1) {
			if (���͒l >= 0)
				continue;
			else
				break;
		}
		else {
			printf("���������͂���܂���ł����B\n");
			exit(EXIT_FAILURE);
		}
		printf("*\n");
	}
}
