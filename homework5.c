#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�V����C������剉�K9-1
//int main()
//{
//	char str[] = "ABC\0DEF";
//	printf("������str��\"%s\"�ł��B\n", str);
//	return 0;
//}
//�V����C������剉�K9-2
//int main()
//{
//	char s[] = "ABC";
//	printf("\"%s\"\n", s);
//	s[0] = '\0';
//	printf("\"%s\"\n", s);
//	return 0;
//}
//�V����C������剉�K9-3
//#define NUM 5
//
//int main()
//{
//	char s[NUM][128];
//	int i = 0, j = 0;
//	char stop[] = "$$$$$";
//	for (i = 0; i < NUM; i++)
//	{
//		printf("s[%d] : ", i);
//		scanf("%s", s[i]);
//		if (strcmp(s[i], stop) == 0)
//			break;
//	}
//	for (i = 0; i < NUM; i++)
//	{
//		if (strcmp(s[i], stop) == 0)
//			break;
//		printf("s[%d] = \"%s\"\n", i, s[i]);
//	}
//	return 0;
//}
//�V����C������剉�K9-4
//void null_string(char s[])
//{
//	s[0] = '\0';
//}
//int main()
//{
//	char s[] = "ABCD";
//	printf("\"%s\"\n", s);
//	null_string(s);
//	printf("\"%s\"\n", s);
//	return 0;
//}
//�V����C������剉�K9-5
//int str_char(const char s[], int c)
//{
//	int i = 0;
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		if (s[i] == c)
//			return i;
//	}
//		return -1;
//}
//int main()
//{
//	char s[10];
//	scanf("%s", s);
//	int tmp = str_char(s, 'c');
//	if (tmp == -1)
//		printf("����c�͕�����s�Ɋ܂܂�Ă��܂���B\n");
//	else
//		printf("����c�͕�����s��%d�Ԗڂɂ���܂��B�Y����%d�ł��B\n", tmp+1,tmp);
//	return 0;
//}
//�V����C������剉�K9-6

//�V����C������剉�K9-7

//�V����C������剉�K9-8

//�V����C������剉�K9-9

//�V����C������剉�K9-10

//�V����C������剉�K9-11

//�V����C������剉�K9-12

//�V����C������剉�K10-1

//�V����C������剉�K10-2

//�V����C������剉�K10-3

//�V����C������剉�K10-4

//�V����C������剉�K10-5
