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

//新明解C言語入門演習8-7

//新明解C言語入門演習8-8

//新明解C言語入門演習8-9

//新明解C言語入門演習8-10
