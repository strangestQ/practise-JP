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
//	int i = 0;
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
//int str_chnum(const char s[], int c)
//{
//	int i = 0, count = 0;
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		if (s[i] == c)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	char s[10];
//	scanf("%s", s);
//	int tmp = str_chnum(s, 'c');
//	printf("文字列sの中に,文字cは%d個あります。\n", tmp);
//	return 0;
//}
//新明解C言語入門演習9-7
//void put_stringn(const char s[], int n)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		while (s[j])
//		{
//			putchar(s[j++]);
//		}
//		j = 0;
//	}
//	putchar('\n');
//}
//int main()
//{
//	char s[10];
//	scanf("%s", s);
//	int n = 0;
//	printf("何回コピーしますか："); scanf("%d", &n);
//	put_stringn(s, n);
//	return 0;
//}
//新明解C言語入門演習9-8
//void put_stringr(const char s[])
//{
//	int i = 0;
//	for (i = 0; s[i] != '\0'; i++)
//		;
//	for (i = i - 1; i >= 0; i--)
//	{
//		putchar(s[i]);
//	}
//	putchar('\n');
//}
//int main()
//{
//	char s[10];
//	scanf("%s", s);
//	printf("文字列を逆に表示するします：");
//	put_stringr(s);
//	return 0;
//}
//新明解C言語入門演習9-9
//void rev_string(char s[])
//{
//	int i = 0, j = 0;
//	for (i = 0; s[i] != '\0'; i++)
//		;
//	i = i - 1;
//	char tmp = 0;
//	for (j = 0; j < i; j++,i--)
//	{
//		tmp = s[i];
//		s[i] = s[j];
//		s[j] = tmp;
//	}
//}
//int main()
//{
//	char s[10];
//	scanf("%s", s);
//	rev_string(s);
//	printf("文字列の並びを反転します：\"%s\"\n", s);
//	return 0;
//}
//新明解C言語入門演習9-10
//void del_digit(char s[])
//{
//	int i = 0, j = 0;
//	//while循環
//	//while (s[i])
//	//{
//	//	if (s[i] >= '0' && s[i] <= '9')
//	//	{
//	//		j++;
//	//	}
//	//	else
//	//	{
//	//		s[i - j] = s[i];
//	//	}
//	//	i++;
//	//}
//	//s[i - j] = '\0';
//	//for循環
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		if (s[i] >= '0' && s[i] <= '9')
//		{
//			for (j = i; s[j] != '\0'; j++)
//			{
//				s[j] = s[j + 1];
//			}
//			i--;
//		}
//	}
//}
//int main()
//{
//	char s[10];
//	scanf("%s", s);
//	del_digit(s);
//	printf("数字文字を除去します：\"%s\"\n", s);
//	return 0;
//}
//新明解C言語入門演習9-11
//#define NUM 6
//#define CHAR 128
//
//int get_string(char s[][CHAR])
//{
//	char stop[] = "$$$$$";
//	int i = 0, count = 0;
//	for (i = 0; i < NUM; i++)
//	{
//		printf("s[%d] : ", i);
//		scanf("%s", s[i]);
//		if (strcmp(s[i], stop) == 0)
//			break;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char s[NUM][CHAR];
//	int tmp = get_string(s);
//	int i = 0;
//	for (i = 0; i < tmp; i++)
//	{
//		printf("s[%d] = \"%s\"\n", i, s[i]);
//	}
//	return 0;
//}
//新明解C言語入門演習9-12
//void rev_strings(char s[][128], int n)
//{
//	int i = 0, j = 0, len = 0;
//	char tmp = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (len = 0; s[i][len] != '\0'; len++)
//			;
//		len = len - 1;
//		for (j = 0; j < len; j++, len--)
//		{
//			tmp = s[i][j];
//			s[i][j] = s[i][len];
//			s[i][len] = tmp;
//		}
//	}
//}
//int main()
//{
//	char s[10][128] = { 0 };
//	int i = 0,n = 0;
//	char stop[] = "$$$$$";
//	for (i = 0; i < 10; i++,n++)
//	{
//		printf("s[%d] : ", i);
//		scanf("%s", s[i]);
//		if (strcmp(s[i], stop) == 0)
//			break;
//	}
//	rev_strings(s, n);
//	printf("配列に格納されている%d個の文字列の文字の並びを反転しました。\n", n);
//	for (i = 0; i < n; i++)
//	{
//		if (strcmp(s[i], stop) == 0)
//			break;
//		printf("s[%d] = \"%s\"\n", i, s[i]);
//	}
//	return 0;
//}
//新明解C言語入門演習10-1

//新明解C言語入門演習10-2

//新明解C言語入門演習10-3

//新明解C言語入門演習10-4

//新明解C言語入門演習10-5
