#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//新明解C言語入門演習11-1
//int main()
//{
//	char* p = "123";
//	printf("p = \"%s\"\n", p);
//	p = "456" + 1;
//	printf("p = \"%s\"\n", p);//"56" -- ポインタは一個高いアドレスに増加した
//	return 0;
//}
//新明解C言語入門演習11-2
//int main()
//{
//	char a[][5] = { "LISP","C","Ada" };
//	char* p[] = { "PAUL","X","MAC" };
//	int i = 0;
//	for (i = 0; i<(sizeof(a)/sizeof(a[0])); i++)
//	{
//		printf("a[%d] = \"%s\"\n", i, a[i]);
//	}
//	for (i = 0; i<(sizeof(p) / sizeof(p[0])); i++)
//	{
//		printf("p[%d] = \"%s\"\n", i, p[i]);
//	}
//	return 0;
//}
//新明解C言語入門演習11-3
//size_t my_strlen(const char* s)
//{
//	size_t len = 0;
//	while (*s++)
//		len++;
//	return len;
//}
//int main()
//{
//	char s[128];
//	printf("文字列:");
//	scanf("%s", s);
//	printf("文字列\"%s\"の長さは%zuです。\n", s, my_strlen(s));
//	return 0;
//}
//新明解C言語入門演習11-4
//char* my_strcpy(char* s1, const char* s2)
//{
//	char* s = s1;
//	while (*s1++ = *s2++)
//		;
//	return s;
//}
//int main()
//{
//	char s1[128];
//	char s2[128];
//	printf("文字列:", s2);
//	scanf("%s", s2);
//	printf("s1 = \"%s\"\n", my_strcpy(s1, s2));
//	return 0;
//}
//char* my_strncpy(char* s1, const char* s2,size_t n)
//{
//	char* s = s1;
//	while (n)
//	{
//		n--;
//		if (!(*s1++ = *s2++))
//			break;
//	}
//	while (!(n--))
//		*s1++ = '\0';
//	return s;
//}
//int main()
//{
//	char s1[128];
//	char s2[128];
//	printf("文字列:", s2);
//	scanf("%s", s2);
//	int n = 0;
//	printf("コピーする上限は:"); scanf("%d", &n);
//	printf("s1 = \"%s\"\n", my_strncpy(s1, s2, n));
//	return 0;
//}
//新明解C言語入門演習11-5
//char* my_strcat(char* s1, const char* s2)
//{
//	//size_t i = strlen(s1);
//	//while (*s2)
//	//{
//	//	s1[i++] = *s2++;
//	//}
//	//return s1;
//	char* p = s1;
//	while (*s1)
//		s1++;
//	while (*s1++ = *s2++)
//		;
//	return p;
//}
//int main()
//{
//	char s[20] = "ABC";
//	char* x = "DEF";
//	printf("s = %s\n", my_strcat(s, x));
//	return 0;
//}
//char* my_strncat(char* s1, const char* s2, size_t n)
//{
//	char* p = s1;
//	while (*s1)
//		s1++;
//	while (n)
//	{
//		n--;
//		if (!(*s1++ = *s2++))
//			break;
//	}
//	return p;
//}
//int main()
//{
//	char s[20] = "123";
//	char* x = "456789";
//	size_t n = 0;
//	printf("コピーする上限は:"); scanf("%d", &n);
//	printf("s = %s\n", my_strncat(s, x, n));
//	return 0;
//}
//新明解C言語入門演習11-6
//int my_strcmp(const char* s1, const char* s2)
//{
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return ((unsigned char)*s1 - (unsigned char)*s2);
//}
//int my_strncmp(const char* s1, const char* s2, size_t n)
//{
//	while (n && *s1 && *s2)
//	{
//		if (*s1 != *s2)
//			return((unsigned char)*s1 - (unsigned char)*s2);
//		s1++;
//		s2++;
//		n--;
//	}
//	if (!n)
//		return 0;
//	if (!*s1)
//		return -1;
//}
//int main()
//{
//	char s[128];
//	puts("\"ABCDE\"との比較を行います。");
//	puts("\"XXXXX\"で終了します。");
//	int n = 0;
//	while (1)
//	{
//		printf("\n文字列s:");
//		scanf("%s", s);
//		if (my_strcmp(s, "XXXXX") == 0)
//			break;
//		printf("比較する上限は:"); scanf("%d", &n);
//		printf("my_strcmp( \"ABCDE\", s)     = %d\n", my_strcmp("ABCDE", s));
//		printf("my_strncmp( \"ABCDE\", s, %d) = %d\n",n, my_strncmp("ABCDE", s, n));
//	}
//	return 0;
//}
//新明解C言語入門演習11-7
//void put_string(const char* s)
//{
//	int i = 0;
//	for (i = 0; i < strlen(s); i++)
//	{
//		printf("%c", *(s + i));
//	}
//}
//int main()
//{
//	char s[20];
//	printf("入力:"); scanf("%s", s);
//	put_string(s);
//	return 0;
//}
//新明解C言語入門演習11-8

//新明解C言語入門演習11-9

//新明解C言語入門演習11-10

//新明解C言語入門演習11-11

//新明解C言語入門演習11-12
