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
//	printf("�W���̏d��%.1f�ł��B\n", b);
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
//�V����C������剉�K4-1
//int main()
//{
//	int no;
//	int retry;
//	do
//	{
//		printf("��������͂���:");
//		scanf("%d", &no);
//		if (no == 0)
//		{
//			puts("���̐���0�ł��B");
//		}
//		else if (no > 0)
//		{
//			puts("���̐��͐��ł��B");
//		}
//		else
//		{
//			puts("���̐��͕��ł��B");
//		}
//		printf("�����܂���:YES�y0�z/NO�y9�z");
//		scanf("%d", &retry);
//	} while (retry == 0);
//	return 0;
//}
//�V����C������剉�K4-2
//int main()
//{
//	int a, b, n = 0;
//	int sum = 0;
//	puts("��̐�������͂���B");
//	printf("����a�F"); scanf("%d", &a);
//	printf("����b�F"); scanf("%d", &b);
//	if (a <= b)
//	{
//		do
//		{
//			sum += a;
//			//a = a + 1;
//			//n = n + 1;			
//			a++;
//			n++;
//		} while (a <= b);//'=='�̓_��!
//		printf("%d�ȏ�%d�ȉ��̑S�����̘a��%d�ł��B\n", a - n, b, sum);
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
//		} while (a >= b);//'=='�̓_��!
//		printf("%d�ȏ�%d�ȉ��̑S�����̘a��%d�ł��B\n", b - n, a, sum);
//	}
//	return 0;
//}
//int main()
//{
//    int a, b;
//    int max, min;
//    int sum = 0;
//    int count = 0;
//    puts("��̐�������͂��Ă��������B");
//    printf("����a:"); scanf("%d", &a);
//    printf("����b:"); scanf("%d", &b);
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
//    } while (min <= max);//��Ɠ�����,'=='�_���ł�
//    //min==max�͊ԈႦ��������,�z�͌J��Ԃ���,���ŏI������
//    //�z���J��Ԃ������ꍇ,���f���̌��ʂ��@�^(��0)�@�ɂ��Ȃ���΂Ȃ�Ȃ��I�I�I
//    printf("%d�ȏ�%d�ȉ��̑S�����̘a��%d�ł��B\n", min - count, max, sum);
//    return 0;
//}
//�V����C������剉�K4-3
//int main()
//{
//	int no;
//	printf("���̐�������͂���:");
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
//�V����C������剉�K4-4
//int main()
//{
//	int no;
//	printf("���̐�������͂���:");
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
//�V����C������剉�K4-5
//int main()
//{
//	int no;
//	printf("���̐�������͂���:");
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
//�V����C������剉�K4-6
//int main()
//{
//	int no;
//	printf("���̐�������͂���:");
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
//�V����C������剉�K4-7
//int main()
//{
//	int no;
//	printf("���̐�������͂���:");
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
//�V����C������剉�K4-8
//int main()
//{
//	int no;
//	printf("���̐���:");
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
//�V����C������剉�K4-9
//int main()
//{
//	int no;
//	printf("���̐���:");
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
//�V����C������剉�K4-10
//int main()
//{
//	int no;
//	printf("���̐���:");
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
//�V����C������剉�K4-11
//int main()
//{
//	int no1 = 0;
//	do
//	{
//		printf("���̐�������͂���:");
//		scanf("%d", &no1);
//		if (no1 <= 0)
//		{
//			puts("\a���łȂ�������͂��Ȃ��ł��������B");
//		}
//	} while (no1 <= 0);
// 	printf("%d���t����ǂނ�", no1);
//	int no2 = no1;
//	while (no2 > 0)
//	{
//		printf("%d", no2 % 10);
//		no2 /= 10;
//	}
//	puts("�ł��B");
//	return 0;
//}
//�V����C������剉�K4-12
//int main()
//{
//	int no = 0;
//	do
//	{
//		printf("���̐�������͂���:");
//		scanf("%d", &no);
//		if (no <= 0)
//		{
//			puts("\a���łȂ�������͂��Ȃ��ł��������B");
//		}
//	} while (no <= 0);
//	printf("%d��",no);
//	int count = 0;
//	while (no > 0)
//	{
//		no /= 10;
//		count++;
//	}
//	printf("%d���ł��B", count);
//	return 0;
//}
//�V����C������剉�K4-13
//int main()
//{
//	int n;
//	printf("n�̒l��:");
//	scanf("%d", &n);
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("1����%d�܂ł̑��a��%d�ł��B\n", n, sum);
//	return 0;
//}
//�V����C������剉�K4-14
//int main()
//{
//	int n;
//	printf("���̐�������͂���:");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		printf("%d", i % 10);
//	}
//	return 0;
//}
//�V����C������剉�K4-15
//int main()
//{
//	int len1, len2, n;
//	printf("��cm����:"); scanf("%d", &len1);
//	printf("��cm�܂�:"); scanf("%d", &len2);
//	printf("��cm����:"); scanf("%d", &n);
//	for (int i = len1; i <= len2; i += n)
//	{
//		double weight = (i - 100) * 0.9;
//		printf("%dcm ", i);
//		printf("%.2fkg\n", weight);
//	}
//	return 0;
//}
//�V����C������剉�K4-16
//int main()
//{
//	int n;
//	printf("�����l:");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i += 2)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//�V����C������剉�K4-17
//int main()
//{
//	int n;
//	printf("n�̒l:");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		printf("%d��2���%d\n", i, i * i);
//	}
//	return 0;
//}
//�V����C������剉�K4-18
//int main()
//{
//	int n;
//	printf("����*��\�����܂���:");
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
//�V����C������剉�K4-19
//int main()
//{
//	int n;
//	printf("�����l:");
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
//	printf("�񐔂�%d�ł��B", count);
//	return 0;
//}
//�V����C������剉�K4-20
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
//	printf("---+---------------------------\n");//�������͂���v���͂���Ă��܂���
//	//�����������͂ɂ���ꍇ:
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
//�V����C������剉�K4-21
//int main()
//{
//	int n;
//	printf("�����`�����܂��B\n");
//	printf("���i�ł���:");
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
//�V����C������剉�K4-22
//int main()
//{
//	int a, b;
//	int height, width;
//	printf("�����̒����`�����܂��B\n");
//	printf("���(����1):"); scanf("%d", &a);
//	printf("���(����2):"); scanf("%d", &b);
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
//�V����C������剉�K4-23
//int main()
//{
//	int len;
//	puts("���㒼�p�񓙕ӎO�p�`��\�����܂��B");
//	printf("�Z��:"); scanf("%d", &len);
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
//�V����C������剉�K4-23-2
// int main()
//{
//int len;
//puts("�E�㒼�p�񓙕ӎO�p�`��\�����܂��B");
//printf("�Z��:"); scanf("%d", &len);
//for (int i = 1; i <= len; i++)
//{
//	for (int j = 1; j <= i - 1; j++)
// //�܂��͏�̂ق�:�@�@�@for(int j = len; j >= len + 1; j--)
// //�������牺�̂ق���:  for(int j = len; j >= i; j--)      
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
//�V����C������剉�K4-24
//int main()
//{
//	int n;
//	printf("�s���~�b�h�����܂��B\n");
//	printf("���i�ł���:"); scanf("%d", &n);
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
//�V����C������剉�K4-25
//int main()
//{
//	int n;
//	printf("�����������s���~�b�h�����܂��B\n");
//	printf("���i�ł���:"); scanf("%d", &n);
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
//�V����C������剉�K5-1
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
//�V����C������剉�K5-2
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
//�V����C������剉�K5-3
//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	for (int i = 0; i < 5; i++)
//	{
//		printf("a[%d] = %d\n", i, a[i]);
//	}
//	return 0;
//}
//�V����C������剉�K5-4
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
//	puts("���]���܂����B");
//	for (int i = 0; i < NUMBER; i++)
//	{
//		printf("x[%d] = %d\n", i, x[i]);
//	}
//	return 0;
//}
//�V����C������剉�K5-5
//int main()
//{
//	double a;
//	int b;
//	a = b = 1.5;//b��1�ɂȂ�Aa��1.00�ɂȂ�
//	printf("a = %f\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}
//�V����C������剉�K5-6
//#define NUMBER 100
//int main()
//{
//	int num;
//	printf("�f�[�^��:");
//	scanf("%d", &num);
//	int x[NUMBER];
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d�� :", i + 1);
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
//�V����C������剉�K5-7
//#define NUMBER 120
//int main()
//{
//	int num;
//	int tensu[NUMBER];
//	int bunpu[11] = { 0 };
//	printf("�l������͂���:");
//	do
//	{
//		scanf("%d", &num);
//		if (num<1 || num>NUMBER)
//			printf("\a1�`%d�œ��͂���:", NUMBER);
//	} while (num<1 || num>NUMBER);
//	printf("%d�l�̓_������͂���B\n", num);
//	for (int i = 0; i < num; i++)
//	{
//		printf("%2d��:", i + 1);
//		do
//		{
//			scanf("%d", &tensu[i]);
//			if (tensu[i] < 0 || tensu[i]>100)
//				printf("\a0�`100�œ��͂���:");
//		} while (tensu[i] < 0 || tensu[i]>100);
//		bunpu[tensu[i] / 10]++;
//	}
//	puts("\n---���z�O���t---");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%3d�`%3d : ", i * 10, i * 10 + 9);
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
//�V����C������剉�K5-8
//#define NUMBER 120
//int main()
//{
//	int num;
//	int i, j;
//	int tensu[NUMBER];
//	int bunpu[11] = { 0 };
//	printf("�l������͂���:");
//	do
//	{
//	scanf("%d", &num);
//	if (num<1 || num>NUMBER)
//			printf("\a1�`%d�œ��͂���:", NUMBER);
//	} while (num<1 || num>NUMBER);
//	printf("%d�l�̓_������͂���B\n", num);
//	for (i = 0; i < num; i++)
//	{
//		printf("%2d��:", i + 1);
//		do
//		{
//			scanf("%d", &tensu[i]);
//			if (tensu[i] < 0 || tensu[i]>100)
//				printf("\a0�`100�œ��͂���:");
//		} while (tensu[i] < 0 || tensu[i]>100);
//		bunpu[tensu[i] / 10]++;
//	}
//	puts("\n---���z�O���t---");
//	int max = bunpu[0];
//	for (i = 1; i <= 10; i++)//���z�̐������Ԃɔ�r��,��ԑ������z��T���o��
//	{
//		if (max < bunpu[i])
//		{
//			max = bunpu[i];
//		}
//	}
//	for (i = max; i > 0; i--)//�܂�,��ԑ������z�̐����s���ɂȂ�
//	{
//		for (j = 0; j <= 10; j++)
//		{
//			if (i == bunpu[j])//����̕��z�ɂ��邩�A�Ȃ����̔��f
//			{
//				printf(" * ");
//				bunpu[j]--;//��\�������̂�,���z�̐����P���炷
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
//�V����C������剉�K5-9
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
//�V����C������剉�K5-10
//4�s3���3�s4��̐�
//int main()
//{
//	int i, j, k;
//  int sum = 0;
//	int a[4][3];
//	int b[3][4];
//	printf("4�s3��̐�����͂���:\n");
//	for (i = 0; i < 4; i++)
//	{
//		//for (j = 0; j < 3; j++)
//		//{
//		//	printf("%d�s%d��̐���:", i + 1, j + 1);
//		//	scanf("%d", &a[i][j]);
//		//}
//		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
//	}
//	printf("3�s4��̐�����͂���:\n");
//	for (i = 0; i < 3; i++)
//	{
//		//for (j = 0; j < 4; j++)
//		//{
//		//	printf("%d�s%d��̐���:", i + 1, j + 1);
//		//	scanf("%d", &a[i][j]);
//		//}
//		scanf("%d %d %d %d", &b[i][0], &b[i][1], &b[i][2], &b[i][3]);
//	}
//	printf("4�s3���3�s4��̐ς�:\n");
// //�s��̐ς̌�����:
// //m�sn��^�@*�@n�sp��^�@=�@m�sp��^
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
//�V����C������剉�K5-11
//int main()
//{
//	int i, j ;
//	int tensu[6][2];
//	int sum1 = 0, sum2 = 0, sum3 = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d�l�ڂ̐��т�: \n", i + 1);
//		printf("���� :"); scanf("%d", &tensu[i][0]);
//		printf("���w :"); scanf("%d", &tensu[i][1]);
//	}
//	for (i = 0; i < 6; i++)
//	{
//		sum1 += tensu[i][0];
//		sum2 += tensu[i][1];
//	}
//	printf("����̍��v�_�� :%3d ���ϓ_�� :%.2f\n", sum1, (double)sum1 / 6);
//	printf("���w�̍��v�_�� :%3d ���ϓ_�� :%.2f\n", sum2, (double)sum2 / 6);
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			sum3 += tensu[i][j];
//		}
//		printf("%d�l�ڂ̍��v�_�� : %d ���ϓ_�� :%.2f\n", i + 1, sum3, (double)sum3 / 2);
//		sum3 = 0;
//	}
//	return 0;
//}
//�V����C������剉�K5-12
//int main()
//{
//	int tensu[2][4][3] = { {{91,63,78},{67,72,46},{89,34,53},{32,54,34}},{{97,67,82},{73,43,46},{97,56,21},{85,46,35}} };
//	//�������z��̏ꍇ:�@�z��̖��O[��][�s��][��]
//	//tensu[2][4][3]: 2��@4�l�@3�Ȗڂ̐���
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
//		printf("%d��ڂ̓_��\n", k + 1);
//		for (i = 0; i < 4; i++)
//		{
//			for (j = 0; j < 3; j++)
//			{
//				printf("%4d", tensu[k][i][j]);
//			}
//			putchar('\n');
//		}
//	}
//	puts("���v�_");
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