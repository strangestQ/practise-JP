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
//int main()
//{
//	FILE* fp;
//	char name[20];
//	double height;
//	double weight;
//	int select;
//	if((fp=fopen("hw2.txt","w"))==NULL)
//		printf("\aファイルをオープンできません。\n");
//	else
//	{
//		int ninzu = 0;
//		double hsum = 0.0;
//		double wsum = 0.0;
//		while (1)
//		{
//			printf("名前　身長　体重："); scanf("%s %lf %lf", name, &height, &weight);
//			fprintf(fp, "%-10s %5.1f %5.1f\n", name, height, weight);
//			ninzu++;
//			hsum += height;
//			wsum += weight;
//			printf("入力を続けますか：はい - 1 / いいえ - 0\n"); scanf("%d", &select);
//			if (select == 0)
//				break;
//		}
//		fprintf(fp, "----------------------\n");
//		fprintf(fp, "平均       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
//		fclose(fp);
//	}
//	return 0;
//}
//新明解C言語入門演習13-5
//#include <time.h>
//
//char data_file[] = "datetime.dat";
//
//void get_data()
//{
//	FILE* fp;
//	if ((fp = fopen(data_file, "r")) == NULL)
//		printf("本プログラムを実行するのは初めてですね。\n");
//	else
//	{
//		int year, month, day, h, m, s;
//		char feel[128];
//		fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &h, &m, &s, feel);
//		printf("前回は%d年%d月%d日%d時%d分%d秒でした。気分は%sでした。\n",
//			year, month, day, h, m, s, feel);
//		fclose(fp);
//	}
//}
//void put_data()
//{
//	FILE* fp;
//	if ((fp = fopen(data_file, "w")) == NULL)
//		printf("\aファイルをオープンできません。\n");
//	else
//	{
//		time_t current = time(NULL);
//		struct tm* timer = localtime(&current);
//		char feel[128];
//		printf("現在の気分は："); scanf("%s", feel);
//		fprintf(fp, "%d %d %d %d %d %d %s\n",
//			timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
//			timer->tm_hour, timer->tm_min, timer->tm_sec, feel);
//		fclose(fp);
//	}
//}
//int main()
//{
//	get_data();
//	put_data();
//	return 0;
//}
//新明解C言語入門演習13-6
//int main()
//{
//	FILE* fp;
//	char fname[FILENAME_MAX];
//	printf("ファイル名："); scanf("%s", fname);
//	if ((fp = fopen(fname, "r")) == NULL)
//		printf("\aファイルをオープンできません。\n");
//	else
//	{
//		int ch;
//		int count = 0;
//		while ((ch = fgetc(fp)) != EOF)
//		{
//			if (ch == '\n')
//				count++;
//		}
//		printf("そのファイル中は%d行あります。\n", count);
//	}
//	return 0;
//}
//新明解C言語入門演習13-7
//int main()
//{
//	FILE* fp;
//	char fname[FILENAME_MAX];
//	printf("ファイル名："); scanf("%s", fname);
//	if ((fp = fopen(fname, "r")) == NULL)
//		printf("\aファイルをオープンできません。\n");
//	else
//	{
//		int ch;
//		int count = 0;
//		while ((ch = fgetc(fp)) != EOF)
//		{
//			if (ch >= '0' && ch <= '9')
//				count++;
//		}
//		printf("そのファイル中の数字文字は%d個あります。。\n", count);
//	}
//	return 0;
//}
//新明解C言語入門演習13-8

//新明解C言語入門演習13-9

//新明解C言語入門演習13-10

//新明解C言語入門演習13-11

//新明解C言語入門演習13-12

//新明解C言語入門演習13-13
