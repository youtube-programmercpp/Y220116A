#include <iostream>
int main()
{
	int a, b;
	if (std::cin >> a >> b) {
		//³í“ü—Í
		std::cout << a << " + " << b << " = " << a + b << "\n";
	}
	else {
		//“ü—Í¸”s
		std::cout << "“ü—Í‚Í¸”s‚µ‚Ü‚µ‚½B\n";
	}
}
