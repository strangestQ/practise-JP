#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�V����C������剉�K12-1
//#define NAME_LEN 64
//
//struct student
//{
//	char name[NAME_LEN];
//	int height;
//	double weight;
//};
//int main()
//{
//	struct student takao = { "Takao",173 };
//	printf("�����̃A�h���X = %p\n", &takao.name);
//	printf("�g���̃A�h���X = %p\n", &takao.height);
//	printf("�̏d�̃A�h���X = %p\n", &takao.weight);
//	return 0;
//}
//�V����C������剉�K12-2
//struct xyz
//{
//	int x;
//	long y;
//	double z;
//};
//struct xyz scan_xyz()
//{
//	struct xyz tmp;
//	printf("int�^�F"); scanf("%d", &tmp.x);
//	printf("long�^�F"); scanf("%ld", &tmp.y);
//	printf("double�^�F"); scanf("%lf", &tmp.z);
//	return tmp;
//}
//int main()
//{
//	struct xyz a;
//	a = scan_xyz();
//	printf("xyz.x = %d\n", a.x);
//	printf("xyz.y = %ld\n", a.y);
//	printf("xyz.z = %f\n", a.z);
//	return 0;
//}
//�V����C������剉�K12-3
//typedef struct student
//{
//	char name[20];
//	int height;
//	double weight;
//}Student;
//Student scan_Student()
//{
//	Student tmp;
//	printf("���O����́F"); scanf("%s", &tmp.name);
//	printf("�g������́F"); scanf("%d", &tmp.height);
//	printf("�̏d����́F"); scanf("%lf", &tmp.weight);
//	return tmp;
//}
//int main()
//{
//	Student s;
//	s = scan_Student();
//	printf("���O�F %s\n", s.name);
//	printf("�g���F %d\n", s.height);
//	printf("�̏d�F %f\n", s.weight);
//	return 0;
//}
//�V����C������剉�K12-4
//#include <string.h>
//
//#define NUMBER 5
//#define NAME_LEN 64
//
//typedef struct
//{
//	char name[NAME_LEN];
//	int height;
//	double weight;
//}Student;
//Student scan_Student()
//{
//	Student tmp;
//	scanf("%s %d %lf", &tmp.name, &tmp.height, &tmp.weight);
//	return tmp;
//}
//void swap_student(Student* a, Student* b)
//{
//	Student tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void sort_by_height(Student h[], int num)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		for (j = num - 1; j > i; j--)
//		{
//			if (h[j - 1].height > h[j].height)
//				swap_student(&h[j - 1], &h[j]);
//		}
//	}
//}
//void sort_by_name(Student n[], int num)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		for (j = num - 1; j > i; j--)
//		{
//			if (strcmp(n[j - 1].name, n[j].name) > 0)
//				swap_student(&n[j - 1], &n[j]);
//		}
//	}
//}
//int main()
//{
//	Student std[NUMBER];
//	printf("%d�l�̖��O,�g��,�̏d�̏��œ��͂��Ă��������F\n",NUMBER);
//	int i = 0;
//	for (i = 0; i < NUMBER; i++)
//	{
//		std[i] = scan_Student();
//	}
//	printf("�����Ń\�[�g����Ώۂ�I�����Ă��������F�g�� - 1 ���O - 2\n");
//	do
//	{
//		int sw = 0; 
//		scanf("%d", &sw);
//		switch (sw)
//		{
//		case 1:
//			sort_by_height(std, NUMBER);
//			puts("�g�����Ƀ\�[�g���܂����B");
//			break;
//		case 2:
//			sort_by_name(std, NUMBER);
//			puts("���O���Ƀ\�[�g���܂����B");
//			break;
//		default:
//			printf("�I�ђ����Ă��������B\n");
//		}
//	} while (sw < 1 || sw > 2);
//	for (i = 0; i < NUMBER; i++)
//	{
//		printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);
//	}
//	return 0;
//}
//�V����C������剉�K12-5
//#include <math.h>
//
//#define sqr(n) ((n)*(n))
//
//typedef struct
//{
//	double x;
//	double y;
//}Point;
//typedef struct
//{
//	Point pt;
//	double fuel;
//}Car;
//double distance_of(Point p1, Point p2)
//{
//	return sqrt(sqr(p1.x - p2.x) + sqr(p1.y - p2.y));
//}
//void put_info(Car c)
//{
//	printf("���݈ʒu�F(%.2f, %.2f)\n", c.pt.x, c.pt.y);
//	printf("�c��R���F%.2f���b�g��\n", c.fuel);
//}
//int move(Car* c, Point dest)
//{
//	double d = distance_of(c->pt, dest);
//	if (d > c->fuel)
//		return 0;
//	c->pt = dest;
//	c->fuel -= d;
//	return 1;
//}
//int main()
//{
//	Car mycar = { {0.0,0.0},90.0 };
//	int sw;
//	do
//	{
//		Point dest;
//		put_info(mycar);
//		printf("�ړ����܂����y�ړI�n���W���́c1/�ړ��������́c2/No�c0�z :");
//		scanf("%d", &sw);
//		switch (sw)
//		{
//		case 1:
//			printf("�ړI�n��X���W�F"); scanf("%lf", &dest.x);
//			printf("        Y���W�F"); scanf("%lf", &dest.y);
//			if (!move(&mycar, dest))
//				puts("\a�R���s���ňړ��ł��܂���B");
//			break;
//		case 2:
//		{
//			double a = 0, b = 0;
//			printf("X�����̈ړ������F"); scanf("%lf", &a);
//			printf("Y�����̈ړ������F"); scanf("%lf", &b);
//			dest.x = mycar.pt.x + a;
//			dest.y = mycar.pt.y + b;
//			if (!move(&mycar, dest))
//				puts("\a�R���s���ňړ��ł��܂���B");
//			break;
//		}
//		case 0:
//			break;
//		}
//	} while (sw);
//	return 0;
//}