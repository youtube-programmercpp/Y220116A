#include <iostream>
int main()
{
	int a, b;
	if (std::cin >> a >> b) {
		//�������
		std::cout << a << " + " << b << " = " << a + b << "\n";
	}
	else {
		//���͎��s
		std::cout << "���͎͂��s���܂����B\n";
	}
}
