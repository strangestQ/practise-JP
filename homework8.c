#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�V����C������剉�K13-1
//int main()
//{
//	FILE* fp;
//	char fn[128];
//	scanf("%s", fn);
//	fp = fopen(fn, "r");
//	if (fp == NULL)
//		printf("���̃t�@�C���͑��݂��܂���B\n");
//	else
//	{
//		printf("���̃t�@�C���͑��݂��܂��B\n");
//		fclose(fp);
//	}
//	return 0;
//}
//�V����C������剉�K13-2
//int main()
//{
//	FILE* fp;
//	char fn[128];
//	scanf("%s", fn);
//	fp = fopen(fn, "w");
//	printf("�t�@�C���̒��g��S�ď������܂����B\n");
//	fclose(fp);
//	return  0;
//}
//�V����C������剉�K13-3
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
//		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
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
//		printf("�g�����Ƀ\�[�g���܂����B\n");
//		for (int i = 0; i < ninzu; i++)
//			printf("%-10s %5.1f %5.1f\n", std[i].name, std[i].height, std[i].weight);
//		printf("----------------------\n");
//		printf("����       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
//		fclose(fp);
//	}
//	return 0;
//}
//�V����C������剉�K13-4
//int main()
//{
//	FILE* fp;
//	char name[20];
//	double height;
//	double weight;
//	int select;
//	if((fp=fopen("hw2.txt","w"))==NULL)
//		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
//	else
//	{
//		int ninzu = 0;
//		double hsum = 0.0;
//		double wsum = 0.0;
//		while (1)
//		{
//			printf("���O�@�g���@�̏d�F"); scanf("%s %lf %lf", name, &height, &weight);
//			fprintf(fp, "%-10s %5.1f %5.1f\n", name, height, weight);
//			ninzu++;
//			hsum += height;
//			wsum += weight;
//			printf("���͂𑱂��܂����F�͂� - 1 / ������ - 0\n"); scanf("%d", &select);
//			if (select == 0)
//				break;
//		}
//		fprintf(fp, "----------------------\n");
//		fprintf(fp, "����       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
//		fclose(fp);
//	}
//	return 0;
//}
//�V����C������剉�K13-5
//#include <time.h>
//
//char data_file[] = "datetime.dat";
//
//void get_data()
//{
//	FILE* fp;
//	if ((fp = fopen(data_file, "r")) == NULL)
//		printf("�{�v���O���������s����̂͏��߂Ăł��ˁB\n");
//	else
//	{
//		int year, month, day, h, m, s;
//		char feel[128];
//		fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &h, &m, &s, feel);
//		printf("�O���%d�N%d��%d��%d��%d��%d�b�ł����B�C����%s�ł����B\n",
//			year, month, day, h, m, s, feel);
//		fclose(fp);
//	}
//}
//void put_data()
//{
//	FILE* fp;
//	if ((fp = fopen(data_file, "w")) == NULL)
//		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
//	else
//	{
//		time_t current = time(NULL);
//		struct tm* timer = localtime(&current);
//		char feel[128];
//		printf("���݂̋C���́F"); scanf("%s", feel);
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
//�V����C������剉�K13-6
//int main()
//{
//	FILE* fp;
//	char fname[FILENAME_MAX];
//	printf("�t�@�C�����F"); scanf("%s", fname);
//	if ((fp = fopen(fname, "r")) == NULL)
//		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
//	else
//	{
//		int ch;
//		int count = 0;
//		while ((ch = fgetc(fp)) != EOF)
//		{
//			if (ch == '\n')
//				count++;
//		}
//		printf("���̃t�@�C������%d�s����܂��B\n", count);
//	}
//	return 0;
//}
//�V����C������剉�K13-7
//int main()
//{
//	FILE* fp;
//	char fname[FILENAME_MAX];
//	printf("�t�@�C�����F"); scanf("%s", fname);
//	if ((fp = fopen(fname, "r")) == NULL)
//		printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
//	else
//	{
//		int ch;
//		int count = 0;
//		while ((ch = fgetc(fp)) != EOF)
//		{
//			if (ch >= '0' && ch <= '9')
//				count++;
//		}
//		printf("���̃t�@�C�����̐���������%d����܂��B�B\n", count);
//	}
//	return 0;
//}
//�V����C������剉�K13-8

//�V����C������剉�K13-9

//�V����C������剉�K13-10

//�V����C������剉�K13-11

//�V����C������剉�K13-12

//�V����C������剉�K13-13
