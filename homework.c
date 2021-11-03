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
//	printf("標準体重は%.1fです。\n", b);
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
//新明解C言語入門演習4-1
//int main()
//{
//	int no;
//	int retry;
//	do
//	{
//		printf("整数を入力せよ:");
//		scanf("%d", &no);
//		if (no == 0)
//		{
//			puts("その数は0です。");
//		}
//		else if (no > 0)
//		{
//			puts("その数は正です。");
//		}
//		else
//		{
//			puts("その数は負です。");
//		}
//		printf("続きますか:YES【0】/NO【9】");
//		scanf("%d", &retry);
//	} while (retry == 0);
//	return 0;
//}
//新明解C言語入門演習4-2
//int main()
//{
//	int a, b, n = 0;
//	int sum = 0;
//	puts("二つの整数を入力せよ。");
//	printf("整数a："); scanf("%d", &a);
//	printf("整数b："); scanf("%d", &b);
//	if (a <= b)
//	{
//		do
//		{
//			sum += a;
//			//a = a + 1;
//			//n = n + 1;			
//			a++;
//			n++;
//		} while (a <= b);//'=='はダメ!
//		printf("%d以上%d以下の全整数の和は%dです。\n", a - n, b, sum);
//	}
//	else
//	{
//		do
//		{
//			sum += b;
//			//b = b + 1;
//			//n = n + 1;
//			b++;
//			n++;
//		} while (a >= b);//'=='はダメ!
//		printf("%d以上%d以下の全整数の和は%dです。\n", b - n, a, sum);
//	}
//	return 0;
//}
//int main()
//{
//    int a, b;
//    int max, min;
//    int sum = 0;
//    int count = 0;
//    puts("二つの整数を入力してください。");
//    printf("整数a:"); scanf("%d", &a);
//    printf("整数b:"); scanf("%d", &b);
//    if (a > b) 
//    {
//        max = a;
//        min = b;
//    }
//    else 
//    {
//        max = b;
//        min = a;
//    }
//    do 
//    {
//        sum += min;
//        min++;
//        count++;
//    } while (min <= max);//上と同じく,'=='ダメです
//    //min==maxは間違えた書き方,循環は繰り返せず,一回で終了する
//    //循環を繰り返したい場合,判断式の結果を　真(非0)　にしなければならない！！！
//    printf("%d以上%d以下の全整数の和は%dです。\n", min - count, max, sum);
//    return 0;
//}
//新明解C言語入門演習4-3
//int main()
//{
//	int no;
//	printf("正の整数を入力せよ:");
//	scanf("%d", &no);
//	while (no >= 0)
//	{
//		printf("%d ", no);
//		if(no == 0)
//		{
//			printf("\n");
//		}
//		no--;
//	}
//	return 0;
//}
//新明解C言語入門演習4-4
//int main()
//{
//	int no;
//	printf("正の整数を入力せよ:");
//	scanf("%d", &no);
//	while (no >= 1)
//	{
//		printf("%d ", no--);
//		if (no == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}
//新明解C言語入門演習4-5
//int main()
//{
//	int no;
//	printf("正の整数を入力せよ:");
//	scanf("%d", &no);
//	int i = 1;
//	if (no > 0)
//	{
//		while (i <= no)
//		{
//			printf("%d ", i++);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//新明解C言語入門演習4-6
//int main()
//{
//	int no;
//	printf("正の整数を入力せよ:");
//	scanf("%d", &no);
//	int i = 2;
//	while (i <= no)
//	{
//		printf("%d ",i);
//		i += 2;
//	}
//	printf("\n");
//	return 0;
//}
//新明解C言語入門演習4-7
//int main()
//{
//	int no;
//	printf("正の整数を入力せよ:");
//	scanf("%d", &no);
//	int i = 2;
//	while (i <= no)
//	{
//		printf("%d ", i);
//		i *= 2;
//	}
//	printf("\n");
//	return 0;
//}
//新明解C言語入門演習4-8
//int main()
//{
//	int no;
//	printf("正の整数:");
//	scanf("%d", &no);
//	if (no >= 1)
//	{
//		while (no-- > 0)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	return 0;
//}
//新明解C言語入門演習4-9
//int main()
//{
//	int no;
//	printf("正の整数:");
//	scanf("%d", &no);
//	if (no > 0)
//	{
//		while (no-- > 0)
//		{
//			if (no % 2)
//			{
//				putchar('-');
//			}
//			else
//			{
//				putchar('+');
//			}
//		}
//		putchar('\n');
//	}
//	return 0;
//}
//新明解C言語入門演習4-10
//int main()
//{
//	int no;
//	printf("正の整数:");
//	scanf("%d", &no);
//	while (no-- > 0)
//	{
//		putchar('*');
//		if (no > 0)
//		{
//			putchar('\n');
//		}
//	}
//	return 0;
//}
//新明解C言語入門演習4-11
//int main()
//{
//	int no1 = 0;
//	do
//	{
//		printf("正の整数を入力せよ:");
//		scanf("%d", &no1);
//		if (no1 <= 0)
//		{
//			puts("\a正でない数を入力しないでください。");
//		}
//	} while (no1 <= 0);
// 	printf("%dを逆から読むと", no1);
//	int no2 = no1;
//	while (no2 > 0)
//	{
//		printf("%d", no2 % 10);
//		no2 /= 10;
//	}
//	puts("です。");
//	return 0;
//}
//新明解C言語入門演習4-12
//int main()
//{
//	int no = 0;
//	do
//	{
//		printf("正の整数を入力せよ:");
//		scanf("%d", &no);
//		if (no <= 0)
//		{
//			puts("\a正でない数を入力しないでください。");
//		}
//	} while (no <= 0);
//	printf("%dは",no);
//	int count = 0;
//	while (no > 0)
//	{
//		no /= 10;
//		count++;
//	}
//	printf("%d桁です。", count);
//	return 0;
//}
//新明解C言語入門演習4-13
//int main()
//{
//	int n;
//	printf("nの値は:");
//	scanf("%d", &n);
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("1から%dまでの総和は%dです。\n", n, sum);
//	return 0;
//}
//新明解C言語入門演習4-14
//int main()
//{
//	int n;
//	printf("正の整数を入力せよ:");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		printf("%d", i % 10);
//	}
//	return 0;
//}
//新明解C言語入門演習4-15
//int main()
//{
//	int len1, len2, n;
//	printf("何cmから:"); scanf("%d", &len1);
//	printf("何cmまで:"); scanf("%d", &len2);
//	printf("何cmごと:"); scanf("%d", &n);
//	for (int i = len1; i <= len2; i += n)
//	{
//		double weight = (i - 100) * 0.9;
//		printf("%dcm ", i);
//		printf("%.2fkg\n", weight);
//	}
//	return 0;
//}
//新明解C言語入門演習4-16
//int main()
//{
//	int n;
//	printf("整数値:");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i += 2)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//新明解C言語入門演習4-17
//int main()
//{
//	int n;
//	printf("nの値:");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		printf("%dの2乗は%d\n", i, i * i);
//	}
//	return 0;
//}
//新明解C言語入門演習4-18
//int main()
//{
//	int n;
//	printf("何個*を表示しますか:");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		putchar('*');
//		if (i % 5 == 0)
//		{
//			putchar('\n');
//		}
//	}
//	return 0;
//}
//新明解C言語入門演習4-19
//int main()
//{
//	int n;
//	printf("整数値:");
//	scanf("%d", &n);
//	int count = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("約数は%d個です。", count);
//	return 0;
//}
//新明解C言語入門演習4-20
//int main()
//{
//	int i, j;
//	do
//	{
//		printf("   |");
//		for (i = 1; i <= 9; i++)
//		{
//			printf("%3d", i);
//		}
//	} while (i <= 9);
//	putchar('\n');
//	printf("---+---------------------------\n");//自動入力する要求はされていません
//	//もし自動入力にする場合:
//	//int n = 0;
//	//do
//	//{
//	//	++n;
//	//	if (n == 4)
//	//	{
//	//		putchar('+');
//	//	}
//	//	else
//	//	{
//	//		putchar('-');
//	//	}
//	//} while (n < (i * 3) + 1);
//	//putchar('\n');
//	for (i = 1; i <= 9; i++)
//	{
//		printf("%d  |", i);
//		for (int j = 1; j <= 9; j++)
//		{
//			printf("%3d",i*j);
//		}
//		putchar('\n');
//	}
//	return 0;
//}
//新明解C言語入門演習4-21
//int main()
//{
//	int n;
//	printf("正方形を作ります。\n");
//	printf("何段ですか:");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	return 0;
//}
//新明解C言語入門演習4-22
//int main()
//{
//	int a, b;
//	int height, width;
//	printf("横長の長方形を作ります。\n");
//	printf("一辺(その1):"); scanf("%d", &a);
//	printf("一辺(その2):"); scanf("%d", &b);
//	if (a <= b)
//	{
//		height = a;
//		width = b;
//	}
//	else 
//	{
//		height = b;
//		width = a;
//	}
//	for (int i = 1; i <= height; i++)
//	{
//		for (int j = 1; j <= width; j++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	return 0;
//}
//新明解C言語入門演習4-23
//int main()
//{
//	int len;
//	puts("左上直角二等辺三角形を表示します。");
//	printf("短辺:"); scanf("%d", &len);
//	for (int i = 1; i <= len; i++)
//	{
//		for (int j = len; j >= i; j--)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	return 0;
//}
//新明解C言語入門演習4-23-2
// int main()
//{
//int len;
//puts("右上直角二等辺三角形を表示します。");
//printf("短辺:"); scanf("%d", &len);
//for (int i = 1; i <= len; i++)
//{
//	for (int j = 1; j <= i - 1; j++)
// //または上のほう:　　　for(int j = len; j >= len + 1; j--)
// //そしたら下のほうも:  for(int j = len; j >= i; j--)      
//	{
//		putchar(' ');
//	}
//	for (int j = 0; j <= len - i; j++)
//	{
//		putchar('*');
//	}
//	putchar('\n');
//}
//return 0;
//}
//新明解C言語入門演習4-24
//int main()
//{
//	int n;
//	printf("ピラミッドを作ります。\n");
//	printf("何段ですか:"); scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for(int j = n - i;j > 0;j--)
//		{
//			putchar(' ');
//		}
//		for (int j = 0; j < ((i - 1) * 2) + 1; j++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	return 0;
//}
//新明解C言語入門演習4-25
//int main()
//{
//	int n;
//	printf("下向き数字ピラミッドを作ります。\n");
//	printf("何段ですか:"); scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			putchar(' ');
//		}
//		for (int j = 1; j <= ((n - i) * 2) + 1; j++)
//		{
//			printf("%d",i%10);
//		}
//			putchar('\n');
//	}
//	return 0;
//}
//新明解C言語入門演習5-1
//int main()
//{
//	int a[5];
//	for (int i = 0; i < 5; i++)
//	{
//		a[i] = i;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("a[%d] = %d\n", i, a[i]);
//	}
//	return 0;
//}
//新明解C言語入門演習5-2
//int main()
//{
//	int a[5];
//	for (int i = 0; i < 5; i++)
//	{ 
//		a[i] = 5 - i;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("a[%d] = %d\n", i, a[i]);
//	}
//
//	return 0;
//}
//新明解C言語入門演習5-3
//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	for (int i = 0; i < 5; i++)
//	{
//		printf("a[%d] = %d\n", i, a[i]);
//	}
//	return 0;
//}
//新明解C言語入門演習5-4
//#define NUMBER 7
//int main()
//{
//	int x[NUMBER];
//	for (int i = 0; i < NUMBER; i++)
//	{
//		printf("x[%d] :", i);
//		scanf("%d", &x[i]);
//	}
//	for (int i = 0; i < (NUMBER / 2); i++)
//	{
//		int t = x[i];
//		x[i] = x[NUMBER - 1 - i];
//		x[NUMBER - 1 - i] = t;
//	}
//	puts("反転しました。");
//	for (int i = 0; i < NUMBER; i++)
//	{
//		printf("x[%d] = %d\n", i, x[i]);
//	}
//	return 0;
//}
//新明解C言語入門演習5-5
//int main()
//{
//	double a;
//	int b;
//	a = b = 1.5;//bは1になり、aは1.00になる
//	printf("a = %f\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}
//新明解C言語入門演習5-6
//#define NUMBER 100
//int main()
//{
//	int num;
//	printf("データ数:");
//	scanf("%d", &num);
//	int x[NUMBER];
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d番 :", i + 1);
//		scanf("%d", &x[i]);
//	}
//	for (int i = 0; i < num; i++)
//	{
//		if (i == 0)
//			printf("{%d, ", x[i]);
//		else if (i > 0 && i < num - 1)
//			printf("%d, ", x[i]);
//		else
//			printf("%d}", x[i]);
//	}
//	return 0;
//}
//新明解C言語入門演習5-7
//#define NUMBER 120
//int main()
//{
//	int num;
//	int tensu[NUMBER];
//	int bunpu[11] = { 0 };
//	printf("人数を入力せよ:");
//	do
//	{
//		scanf("%d", &num);
//		if (num<1 || num>NUMBER)
//			printf("\a1～%dで入力せよ:", NUMBER);
//	} while (num<1 || num>NUMBER);
//	printf("%d人の点数を入力せよ。\n", num);
//	for (int i = 0; i < num; i++)
//	{
//		printf("%2d番:", i + 1);
//		do
//		{
//			scanf("%d", &tensu[i]);
//			if (tensu[i] < 0 || tensu[i]>100)
//				printf("\a0～100で入力せよ:");
//		} while (tensu[i] < 0 || tensu[i]>100);
//		bunpu[tensu[i] / 10]++;
//	}
//	puts("\n---分布グラフ---");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%3d～%3d : ", i * 10, i * 10 + 9);
//		for (int j = 0; j < bunpu[i]; j++)
//			putchar('*');
//		putchar('\n');
//	}
//	printf("     100 : ");
//	for (int j = 0; j < bunpu[10]; j++)
//		putchar('*');
//	putchar('\n');
//	return 0;
//}
//新明解C言語入門演習5-8
//#define NUMBER 120
//int main()
//{
//	int num;
//	int i, j;
//	int tensu[NUMBER];
//	int bunpu[11] = { 0 };
//	printf("人数を入力せよ:");
//	do
//	{
//	scanf("%d", &num);
//	if (num<1 || num>NUMBER)
//			printf("\a1～%dで入力せよ:", NUMBER);
//	} while (num<1 || num>NUMBER);
//	printf("%d人の点数を入力せよ。\n", num);
//	for (i = 0; i < num; i++)
//	{
//		printf("%2d番:", i + 1);
//		do
//		{
//			scanf("%d", &tensu[i]);
//			if (tensu[i] < 0 || tensu[i]>100)
//				printf("\a0～100で入力せよ:");
//		} while (tensu[i] < 0 || tensu[i]>100);
//		bunpu[tensu[i] / 10]++;
//	}
//	puts("\n---分布グラフ---");
//	int max = bunpu[0];
//	for (i = 1; i <= 10; i++)//分布の数を順番に比較し,一番多い分布を探し出す
//	{
//		if (max < bunpu[i])
//		{
//			max = bunpu[i];
//		}
//	}
//	for (i = max; i > 0; i--)//つまり,一番多い分布の数が行数になる
//	{
//		for (j = 0; j <= 10; j++)
//		{
//			if (i == bunpu[j])//ｊ列の分布にあるか、ないかの判断
//			{
//				printf(" * ");
//				bunpu[j]--;//一個表示したので,分布の数を１減らす
//			}
//			else
//			{
//				printf("   ");
//			}
//		}
//		putchar('\n');
//	}
//	printf("---------------------------------\n");
//	printf(" 0 10 20 30 40 50 60 70 80 90 100\n");
//	//for (i = 0; i <= 33; i++)
//	//{
//	//	putchar('-');
//	//}
//	//putchar('\n');
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	if (i == 10)
//	//	{
//	//		puts(" 100");
//	//	}
//	//	else
//	//		printf("%3d", i * 10);
//	//}
//	return 0;
//}
//新明解C言語入門演習5-9
//int main()
//{
//	int a[5];
//	int b[5];
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("a[%d] : ", i);
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		b[i] = a[5 - i - 1];
//	}
//	puts("  a    b");
//	puts("---------");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%4d%4d\n", a[i], b[i]);
//	}
//	return 0;
//}
//新明解C言語入門演習5-10
//4行3列と3行4列の積
//int main()
//{
//	int i, j, k;
//  int sum = 0;
//	int a[4][3];
//	int b[3][4];
//	printf("4行3列の数を入力せよ:\n");
//	for (i = 0; i < 4; i++)
//	{
//		//for (j = 0; j < 3; j++)
//		//{
//		//	printf("%d行%d列の数は:", i + 1, j + 1);
//		//	scanf("%d", &a[i][j]);
//		//}
//		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
//	}
//	printf("3行4列の数を入力せよ:\n");
//	for (i = 0; i < 3; i++)
//	{
//		//for (j = 0; j < 4; j++)
//		//{
//		//	printf("%d行%d列の数は:", i + 1, j + 1);
//		//	scanf("%d", &a[i][j]);
//		//}
//		scanf("%d %d %d %d", &b[i][0], &b[i][1], &b[i][2], &b[i][3]);
//	}
//	printf("4行3列と3行4列の積は:\n");
// //行列の積の公式は:
// //m行n列型　*　n行p列型　=　m行p列型
//	for (k = 0; k < 4; k++)
//	{
//		for (i = 0; i < 4; i++)
//		{
//			for (j = 0; j < 3; j++)
//			{
//				sum = sum + (a[k][j] * b[j][i]);
//			}
//			printf("%3d", sum);
//			sum = 0;
//		}
//		putchar('\n');
//	}
//	return 0;
//}
//新明解C言語入門演習5-11
//int main()
//{
//	int i, j ;
//	int tensu[6][2];
//	int sum1 = 0, sum2 = 0, sum3 = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d人目の成績は: \n", i + 1);
//		printf("国語 :"); scanf("%d", &tensu[i][0]);
//		printf("数学 :"); scanf("%d", &tensu[i][1]);
//	}
//	for (i = 0; i < 6; i++)
//	{
//		sum1 += tensu[i][0];
//		sum2 += tensu[i][1];
//	}
//	printf("国語の合計点は :%3d 平均点は :%.2f\n", sum1, (double)sum1 / 6);
//	printf("数学の合計点は :%3d 平均点は :%.2f\n", sum2, (double)sum2 / 6);
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			sum3 += tensu[i][j];
//		}
//		printf("%d人目の合計点は : %d 平均点は :%.2f\n", i + 1, sum3, (double)sum3 / 2);
//		sum3 = 0;
//	}
//	return 0;
//}
//新明解C言語入門演習5-12
//int main()
//{
//	int tensu[2][4][3] = { {{91,63,78},{67,72,46},{89,34,53},{32,54,34}},{{97,67,82},{73,43,46},{97,56,21},{85,46,35}} };
//	//多次元配列の場合:　配列の名前[回数][行数][列数]
//	//tensu[2][4][3]: 2回　4人　3科目の成績
//	int sum[4][3];
//	int i, j, k;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			sum[i][j] = tensu[0][i][j] + tensu[1][i][j];
//		}
//	}
//	for (k = 0; k < 2; k++)
//	{
//		printf("%d回目の点数\n", k + 1);
//		for (i = 0; i < 4; i++)
//		{
//			for (j = 0; j < 3; j++)
//			{
//				printf("%4d", tensu[k][i][j]);
//			}
//			putchar('\n');
//		}
//	}
//	puts("合計点");
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%4d", sum[i][j]);
//		}
//		putchar('\n');
//	}
//	return 0;
//}