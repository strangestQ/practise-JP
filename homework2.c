#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//新明解C言語入門演習6-1
//int min2(int a, int b)
//{
//	int min;
//	if (a < b)
//		min = a;
//	else
//		min = b;
//	return min;
//}
//int main()
//{
//	int a, b;
//	puts("二つの整数を入力せよ。");
//	printf("整数1 : "); scanf("%d", &a);
//	printf("整数2 : "); scanf("%d", &b);
//	printf("小さいほうの値は%dです。\n", min2(a, b));
//	return 0;
//}
//新明解C言語入門演習6-2
//int min3(int a, int b,int c)
//{
//	int min = a;
//	if (min > b)
//		min = b;
//	if (min > c)
//		min = c;
//	return min;
//}
//int main()
//{
//	int a, b, c;
//	puts("三つの整数を入力せよ。");
//	printf("整数1 : "); scanf("%d", &a);
//	printf("整数2 : "); scanf("%d", &b);
//	printf("整数3 : "); scanf("%d", &c);
//	printf("小さいほうの値は%dです。\n", min3(a, b, c));
//	return 0;
//}
//新明解C言語入門演習6-3
//int cube(int x)
//{
//	return x * x * x;
//}
//int main()
//{
//	int x;
//	printf("整数を入力せよ:");
//	scanf("%d", &x);
//	printf("その数の3乗値は%dです。\n", cube(x));
//	return 0;
//}
//新明解C言語入門演習6-4
//int sqr(int x)
//{
//	return x * x;
//}
//int pow4(int x)
//{
//	return sqr(x) * sqr(x);
//}
//int main()
//{
//	int x;
//	printf("整数を入力せよ:");
//	scanf("%d", &x);
//	printf("その数の4乗値は%dです。\n", pow4(x));
//	return 0;
//}
//新明解C言語入門演習6-5
//int sumup(int n)
//{
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//int main()
//{
//	int n;
//	printf("整数を入力せよ:");
//	scanf("%d", &n);
//	printf("1から%dまでの整数の和は%dです。\n", n, sumup(n));
//	return 0;
//}
//新明解C言語入門演習6-6
//新明解C言語入門演習6-7
//新明解C言語入門演習6-8
//新明解C言語入門演習6-9
//新明解C言語入門演習6-10
//新明解C言語入門演習6-11
//新明解C言語入門演習6-12
//新明解C言語入門演習6-13
//新明解C言語入門演習6-14
//新明解C言語入門演習6-15