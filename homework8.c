#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//新明解C言語入門演習13-1
//int main()
//{
//	FILE* fp;
//	char fn[128];
//	scanf("%s", fn);
//	fp = fopen(fn, "r");
//	if (fp == NULL)
//		printf("そのファイルは存在しません。\n");
//	else
//	{
//		printf("そのファイルは存在します。\n");
//		fclose(fp);
//	}
//	return 0;
//}
//新明解C言語入門演習13-2
//int main()
//{
//	FILE* fp;
//	char fn[128];
//	scanf("%s", fn);
//	fp = fopen(fn, "w");
//	printf("ファイルの中身を全て消去しました。\n");
//	fclose(fp);
//	return  0;
//}
//新明解C言語入門演習13-3
//typedef struct Student
//{
//	char name[100];
//	double height, weight;
//}Stu;
//void swap_student(Stu* a, Stu* b)
//{
//	Stu tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void sort_by_height(Stu h[], int num)
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
//int main()
//{
//	FILE* fp;
//	Stu std[20];
//	if ((fp = fopen("hw.txt", "r")) == NULL)
//		printf("\aファイルをオープンできません。\n");
//	else
//	{
//		int ninzu = 0;
//		double hsum = 0.0;
//		double wsum = 0.0;
//		while (fscanf(fp, "%s%lf%lf", std[ninzu].name, &std[ninzu].height, &std[ninzu].weight) == 3)
//		{
//			hsum += std[ninzu].height;
//			wsum += std[ninzu].weight;
//			ninzu++;
//		}
//		sort_by_height(std, ninzu);
//		printf("身長順にソートしました。\n");
//		for (int i = 0; i < ninzu; i++)
//			printf("%-10s %5.1f %5.1f\n", std[i].name, std[i].height, std[i].weight);
//		printf("----------------------\n");
//		printf("平均       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
//		fclose(fp);
//	}
//	return 0;
//}
//新明解C言語入門演習13-4

//新明解C言語入門演習13-5

//新明解C言語入門演習13-6

//新明解C言語入門演習13-7

//新明解C言語入門演習13-8

//新明解C言語入門演習13-9

//新明解C言語入門演習13-10

//新明解C言語入門演習13-11

//新明解C言語入門演習13-12

//新明解C言語入門演習13-13
