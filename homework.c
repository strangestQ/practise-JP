#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�V����C������剉�K1-1
//int main()
//{
//
//	printf("15����37���������l��%d�ł��B\n", 15 - 37);
//	return 0;
//}
//�V����C������剉�K1-2
//int main()
//{
//	printf("��\n�j\n��\n");
//	return 0;
//}
//�V����C������剉�K1-3
//int main()
//{
//	printf("����ɂ��́B\n�����C�ł����B\n\n���悤�Ȃ�B\n");
//
//	return 0;
//}
//�V����C������剉�K1-4
//int main()
//{
//	int x = 3.14;
//	printf("x�̒l��%d�ŁB\n", x);
//	return 0;
//}
//�V����C������剉�K1-5
//int main()
//{
//	int no;
//	printf("��������͂��Ă��������F");
//	scanf("%d",&no);
//	printf("%d��13���������%d�ł��B\n", no, no + 13);
//	return 0;
//}
//�V����C������剉�K1-6
//int main()
//{
//	int no;
//	printf("��������͂��Ă��������F");
//	scanf("%d",&no);
//	printf("%d����7�������%d�ł��B\n", no, no - 7);
//	return 0;
//}
//�V����C������剉�K1-7
//int main()
//{
//	puts("��");
//	puts("�j");
//	puts("��");
//	return 0;
//}
//�V����C������剉�K1-8
//int main()
//{
//	int n1, n2;
//	puts("��̐�������͂��Ă��������B");
//	printf("����n1:"); scanf("%d", &n1);
//	printf("����n2:"); scanf("%d", &n2);
//	printf("�����̐ς�%d�ł��B\n", n1 * n2);
//	return 0;
//}
//�V����C������剉�K1-9
//int main()
//{
//	int n1, n2, n3;
//	puts("�O�̐�������͂��Ă��������B");
//	printf("����n1:"); scanf("%d", &n1);
//	printf("����n2:"); scanf("%d", &n2);
//	printf("����n3:"); scanf("%d", &n3);
//	printf("�����̘a��%d�ł��B\n", n1 + n2 + n3);
//	return 0;
//}
//�V����C������剉�K2-1
//int main()
//{
//	int x, y;
//	puts("��̐�������͂���B");
//	printf("����x:"); scanf("%d", &x);
//	printf("����y:"); scanf("%d", &y);
//	printf("x�̒l��y��%d%%�ł��B\n", 100 * x / y);
//	return 0;
//}
//�V����C������剉�K2-2
//int main()
//{
//	int a, b;
//	puts("��̐�������͂���B");
//	printf("����a:"); scanf("%d", &a);
//	printf("����b:"); scanf("%d", &b);
//	printf("�����̘a��%d�Őς�%d�ł��B\n",a+b,a*b);
//
//	return 0;
//}
//�V����C������剉�K2-3
//int main()
//{
//	double a;
//	printf("��������͂���:"); scanf("%lf", &a);
//	printf("���Ȃ���%f�Ɠ��͂��܂����ˁB\n", a);
//	return 0;
//}
//�V����C������剉�K2-4
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
//�V����C������剉�K2-5
//int main()
//{
//	int x, y;
//	puts("��̐�������͂���B");
//	printf("����x:"); scanf("%d", &x);
//	printf("����y:"); scanf("%d", &y);
//	printf("x�̒l��y��%f%%�ł��B\n", (double)100 * x / y);
//	return 0;
//}
//�V����C������剉�K2-6
//int main()
//{
//	int a;
//	printf("�g������͂���:"); scanf("%d", &a);
//	double b=(a - 100) * 0.9;
//	printf("�W���̏d��%3.1f�ł��B\n", b);
//    return 0;
//}
//�V����C������剉�K3-1
//int main()
//{
//	int a, b = 0;
//	puts("��̐�������͂���B");
//	printf("����A�F"); scanf("%d", &a);
//	printf("����B�F"); scanf("%d", &b);
//	if (a % b)
//	{
//		printf("B��A�̖񐔂ł͂���܂���B\n");
//	}
//	else
//	{
//		printf("B��A�̖񐔂ł��B\n");
//	}
//	return 0;
//}
//�V����C������剉�K3-2
//int main()
//{
//	int no;
//	printf("��������͂���:");
//	scanf("%d", &no);
//	if (no == 0)
//	{
//		puts("���̐���0�ł��B\n");
//	}
//	else if (no > 0)
//	{
//		puts("���̐��͐��ł��B\n");
//	}
//	else if (no < 0)//�Ō��else�̏ꍇ,���ɑ���(��)�͗v��Ȃ��B�A��,�Ō��else if�ɂ����ꍇ,�O�Ɠ�����(��)���K�v�ɂȂ�
//	{
//		puts("���̐��͕��ł��B\n");
//	}
//	return 0;
//}
//�V����C������剉�K3-3
//int main()
//{
//	int x = 0;
//	printf("��������͂���:");
//	scanf("%d", &x);
//	if (x >= 0)
//	{
//		printf("��Βl��%d�ł��B\n", x);
//	}
//	else
//	{
//		printf("��Βl��%d�ł��B\n", -x);
//	}
//	return 0;
//}
//�V����C������剉�K3-4
//int main()
//{
//	int a, b = 0;
//	puts("��̐�������͂���B");
//	printf("����A�F"); scanf("%d", &a);
//	printf("����B�F"); scanf("%d", &b);
//	if (a == b)
//	{
//		printf("A��B�͓������ł��B\n");
//	}
//	else if (a > b)
//	{
//		printf("A��B���傫���ł��B\n");
//	}
//	else
//	{
//		printf("A��B��菬�����ł��B\n");
//	}
//	return 0;
//}
//�V����C������剉�K3-5
//int main()
//{
//	int a, b = 0;
//	scanf("%d%d", &a,&b);
//	puts("�������Z�q'=='");
//	if (a == b)
//	{
//		puts("���f����:1\n");
//	}
//	else
//	{
//		puts("���f����:0\n");
//	}
//	puts("�֌W���Z�q'!='");
//	if (a != b)
//	{
//		puts("���f����:1\n");
//	}
//	else
//	{
//		puts("���f����:0\n");
//	}
//	return 0;
//}
//�V����C������剉�K3-6
//int main()
//{
//	int a, b, c = 0; 
//	puts("�O�̐�������͂���B");
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
//	printf("�����̍ŏ��l��%d�ł��B\n", min);
//	return 0;
//}
//�V����C������剉�K3-7
//int main()
//{
//	int n1, n2, n3, n4 = 0;
//	puts("�l�̐�������͂���B");
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
//	printf("�����̍ő�l��%d�ł��B\n", max);
//	return 0;
//}
//�V����C������剉�K3-8
//int main()
//{
//	int n1, n2 = 0;
//	puts("��̐�������͂���B");
//	printf("����1�F"); scanf("%d", &n1);
//	printf("����2�F"); scanf("%d", &n2);
//	if (n1 > n2)
//	{
//		printf("�����̍���%d�ł��B\n", n1 - n2);
//	}
//	else
//	{
//		printf("�����̍���%d�ł��B\n", n2 - n1);
//	}
//	return 0;
//}
//�V����C������剉�K3-9
//int main()
//{
//	int a, b, c = 0; 
//	puts("�O�̐�������͂���B");
//	scanf("%d%d%d", &a, &b, &c);
//	int min = a < b ? a : b;
//	min = min < c ? min : c;
//	printf("�����̍ŏ��l��%d�ł��B\n", min);
//	return 0;
//}
//�V����C������剉�K3-10
//int main()
//{
//	int a, b, c = 0;
//	puts("�O�̐�������͂���B");
//	printf("����A�F"); scanf("%d", &a);
//	printf("����B�F"); scanf("%d", &b);
//	printf("����C�F"); scanf("%d", &c);
//	if (a == b && b == c)
//	{
//		printf("�O�̒l�͓������ł��B\n");
//	}
//	else if (a == b || a == c || b == c)
//	{
//		printf("��̒l�͓������ł��B\n");
//	}
//	else
//	{
//		printf("�O�̒l�͈قȂ�܂��B\n");
//	}
//	return 0;
//}
//�V����C������剉�K3-11
//int main()
//{
//	int a, b = 0;
//	puts("��̐�������͂���B");
//	printf("����A�F"); scanf("%d", &b);
//	printf("����B�F"); scanf("%d", &a);
//	if ((a > b && a - b <= 10) || (b > a && b - a <= 10))
//	{
//		printf("�����̍���10�ȉ��ł��B\n");
//	}
//	else
//	{
//		printf("�����̍���11�ȏ�ł��B\n");
//	}
//	return 0;
//}
//�V����C������剉�K3-12
//int main()
//{
//	int n;
//	printf("��������͂���:");
//	scanf("%d", &n);
//	switch (n % 2)
//	{
//	case 1:
//		puts("���̐��͊�ł��B\n");
//		break;
//	default:
//		puts("���̐��͋����ł��B\n");
//		break;
//	}
//	return 0;
//}
//�V����C������剉�K3-13
//int main()
//{
//	int month;
//	printf("�����ł���:");
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1:
//	case 2:
//		printf("%d���͓~�ł��B\n", month);
//		break;
//	case 3:
//	case 4:
//	case 5:
//		printf("%d���͏t�ł��B\n", month);
//		break;
//	case 6:
//	case 7:
//	case 8:
//		printf("%d���͉Ăł��B\n", month);
//		break;
//	case 9:
//	case 10:
//	case 11:
//		printf("%d���͏H�ł��B\n", month);
//		break;
//	case 12:
//		printf("%d���͓~�ł��B\n", month);
//		break;
//	default:
//		printf("%d���͂���܂����!!\n", month);
//		break;
//	}
//	return 0;
//}