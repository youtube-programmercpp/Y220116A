#include <iostream>
int main()
{
	int a, b;
	if (std::cin >> a >> b) {
		//正常入力
		std::cout << a << " + " << b << " = " << a + b << "\n";
	}
	else {
		//入力失敗
		std::cout << "入力は失敗しました。\n";
	}
}
