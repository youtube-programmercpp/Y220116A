#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//�ȒP�ȃv���O�����ł����Ă�
	//scanf ����̖߂�l���悭���邱�Ƃ����
	int a, b;
	if (scanf("%d%d", &a, &b) == 2) {
		//����ɓ��͂��ꂽ
		printf("%d + %d = %d\n", a, b, a + b);
	}
	else {
		//���͎��s
		printf("���������͂���܂���ł����B");
	}
}
