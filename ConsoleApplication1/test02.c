#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	const int n = scanf("%d%d", &a, &b);//‰Šú‰»
	switch (n) {
	case 2://scanf ‚©‚ç‚Ì–ß‚è’l‚ª‚Q‚Ìê‡
		printf("%d\n", a + b);
		break;
	case 1://scanf ‚©‚ç‚Ì–ß‚è’l‚ª‚P‚Ìê‡
		printf("ˆê‚Â–Ú‚Ì“ü—Í‚Í¬Œ÷\n");
		printf("“ñ‚Â–Ú‚Ì“ü—Í‚Í¸”s\n");
		break;
	case 0://scanf ‚©‚ç‚Ì–ß‚è’l‚ª‚O‚Ìê‡
		printf("Å‰‚©‚ç¸”s\n");
		break;
	case EOF://End-Of-File
		printf("EOF‚Æ‚È‚è‚Ü‚µ‚½B\n");
		break;
	}
}
