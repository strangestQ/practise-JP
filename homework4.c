#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//新明解C言語入門演習8-1
//#define diff(x,y) ((x)-(y))
//
//int main()
//{
//	int x = 0, y = 0;
//	printf("二つの整数を入力してください：");
//	scanf("%d %d", &x, &y);
//	printf("二つの値の差は%dです。\n", diff(x, y));
//	return 0;
//}
//新明解C言語入門演習8-2
//#define max(x,y) (((x)>(y))?(x):(y))
//
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	printf("a,b,c,dを順番に入力してください：");
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("最大値は：%d\n", max(max(a, b), max(c, d)));
//	//まずaとbの最大値を求める、次にcとdの最大値求める、最後にその二つの値の最大値を求める
//	printf("最大値は：%d\n", max(max(max(a, b), c), d));
//	//まずaとbの最大値を求める、次にその値とcの最大値を求める、最後に得た値をdとの最大値を求める
//	return 0;
//}
//新明解C言語入門演習8-3
//#define swap(type,x,y) ((x)=(x)^(y),(y)=(x)^(y),(x)=(x)^(y))
//
//int main()
//{
//	int x = 0, y = 0;
//	printf("x,yを順番に入力してください：");
//	scanf("%d %d", &x, &y);
//	printf("二つの数を交換した後は：\n");
//	swap(int, x, y);
//	printf("x = %d y = %d\n", x, y);
//	return 0;
//}
//新明解C言語入門演習8-4
//#define NUMBER 5
//
//void bsort(int a[], int n)
//{
//	int i = 0, j = 0;
//	for (i = n - 1; i > 0; i--)
//	{
//		for (j = 0; j < i ; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int height[NUMBER];
//	int i = 0;
//	printf("%d人の身長を入力せよ。\n", NUMBER);
//	for (i = 0; i < NUMBER; i++)
//	{
//		printf("%2d番：", i + 1);
//		scanf("%d", &height[i]);
//	}
//	bsort(height, NUMBER);
//	puts("降順にソートしました。");
//	for (i = 0; i < NUMBER; i++)
//	{
//		printf("%2d番：%d\n", i + 1, height[i]);
//	}
//	return 0;
//}
//新明解C言語入門演習8-5
//enum season { Spring = 1, Summer, Autumn, Winter, Invalid };
//
//void spring()
//{
//	puts("春の桜満開！\n");
//}
//void summer()
//{
//	puts("夏は海だ！\n");
//}
//void autumn()
//{
//	puts("秋の紅葉は綺麗！\n");
//}
//void winter()
//{
//	puts("冬は雪降ると楽しい！\n");
//}
//int main()
//{
//	int select = 0;
//	printf("好きの季節は：\n");
//	printf("春 - 1,夏 - 2,秋 - 3,冬 - 4,終了 - 5\n");
//	do
//	{	
//		scanf("%d", &select);
//		switch (select)
//		{
//		case Spring:
//			spring();
//			break;
//		case Summer:
//			summer();
//			break;
//		case Autumn:
//			autumn();
//			break;
//		case Winter:
//			winter();
//			break;
//		case Invalid:
//			break;
//		default:
//			printf("1から5を入力せよ。\n\n");
//			break;
//		}
//	} while (select != Invalid);
//	return 0;
//}
//新明解C言語入門演習8-6
//int main()
//{
//	int num;
//	printf("整数を入力せよ:"); scanf("%d", &num);
//	int mul = 1;
//	int i = 0;
//	for (i = 1; i <= num; i++)
//	{
//		mul *= i;
//	}
//	printf("%dの階乗は%dです。\n", num, mul);
//	return 0;
//}
//新明解C言語入門演習8-7
//int combination(int n, int r) 
//{
//	if (n == r || r == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return combination(n - 1, r - 1) + combination(n - 1, r);
//	}
//}
//int main() 
//{
//	int n, r;
//	printf("異なるn個の整数からr個の整数を取り出す組み合わせの数のnCrを求めます\n");
//	printf("ｎ：");  scanf("%d", &n);
//	printf("ｒ：");  scanf("%d", &r);
//	printf("その組み合わせの数は%d個です\n",combination(n, r));
//	return 0;
//}
//新明解C言語入門演習8-8
//int gcd(int x, int y)
//{
//	//循環の書き方
//	//int i = 0;
//	//while (i = x % y)
//	//{
//	//	x = y;
//	//	y = i;
//	//}
//	//return y;
//	//再帰関数の書き方
//	if (x < y)
//	{
//		x ^= y;
//		y ^= x;
//		x ^= y;
//	}
//	return !(x % y) ? y : gcd(y, x % y);
//}
//int main()
//{
//	int x, y;
//	printf("二つの整数を入力せよ："); scanf("%d %d", &x, &y);
//	printf("%dと%dの最大公約数は%dです。\n", x, y, gcd(x, y));
//	return 0;
//}
//新明解C言語入門演習8-9
//int main()
//{
//	int line = 0;
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch == '\n')
//		{
//			line++;
//		}
//	}
//	printf("入力した行数は%d行です。\n", line);
//	return 0;
//}
//新明解C言語入門演習8-10
//int main()
//{
//	int ch;
//	int cnt[10] = { 0 };
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= '0' && ch <= '9'))
//		{
//			cnt[ch - '0']++;
//		}
//	}
//	int i = 0;
//	printf("数字文字の出現回数\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("'%d' : ", i);
//		int j = 0;
//		for (j = cnt[i]; j > 0; j--)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	return 0;
//}