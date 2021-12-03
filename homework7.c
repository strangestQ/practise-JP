#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//新明解C言語入門演習12-1
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
//	printf("氏名のアドレス = %p\n", &takao.name);
//	printf("身長のアドレス = %p\n", &takao.height);
//	printf("体重のアドレス = %p\n", &takao.weight);
//	return 0;
//}
//新明解C言語入門演習12-2
//struct xyz
//{
//	int x;
//	long y;
//	double z;
//};
//struct xyz scan_xyz()
//{
//	struct xyz tmp;
//	printf("int型："); scanf("%d", &tmp.x);
//	printf("long型："); scanf("%ld", &tmp.y);
//	printf("double型："); scanf("%lf", &tmp.z);
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
//新明解C言語入門演習12-3
//typedef struct student
//{
//	char name[20];
//	int height;
//	double weight;
//}Student;
//Student scan_Student()
//{
//	Student tmp;
//	printf("名前を入力："); scanf("%s", &tmp.name);
//	printf("身長を入力："); scanf("%d", &tmp.height);
//	printf("体重を入力："); scanf("%lf", &tmp.weight);
//	return tmp;
//}
//int main()
//{
//	Student s;
//	s = scan_Student();
//	printf("名前： %s\n", s.name);
//	printf("身長： %d\n", s.height);
//	printf("体重： %f\n", s.weight);
//	return 0;
//}
//新明解C言語入門演習12-4
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
//	printf("%d人の名前,身長,体重の順で入力してください：\n",NUMBER);
//	int i = 0;
//	for (i = 0; i < NUMBER; i++)
//	{
//		std[i] = scan_Student();
//	}
//	printf("昇順でソートする対象を選択してください：身長 - 1 名前 - 2\n");
//	do
//	{
//		int sw = 0; 
//		scanf("%d", &sw);
//		switch (sw)
//		{
//		case 1:
//			sort_by_height(std, NUMBER);
//			puts("身長順にソートしました。");
//			break;
//		case 2:
//			sort_by_name(std, NUMBER);
//			puts("名前順にソートしました。");
//			break;
//		default:
//			printf("選び直してください。\n");
//		}
//	} while (sw < 1 || sw > 2);
//	for (i = 0; i < NUMBER; i++)
//	{
//		printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);
//	}
//	return 0;
//}
//新明解C言語入門演習12-5
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
//	printf("現在位置：(%.2f, %.2f)\n", c.pt.x, c.pt.y);
//	printf("残り燃料：%.2fリットル\n", c.fuel);
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
//		printf("移動しますか【目的地座標入力…1/移動距離入力…2/No…0】 :");
//		scanf("%d", &sw);
//		switch (sw)
//		{
//		case 1:
//			printf("目的地のX座標："); scanf("%lf", &dest.x);
//			printf("        Y座標："); scanf("%lf", &dest.y);
//			if (!move(&mycar, dest))
//				puts("\a燃料不足で移動できません。");
//			break;
//		case 2:
//		{
//			double a = 0, b = 0;
//			printf("X方向の移動距離："); scanf("%lf", &a);
//			printf("Y方向の移動距離："); scanf("%lf", &b);
//			dest.x = mycar.pt.x + a;
//			dest.y = mycar.pt.y + b;
//			if (!move(&mycar, dest))
//				puts("\a燃料不足で移動できません。");
//			break;
//		}
//		case 0:
//			break;
//		}
//	} while (sw);
//	return 0;
//}