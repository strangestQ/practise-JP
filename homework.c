#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//新明解C言語入門演習1-1
//int main()
//{
//
//	printf("15から37を引いた値は%dです。\n", 15 - 37);
//	return 0;
//}
//新明解C言語入門演習1-2
//int main()
//{
//	printf("守\n破\n離\n");
//	return 0;
//}
//新明解C言語入門演習1-3
//int main()
//{
//	printf("こんにちは。\nお元気ですか。\n\nさようなら。\n");
//
//	return 0;
//}
//新明解C言語入門演習1-4
//int main()
//{
//	int x = 3.14;
//	printf("xの値は%dで。\n", x);
//	return 0;
//}
//新明解C言語入門演習1-5
//int main()
//{
//	int no;
//	printf("整数を入力してください：");
//	scanf("%d",&no);
//	printf("%dに13を加えると%dです。\n", no, no + 13);
//	return 0;
//}
//新明解C言語入門演習1-6
//int main()
//{
//	int no;
//	printf("整数を入力してください：");
//	scanf("%d",&no);
//	printf("%dから7減じると%dです。\n", no, no - 7);
//	return 0;
//}
//新明解C言語入門演習1-7
//int main()
//{
//	puts("守");
//	puts("破");
//	puts("離");
//	return 0;
//}
//新明解C言語入門演習1-8
//int main()
//{
//	int n1, n2;
//	puts("二つの整数を入力してください。");
//	printf("整数n1:"); scanf("%d", &n1);
//	printf("整数n2:"); scanf("%d", &n2);
//	printf("それらの積は%dです。\n", n1 * n2);
//	return 0;
//}
//新明解C言語入門演習1-9
//int main()
//{
//	int n1, n2, n3;
//	puts("三つの整数を入力してください。");
//	printf("整数n1:"); scanf("%d", &n1);
//	printf("整数n2:"); scanf("%d", &n2);
//	printf("整数n3:"); scanf("%d", &n3);
//	printf("それらの和は%dです。\n", n1 + n2 + n3);
//	return 0;
//}
//新明解C言語入門演習2-1
//int main()
//{
//	int x, y;
//	puts("二つの整数を入力せよ。");
//	printf("整数x:"); scanf("%d", &x);
//	printf("整数y:"); scanf("%d", &y);
//	printf("xの値はyの%d%%です。\n", 100 * x / y);
//	return 0;
//}
//新明解C言語入門演習2-2
//int main()
//{
//	int a, b;
//	puts("二つの整数を入力せよ。");
//	printf("整数a:"); scanf("%d", &a);
//	printf("整数b:"); scanf("%d", &b);
//	printf("それらの和は%dで積は%dです。\n",a+b,a*b);
//
//	return 0;
//}
//新明解C言語入門演習2-3
//int main()
//{
//	double a;
//	printf("実数を入力せよ:"); scanf("%lf", &a);
//	printf("あなたは%fと入力しましたね。\n", a);
//	return 0;
//}
//新明解C言語入門演習2-4
//int main()
//{
//	int a;
//	double b;
//	printf("a="); scanf("%d", &a);
//	printf("b="); scanf("%lf", &b);
//	printf("a+b=%f\n", a + b);
//	printf("a-b=%f\n", a - b);
//	printf("a*b=%f\n", a * b);
//	printf("a/b=%f\n", a / b);
//	return 0;
//}
//新明解C言語入門演習2-5
//int main()
//{
//	int x, y;
//	puts("二つの整数を入力せよ。");
//	printf("整数x:"); scanf("%d", &x);
//	printf("整数y:"); scanf("%d", &y);
//	printf("xの値はyの%f%%です。\n", (double)100 * x / y);
//	return 0;
//}
//新明解C言語入門演習2-6
//int main()
//{
//	int a;
//	printf("身長を入力せよ:"); scanf("%d", &a);
//	double b=(a - 100) * 0.9;
//	printf("標準体重は%3.1fです。\n", b);
//    return 0;
//}
//新明解C言語入門演習3-1
//int main()
//{
//	int a, b = 0;
//	puts("二つの整数を入力せよ。");
//	printf("整数A："); scanf("%d", &a);
//	printf("整数B："); scanf("%d", &b);
//	if (a % b)
//	{
//		printf("BはAの約数ではありません。\n");
//	}
//	else
//	{
//		printf("BはAの約数です。\n");
//	}
//	return 0;
//}
//新明解C言語入門演習3-2
//int main()
//{
//	int no;
//	printf("整数を入力せよ:");
//	scanf("%d", &no);
//	if (no == 0)
//	{
//		puts("その数は0です。\n");
//	}
//	else if (no > 0)
//	{
//		puts("その数は正です。\n");
//	}
//	else if (no < 0)//最後はelseの場合,後ろに続く(式)は要らない。但し,最後をelse ifにした場合,前と同じく(式)が必要になる
//	{
//		puts("その数は負です。\n");
//	}
//	return 0;
//}
//新明解C言語入門演習3-3
//int main()
//{
//	int x = 0;
//	printf("整数を入力せよ:");
//	scanf("%d", &x);
//	if (x >= 0)
//	{
//		printf("絶対値は%dです。\n", x);
//	}
//	else
//	{
//		printf("絶対値は%dです。\n", -x);
//	}
//	return 0;
//}
//新明解C言語入門演習3-4
//int main()
//{
//	int a, b = 0;
//	puts("二つの整数を入力せよ。");
//	printf("整数A："); scanf("%d", &a);
//	printf("整数B："); scanf("%d", &b);
//	if (a == b)
//	{
//		printf("AとBは等しいです。\n");
//	}
//	else if (a > b)
//	{
//		printf("AはBより大きいです。\n");
//	}
//	else
//	{
//		printf("AはBより小さいです。\n");
//	}
//	return 0;
//}
//新明解C言語入門演習3-5
//int main()
//{
//	int a, b = 0;
//	scanf("%d%d", &a,&b);
//	puts("等価演算子'=='");
//	if (a == b)
//	{
//		puts("判断結果:1\n");
//	}
//	else
//	{
//		puts("判断結果:0\n");
//	}
//	puts("関係演算子'!='");
//	if (a != b)
//	{
//		puts("判断結果:1\n");
//	}
//	else
//	{
//		puts("判断結果:0\n");
//	}
//	return 0;
//}
//新明解C言語入門演習3-6
//int main()
//{
//	int a, b, c = 0; 
//	puts("三つの整数を入力せよ。");
//	scanf("%d%d%d", &a, &b, &c);
//	int min = a;
//	if (b < min)
//	{
//		min = b;
//	}
//	if (c < min)
//	{
//		min = c;
//	}
//	printf("それらの最小値は%dです。\n", min);
//	return 0;
//}
//新明解C言語入門演習3-7
//int main()
//{
//	int n1, n2, n3, n4 = 0;
//	puts("四つの整数を入力せよ。");
//	scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
//	int max = n1;
//	if (n2 > max)
//	{
//		max = n2;
//	}
//	if (n3 > max)
//	{
//		max = n3;
//	}
//	if (n4 > max)
//	{
//		max = n4;
//	}
//	printf("それらの最大値は%dです。\n", max);
//	return 0;
//}
//新明解C言語入門演習3-8
//int main()
//{
//	int n1, n2 = 0;
//	puts("二つの整数を入力せよ。");
//	printf("整数1："); scanf("%d", &n1);
//	printf("整数2："); scanf("%d", &n2);
//	if (n1 > n2)
//	{
//		printf("それらの差は%dです。\n", n1 - n2);
//	}
//	else
//	{
//		printf("それらの差は%dです。\n", n2 - n1);
//	}
//	return 0;
//}
//新明解C言語入門演習3-9
//int main()
//{
//	int a, b, c = 0; 
//	puts("三つの整数を入力せよ。");
//	scanf("%d%d%d", &a, &b, &c);
//	int min = a < b ? a : b;
//	min = min < c ? min : c;
//	printf("それらの最小値は%dです。\n", min);
//	return 0;
//}
//新明解C言語入門演習3-10
//int main()
//{
//	int a, b, c = 0;
//	puts("三つの整数を入力せよ。");
//	printf("整数A："); scanf("%d", &a);
//	printf("整数B："); scanf("%d", &b);
//	printf("整数C："); scanf("%d", &c);
//	if (a == b && b == c)
//	{
//		printf("三つの値は等しいです。\n");
//	}
//	else if (a == b || a == c || b == c)
//	{
//		printf("二つの値は等しいです。\n");
//	}
//	else
//	{
//		printf("三つの値は異なります。\n");
//	}
//	return 0;
//}
//新明解C言語入門演習3-11
//int main()
//{
//	int a, b = 0;
//	puts("二つの整数を入力せよ。");
//	printf("整数A："); scanf("%d", &b);
//	printf("整数B："); scanf("%d", &a);
//	if ((a > b && a - b <= 10) || (b > a && b - a <= 10))
//	{
//		printf("それらの差は10以下です。\n");
//	}
//	else
//	{
//		printf("それらの差は11以上です。\n");
//	}
//	return 0;
//}
//新明解C言語入門演習3-12
//int main()
//{
//	int n;
//	printf("整数を入力せよ:");
//	scanf("%d", &n);
//	switch (n % 2)
//	{
//	case 1:
//		puts("その数は奇数です。\n");
//		break;
//	default:
//		puts("その数は偶数です。\n");
//		break;
//	}
//	return 0;
//}
//新明解C言語入門演習3-13
//int main()
//{
//	int month;
//	printf("何月ですか:");
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1:
//	case 2:
//		printf("%d月は冬です。\n", month);
//		break;
//	case 3:
//	case 4:
//	case 5:
//		printf("%d月は春です。\n", month);
//		break;
//	case 6:
//	case 7:
//	case 8:
//		printf("%d月は夏です。\n", month);
//		break;
//	case 9:
//	case 10:
//	case 11:
//		printf("%d月は秋です。\n", month);
//		break;
//	case 12:
//		printf("%d月は冬です。\n", month);
//		break;
//	default:
//		printf("%d月はありませんよ!!\n", month);
//		break;
//	}
//	return 0;
//}