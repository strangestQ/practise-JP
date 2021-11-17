#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//新明解C言語入門演習7-1
//int main()
//{
//	int n = 0;
//	printf("%zu\n", sizeof 1);//整数型だから４
//	printf("%zu\n", sizeof+1);//符号付きも整数型だから４
//	printf("%zu\n", sizeof-1);//同じく整数型だから４
//	printf("%zu\n", sizeof(unsigned) - 1);//整数型-1だから３
//	printf("%zu\n", sizeof(double) - 1);//浮動小数点型-1だから７
//	printf("%zu\n", sizeof((double) - 1));//浮動小数点型と１の計算結果は浮動小数点型だから８
//	printf("%zu\n", sizeof n + 2);//整数型＋２だから６
//	printf("%zu\n", sizeof (n + 2));//整数型の計算結果は整数型だから４
//	printf("%zu\n", sizeof (n + 2.0));//整数型と浮動小数点型の計算結果は浮動小数点型だから８
//	return 0;
//}
//新明解C言語入門演習7-2
//2乗のn乗を計算
//unsigned pow2(unsigned n)
//{
//   unsigned i = 0, mul = 1;
//    for (i = 0; i < n; i++)
//    {
//        mul *= 2;
//    }
//    return mul;
//}
//int main(void)
//{
//    unsigned a = 0;
//    int n = 0;
//    printf("整数を入力してください："); scanf("%u", &a);
//    printf("左右にシフトする値を入力してください："); scanf("%d", &n);
//    unsigned ret = pow2(n);
//    unsigned l_sht = a << n;
//    unsigned r_sht = a >> n;
//    printf("%u * 2の%u乗 = %u\n", a, n, a * ret);
//    printf("%u << %u = %u\n", a, n, l_sht);
//    printf("%u / 2の%u乗 = %u\n", a, n, a / ret);
//    printf("%u >> %u = %u\n", a, n, r_sht);
//    return 0;
//}
//新明解C言語入門演習7-3
//void print_bits(unsigned x)
//{
//	int i = 0;
//	for (i = 8 * sizeof(unsigned) - 1; i >= 0; i--)
//	{
//		if ((x >> i) & 1)
//			putchar('1');
//		else
//			putchar('0');
//	}
//}
//unsigned rrotate(unsigned x, int n)
//{
//	int i = 8 * sizeof(unsigned);
//	return (n?(x >> n | (x << (i - n))):x);
//}
//unsigned lrotate(unsigned x, int n)
//{
//	int i = 8 * sizeof(unsigned);
//	return (n?(x << n | (x >> (i - n))):x);
//}
//int main()
//{
//	unsigned x = 0;
//  int n = 0;
//	printf("整数を入力してください："); scanf("%u", &x);
//  printf("何ビット回転するかを入力してください："); scanf("%d", &n);
//	printf("元の数のビットは　　　　："); print_bits(x); 
//	putchar('\n');
//	printf("%uを右に%uビット回転した後は：%u\n", x, n, rrotate(x, n));
//	printf("右に回転した後のビットは："); print_bits(rrotate(x, n));
//	putchar('\n');
//	printf("%uを左に%uビット回転した後は：%u\n", x, n, lrotate(x, n));
//	printf("左に回転した後のビットは："); print_bits(lrotate(x, n));
//	putchar('\n');
//	return 0;
//}
//新明解C言語入門演習7-4
//void print_bits(unsigned x)
//{
//	int i = 0;
//	for (i = 8 * sizeof(unsigned) - 1; i >= 0; i--)
//	{
//		if ((x >> i) & 1)
//			putchar('1');
//		else
//			putchar('0');
//	}
//}
//unsigned set(unsigned x, int pos)
//{
//	return (x | 1U << (pos - 1));
//}
//unsigned reset(unsigned x, int pos)
//{
//	return (x & ~(1U << (pos - 1)));
//}
//unsigned inverse(unsigned x, int pos)
//{
//	return (x ^ 1U << (pos - 1));
//}
//int main()
//{
//	unsigned x = 0;
//	int pos = 0;
//	printf("整数を入力してください："); scanf("%u", &x);
//	printf("第何位のビットを操作しますか："); scanf("%d", &pos);
//	printf("元の数のビットは　　　　　："); print_bits(x); 
//	putchar('\n');
//	printf("%uの第%u位ビットをセットした値は　：%u\n", x, pos, set(x, pos));
//	printf("セットした後のビットは　　："); print_bits(set(x, pos));
//	putchar('\n');
//	printf("%uの第%u位ビットをリセットした値は：%u\n", x, pos, reset(x, pos));
//	printf("リセットした後のビットは　："); print_bits(reset(x, pos));
//	putchar('\n');
//	printf("%uの第%u位ビットを反転した値は　　：%u\n", x, pos, inverse(x, pos));
//	printf("反転した後のビットは　　　："); print_bits(inverse(x, pos));
//	putchar('\n');
//	return 0;
//}
//新明解C言語入門演習7-5
//void print_bits(unsigned x)
//{
//	int i = 0;
//	for (i = 8 * sizeof(unsigned) - 1; i >= 0; i--)
//	{
//		if ((x >> i) & 1)
//			putchar('1');
//		else
//			putchar('0');
//	}
//}
////int move_1(int pos, int n)
////{
////	int i;
////	int j = 0;
////	for (i = 1; i <= n; i++)
////	{
////		j |= 1U << (pos + n - 1 - i);
////	}
////	return j;
////}
////unsigned set_n(unsigned x, int pos,int n)
////{
////	return x | move_1(pos, n);
////}
////unsigned reset_n(unsigned x, int pos,int n)
////{
////	return x & ~move_1(pos, n);
////}
////unsigned inverse_n(unsigned x, int pos,int n)
////{
////	return x ^ move_1(pos, n);
////}
////もう一つの書き方
//unsigned move_1(int i) 
//{
//	return 1U << i - 1;
//}
//
//unsigned set_n(unsigned x, int pos, int n) 
//{
//	for (int i = pos; i <= pos + n - 1; i++) 
//	{
//		x |= move_1(i);
//	}
//	return x;
//}
//
//unsigned reset_n(unsigned x, int pos, int n) 
//{
//	for (int i = pos; i <= pos + n - 1; i++) 
//	{
//		x &= ~move_1(i);
//	}
//	return x;
//}
//
//unsigned inverse_n(unsigned x, int pos, int n) 
//{
//	for (int i = pos; i <= pos + n - 1; i++) 
//	{
//		x ^= move_1(i);
//	}
//	return x;
//}
//int main()
//{
//	unsigned x = 0;
//	int pos = 0, n = 0;
//	printf("整数を入力してください："); scanf("%u", &x);
//	printf("第何位のビットを操作しますか："); scanf("%d", &pos);
//	printf("更にそこから何ビット変更しますか："); scanf("%d", &n);
//	printf("元の数のビットは　　　　　："); print_bits(x);
//	putchar('\n');
//	printf("%uの第%u位ビットから第%u位ビットをセットした値は　：%u\n", x, pos, pos + n - 1, set_n(x, pos, n));
//	printf("セットした後のビットは　　："); print_bits(set_n(x, pos, n));
//	putchar('\n');
//	printf("%uの第%u位ビットから第%u位ビットをリセットした値は：%u\n", x, pos, pos + n - 1, reset_n(x, pos, n));
//	printf("リセットした後のビットは　："); print_bits(reset_n(x, pos, n));
//	putchar('\n');
//	printf("%uの第%u位ビットから第%u位ビットを反転した値は　　：%u\n", x, pos, pos + n - 1, inverse_n(x, pos, n));
//	printf("反転した後のビットは　　　："); print_bits(inverse_n(x, pos, n));
//	putchar('\n');
//	return 0;
//}
//新明解C言語入門演習7-6
//#include<limits.h>
//
//int main()
//{
//	unsigned x, y, z;
//	x = UINT_MAX / 2;//2,147,483,647
//	y = UINT_MAX / 2 + 123;//2,147,483,770+
//	z = x + y;//数学的な演算結果：4,294,967,417
//	printf("本環境の符号なし整数型の値の最大値は%u\n", UINT_MAX);//4,294,967,295
//	printf("%u\n", z);//121
//	return 0;
//}
//新明解C言語入門演習7-7

//新明解C言語入門演習7-8

//新明解C言語入門演習7-9

//新明解C言語入門演習7-10

//新明解C言語入門演習7-11
