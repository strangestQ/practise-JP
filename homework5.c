#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//新明解C言語入門演習9-1
//int main()
//{
//	char str[] = "ABC\0DEF";
//	printf("文字列strは\"%s\"です。\n", str);
//	return 0;
//}
//新明解C言語入門演習9-2
//int main()
//{
//	char s[] = "ABC";
//	printf("\"%s\"\n", s);
//	s[0] = '\0';
//	printf("\"%s\"\n", s);
//	return 0;
//}
//新明解C言語入門演習9-3
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
//新明解C言語入門演習9-4
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
//新明解C言語入門演習9-5
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
//		printf("文字cは文字列sに含まれていません。\n");
//	else
//		printf("文字cは文字列sの%d番目にあります。添字は%dです。\n", tmp+1,tmp);
//	return 0;
//}
//新明解C言語入門演習9-6

//新明解C言語入門演習9-7

//新明解C言語入門演習9-8

//新明解C言語入門演習9-9

//新明解C言語入門演習9-10

//新明解C言語入門演習9-11

//新明解C言語入門演習9-12

//新明解C言語入門演習10-1

//新明解C言語入門演習10-2

//新明解C言語入門演習10-3

//新明解C言語入門演習10-4

//新明解C言語入門演習10-5
