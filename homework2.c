#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�V����C������剉�K6-1
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
//	puts("��̐�������͂���B");
//	printf("����1 : "); scanf("%d", &a);
//	printf("����2 : "); scanf("%d", &b);
//	printf("�������ق��̒l��%d�ł��B\n", min2(a, b));
//	return 0;
//}
//�V����C������剉�K6-2
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
//	puts("�O�̐�������͂���B");
//	printf("����1 : "); scanf("%d", &a);
//	printf("����2 : "); scanf("%d", &b);
//	printf("����3 : "); scanf("%d", &c);
//	printf("�������ق��̒l��%d�ł��B\n", min3(a, b, c));
//	return 0;
//}
//�V����C������剉�K6-3
//int cube(int x)
//{
//	return x * x * x;
//}
//int main()
//{
//	int x;
//	printf("��������͂���:");
//	scanf("%d", &x);
//	printf("���̐���3��l��%d�ł��B\n", cube(x));
//	return 0;
//}
//�V����C������剉�K6-4
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
//	printf("��������͂���:");
//	scanf("%d", &x);
//	printf("���̐���4��l��%d�ł��B\n", pow4(x));
//	return 0;
//}
//�V����C������剉�K6-5
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
//	printf("��������͂���:");
//	scanf("%d", &n);
//	printf("1����%d�܂ł̐����̘a��%d�ł��B\n", n, sumup(n));
//	return 0;
//}
//�V����C������剉�K6-6
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
//	printf("�x��𔭐������:");
//	scanf("%d", &n);
//	alert(n);
//	return 0;
// }
//�V����C������剉�K6-7
//void hello()
//{
//	printf("����ɂ��́B\n");
//}
//int main()
//{
//	hello();
//	return 0;
//}
//�V����C������剉�K6-8
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
//	printf("�z�񂖂̗v�f����:"); scanf("%d", &n);
//	printf("��������͂��Ă�������:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("v[%d] : ", i);
//		scanf("%d", &v[i]);
//	}
//	printf("�z�񂖂̍ŏ��l��%d�ł��B\n",min_of(v, n));
//	return 0;
//}
//�V����C������剉�K6-9
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
//	printf("�z�񂖂̗v�f����:"); scanf("%d", &n);
//	printf("��������͂��Ă�������:\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("v[%d] : ", i);
//		scanf("%d", &v[i]);
//	}
//	printf("�z��v�F�o");
//	for (i = 0; i < n; i++)
//	{
//		printf(" %d,", v[i]);
//	}
//	printf("�p\n");
//	printf("�v�f�����Ԃɔ��]������́F\n�z��v�F�o");
//	rev_intary(v, n);
//	printf("�p\n");
//	return 0;
//}
//�V����C������剉�K6-10
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
//	printf("�z��2�̗v�f����:"); scanf("%d", &n);
//	printf("��������͂��Ă�������:\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("v2[%d] : ", i);
//		scanf("%d", &v2[i]);
//	}
//	printf("�z��v2�F�o");
//	for (i = 0; i < n; i++)
//	{
//		printf(" %d,", v2[i]);
//	}
//	printf("�p\n");
//	printf("�z��v2�̗v�f�̕��т𔽓]���A�z��v1�Ɋi�[������F\n�z��v1�F�o");
//	intary_rcpy(v1, v2, n);
//	printf("�p\n");
//	return 0;
//}
//�V����C������剉�K6-11
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
//	printf("�z�񂖂̗v�f����:"); scanf("%d", &n);
//	printf("��������͂��Ă�������:\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("v[%d] : ", i);
//		scanf("%d", &v[i]);
//	}
//	printf("�z��v�F�o");
//	for (i = 0; i < n; i++)
//	{
//		printf(" %d,", v[i]);
//	}
//	printf("�p\n");
//	printf("�T���v�f��:"); scanf("%d", &key);
//	printf("�z��v�̒���%d�Ɠ������v�f�̌���%d�ł��B\n", key, search_idx(v, idx, key, n));
//	return 0;
//}
//�V����C������剉�K6-12
//int i, j, k;
//int a[4][3], b[3][4], c[4][4] = { 0 };
//void intput_mat1()
//{
//	printf("4�s3��̐�����͂���:\n");
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
//	}
//}
//void intput_mat2()
//{
//	printf("3�s4��̐�����͂���:\n");
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
//	printf("4�s3��̍s���3�s4��̍s��̐ς����߂܂��B\n");
//	intput_mat1();
//	intput_mat2();
//	printf("4�s3���3�s4��̐ς�:\n");
//	mat_mul(a, b, c);
//	mat_print(c);
//	return 0;
//}
//�V����C������剉�K6-13
//int i, j, k;
//void input(int a[][4][3])
//{
//	for (k = 0; k < 2; k++)
//	{
//		printf("%d��ڂ̓_��\n", k + 1);
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
//	printf("���v�_\n");
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
//�V����C������剉�K6-14
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
//�V����C������剉�K6-15
//void put_count()
//{
//	static int a = 1;
//	printf("put_count : %d���\n", a++);
//}
//int main()
//{
//	int i, n;
//	printf("����J�E���g�����܂����H:"); scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		put_count();
//	}
//	return 0;
//}