#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //exit �֐�, EXIT_SUCCESS, EXIT_FAILURE
int main()
{
	//���͂��ꂽ�l�� 0 �ȏ�ł���ԌJ��Ԃ�
	int ���͒l;
�J��Ԃ��̊J�n�_: //���x��(label)
	if (scanf("%d", &���͒l) == 1) {
		if (���͒l >= 0)
			goto �J��Ԃ��̊J�n�_;
		else
			goto �I���_;
	}
	else {
		printf("���������͂���܂���ł����B\n");
		exit(EXIT_FAILURE);
	}
�I���_:
	return EXIT_SUCCESS;
}
