#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	const int n = scanf("%d%d", &a, &b);//������
	switch (n) {
	case 2://scanf ����̖߂�l���Q�̏ꍇ
		printf("%d\n", a + b);
		break;
	case 1://scanf ����̖߂�l���P�̏ꍇ
		printf("��ڂ̓��͂͐���\n");
		printf("��ڂ̓��͎͂��s\n");
		break;
	case 0://scanf ����̖߂�l���O�̏ꍇ
		printf("�ŏ����玸�s\n");
		break;
	case EOF://End-Of-File
		printf("EOF�ƂȂ�܂����B\n");
		break;
	}
}
