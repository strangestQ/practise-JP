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
//void alert(int n)
//{
//	while (n-- > 0)
//	{
//		putchar('\a');
//	}
//}
//int main()
//{
//	int n;
//	printf("警報を発生する回数:");
//	scanf("%d", &n);
//	alert(n);
//	return 0;
// }
//新明解C言語入門演習6-7
//void hello()
//{
//	printf("こんにちは。\n");
//}
//int main()
//{
//	hello();
//	return 0;
//}
//新明解C言語入門演習6-8
//int min_of(const int v[], int n)
//{
//	int min = v[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (min > v[i])
//			min = v[i];
//	}
//	return min;
//}
//int main()
//{
//	int n;
//	int v[10];
//	printf("配列ｖの要素数は:"); scanf("%d", &n);
//	printf("整数を入力してください:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("v[%d] : ", i);
//		scanf("%d", &v[i]);
//	}
//	printf("配列ｖの最小値は%dです。\n",min_of(v, n));
//	return 0;
//}
//新明解C言語入門演習6-9
//void rev_intary(int v[], int n)
//{
//	int i;
//	for (i = 0; i < (n/2);i++)
//	{
//		int tmp = v[i];
//		v[i] = v[n - 1 - i];
//		v[n - 1 - i] = tmp;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf(" %d,", v[i]);
//	}
//}
//int main()
//{
//	int n,i;
//	int v[10];
//	printf("配列ｖの要素数は:"); scanf("%d", &n);
//	printf("整数を入力してください:\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("v[%d] : ", i);
//		scanf("%d", &v[i]);
//	}
//	printf("配列v：｛");
//	for (i = 0; i < n; i++)
//	{
//		printf(" %d,", v[i]);
//	}
//	printf("｝\n");
//	printf("要素を順番に反転した後は：\n配列v：｛");
//	rev_intary(v, n);
//	printf("｝\n");
//	return 0;
//}
//新明解C言語入門演習6-10
//void intary_rcpy(int v1[], const int v2[], int n)
//{
//	int i;
//	for (i = 0; i < n ; i++)
//	{
//		v1[i] = v2[n - 1 - i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf(" %d,", v1[i]);
//	}
//}
//int main()
//{
//	int n, i;
//	int v1[10];
//	int v2[10];
//	printf("配列ｖ2の要素数は:"); scanf("%d", &n);
//	printf("整数を入力してください:\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("v2[%d] : ", i);
//		scanf("%d", &v2[i]);
//	}
//	printf("配列v2：｛");
//	for (i = 0; i < n; i++)
//	{
//		printf(" %d,", v2[i]);
//	}
//	printf("｝\n");
//	printf("配列v2の要素の並びを反転し、配列v1に格納した後：\n配列v1：｛");
//	intary_rcpy(v1, v2, n);
//	printf("｝\n");
//	return 0;
//}
//新明解C言語入門演習6-11
//int search_idx(const int v[], int idx[], int key, int n)
//{
//	int i, j = 0, count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (v[i] == key)
//		{
//			idx[j] = i;
//			j++;
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n, key, i;
//	int v[10];
//	int idx[10];
//	printf("配列ｖの要素数は:"); scanf("%d", &n);
//	printf("整数を入力してください:\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("v[%d] : ", i);
//		scanf("%d", &v[i]);
//	}
//	printf("配列v：｛");
//	for (i = 0; i < n; i++)
//	{
//		printf(" %d,", v[i]);
//	}
//	printf("｝\n");
//	printf("探す要素は:"); scanf("%d", &key);
//	printf("配列vの中に%dと等しい要素の個数は%d個です。\n", key, search_idx(v, idx, key, n));
//	return 0;
//}
//新明解C言語入門演習6-12
//int i, j, k;
//int a[4][3], b[3][4], c[4][4] = { 0 };
//void intput_mat1()
//{
//	printf("4行3列の数を入力せよ:\n");
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
//	}
//}
//void intput_mat2()
//{
//	printf("3行4列の数を入力せよ:\n");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d %d %d %d", &b[i][0], &b[i][1], &b[i][2], &b[i][3]);
//	}
//}
//void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
//{
//	for (k = 0; k < 4; k++)
//	{
//		for (i = 0; i < 4; i++)
//		{
//			for (j = 0; j < 3; j++)
//			{
//				c[k][i] += (a[k][j] * b[j][i]);
//			}
//		}
//	}
//}
//void mat_print(const int c[4][4])
//{
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%3d", c[i][j]);
//		}
//		putchar('\n');
//	}
//}
//int main()
//{
//	printf("4行3列の行列と3行4列の行列の積を求めます。\n");
//	intput_mat1();
//	intput_mat2();
//	printf("4行3列と3行4列の積は:\n");
//	mat_mul(a, b, c);
//	mat_print(c);
//	return 0;
//}
//新明解C言語入門演習6-13
//int i, j, k;
//void input(int a[][4][3])
//{
//	for (k = 0; k < 2; k++)
//	{
//		printf("%d回目の点数\n", k + 1);
//		for (i = 0; i < 4; i++)
//		{
//			scanf("%d %d %d", &a[k][i][0], &a[k][i][1], &a[k][i][2]);
//		}
//	}
//}
//void mat_add(const int tensu[][4][3],int sum[4][3])
//{
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			sum[i][j] = tensu[0][i][j] + tensu[1][i][j];
//		}
//	}
//}
//void mat_print(const int sum[4][3])
//{
//	printf("合計点\n");
//	for (i = 0; i < 4;i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%3d ", sum[i][j]);
//		}
//		putchar('\n');
//	}
//}
//int main()
//{
//	int tensu[2][4][3] = { 0 };
//	int sum[4][3];
//	input(tensu);
//	mat_add(tensu,sum);
//	mat_print(sum);
//	return 0;
//}
//新明解C言語入門演習6-14
//int main()
//{
//	int i;
//	static double arr[5];
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr[%d] = %f\n", i, arr[i]);
//	}
//	return 0;
//}
//新明解C言語入門演習6-15
//void put_count()
//{
//	static int a = 1;
//	printf("put_count : %d回目\n", a++);
//}
//int main()
//{
//	int i, n;
//	printf("何回カウントをしますか？:"); scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		put_count();
//	}
//	return 0;
//}