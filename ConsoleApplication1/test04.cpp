#include <iostream>
int main()
{
	int n;
	if (std::cin >> n) {
		//正常入力
		std::cout << n << "が入力されました。\n";
	}
	else {
		//入力失敗
		std::cout << "入力は失敗しました。\n";
	}
}
