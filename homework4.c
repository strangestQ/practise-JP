#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�V����C������剉�K8-1
//#define diff(x,y) ((x)-(y))
//
//int main()
//{
//	int x = 0, y = 0;
//	printf("��̐�������͂��Ă��������F");
//	scanf("%d %d", &x, &y);
//	printf("��̒l�̍���%d�ł��B\n", diff(x, y));
//	return 0;
//}
//�V����C������剉�K8-2
//#define max(x,y) (((x)>(y))?(x):(y))
//
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	printf("a,b,c,d�����Ԃɓ��͂��Ă��������F");
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("�ő�l�́F%d\n", max(max(a, b), max(c, d)));
//	//�܂�a��b�̍ő�l�����߂�A����c��d�̍ő�l���߂�A�Ō�ɂ��̓�̒l�̍ő�l�����߂�
//	printf("�ő�l�́F%d\n", max(max(max(a, b), c), d));
//	//�܂�a��b�̍ő�l�����߂�A���ɂ��̒l��c�̍ő�l�����߂�A�Ō�ɓ����l��d�Ƃ̍ő�l�����߂�
//	return 0;
//}
//�V����C������剉�K8-3
//#define swap(type,x,y) ((x)=(x)^(y),(y)=(x)^(y),(x)=(x)^(y))
//
//int main()
//{
//	int x = 0, y = 0;
//	printf("x,y�����Ԃɓ��͂��Ă��������F");
//	scanf("%d %d", &x, &y);
//	printf("��̐�������������́F\n");
//	swap(int, x, y);
//	printf("x = %d y = %d\n", x, y);
//	return 0;
//}
//�V����C������剉�K8-4
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
//	printf("%d�l�̐g������͂���B\n", NUMBER);
//	for (i = 0; i < NUMBER; i++)
//	{
//		printf("%2d�ԁF", i + 1);
//		scanf("%d", &height[i]);
//	}
//	bsort(height, NUMBER);
//	puts("�~���Ƀ\�[�g���܂����B");
//	for (i = 0; i < NUMBER; i++)
//	{
//		printf("%2d�ԁF%d\n", i + 1, height[i]);
//	}
//	return 0;
//}
//�V����C������剉�K8-5
//enum season { Spring = 1, Summer, Autumn, Winter, Invalid };
//
//void spring()
//{
//	puts("�t�̍����J�I\n");
//}
//void summer()
//{
//	puts("�Ă͊C���I\n");
//}
//void autumn()
//{
//	puts("�H�̍g�t���Y��I\n");
//}
//void winter()
//{
//	puts("�~�͐�~��Ɗy�����I\n");
//}
//int main()
//{
//	int select = 0;
//	printf("�D���̋G�߂́F\n");
//	printf("�t - 1,�� - 2,�H - 3,�~ - 4,�I�� - 5\n");
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
//			printf("1����5����͂���B\n\n");
//			break;
//		}
//	} while (select != Invalid);
//	return 0;
//}
//�V����C������剉�K8-6

//�V����C������剉�K8-7

//�V����C������剉�K8-8

//�V����C������剉�K8-9

//�V����C������剉�K8-10
