#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//�V����C������剉�K11-1
//int main()
//{
//	char* p = "123";
//	printf("p = \"%s\"\n", p);
//	p = "456" + 1;
//	printf("p = \"%s\"\n", p);//"56" -- �|�C���^�͈�����A�h���X�ɑ�������
//	return 0;
//}
//�V����C������剉�K11-2
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
//�V����C������剉�K11-3
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
//	printf("������:");
//	scanf("%s", s);
//	printf("������\"%s\"�̒�����%zu�ł��B\n", s, my_strlen(s));
//	return 0;
//}
//�V����C������剉�K11-4
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
//	printf("������:", s2);
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
//	printf("������:", s2);
//	scanf("%s", s2);
//	int n = 0;
//	printf("�R�s�[��������:"); scanf("%d", &n);
//	printf("s1 = \"%s\"\n", my_strncpy(s1, s2, n));
//	return 0;
//}
//�V����C������剉�K11-5
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
//	printf("�R�s�[��������:"); scanf("%d", &n);
//	printf("s = %s\n", my_strncat(s, x, n));
//	return 0;
//}
//�V����C������剉�K11-6
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
//	puts("\"ABCDE\"�Ƃ̔�r���s���܂��B");
//	puts("\"XXXXX\"�ŏI�����܂��B");
//	int n = 0;
//	while (1)
//	{
//		printf("\n������s:");
//		scanf("%s", s);
//		if (my_strcmp(s, "XXXXX") == 0)
//			break;
//		printf("��r��������:"); scanf("%d", &n);
//		printf("my_strcmp( \"ABCDE\", s)     = %d\n", my_strcmp("ABCDE", s));
//		printf("my_strncmp( \"ABCDE\", s, %d) = %d\n",n, my_strncmp("ABCDE", s, n));
//	}
//	return 0;
//}
//�V����C������剉�K11-7
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
//	printf("����:"); scanf("%s", s);
//	put_string(s);
//	return 0;
//}
//�V����C������剉�K11-8
//int str_chnum(const char* s, int c)
//{
//	int count = 0;
//	while (*s)
//	{
//		if (*s++ == c)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	char s[20];
//	printf("���������́F"); scanf("%s",s);
//	printf("������̒��ɕ���c��%d����܂��B\n", str_chnum(s, 'c'));
//	return 0;
//}
//�V����C������剉�K11-9
//char* str_chr(const char* s, int c)
//{
//	do
//	{
//		if (*s == c)
//			return s;
//	} while (*s++);
//	return NULL;
//}
//int main()
//{
//	char s[20];
//	printf("���������́F"); scanf("%s", s); getchar();
//	char c = getchar();
//	printf("����%c�̓A�h���X:%p �ɂ���܂��B\n",c, str_chr(s, 'c'));
//	return 0;
//}
//�V����C������剉�K11-10
//void str_tupper(char* s)
//{
//	while (*s)
//	{
//		*s++ = toupper(*s);
//	}
//}
//void str_tolower(char* s)
//{
//	while (*s)
//	{
//		*s++ = tolower(*s);
//	}
//}
//int main()
//{
//	char str[128];
//	printf("���������͂���F"); scanf("%s", str);
//	str_tupper(str);
//	printf("�啶���F%s\n", str);
//	str_tolower(str);
//	printf("�������F%s\n", str);
//	return 0;
//}
//�V����C������剉�K11-11
// #include <ctype.h>
// 
//void del_digit(char* str)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < strlen(str); i++)
//	{
//		if (!isalpha(*(str + i)))
//			//isalpha() - ��̕������p�����ǂ���
//			//���������͉p���Ȃ�O�ȊO�̒l��Ԃ��A�p������Ȃ���΂O��Ԃ��܂�
//			//�K�v�̃w�b�_�́F <ctype.h>
//		{
//			for (j = i; j < strlen(str); j++)
//			{
//				*(str + j) = *(str + j + 1);
//			}
//			i--;
//		}
//	}
//}
//int main()
//{
//	char str[20];
//	printf("���������͂���F"); scanf("%s", str);
//	del_digit(str);
//	printf("�����������폜�������Ƃ̕�����F%s\n", str);
//	return 0;
//}
//�V����C������剉�K11-12
//#include <stdlib.h>
//
//int my_atoi(const char* str)
//{
//    int num = 0, sign = 1;
//     if (*str == '-') 
//    {
//        sign = -1;
//        *str++;
//    }
//    while (1) 
//    {
//        num += *str - '0';
//        *str++;
//        if (*str < '0') 
//            break;
//        num *= 10;
//    }
//    return num * sign;
//}
//long my_atol(const char* str)
//{
//    long num = 0;
//    int sign = 1;
//    if (*str == '-')
//    {
//        sign = -1;
//        *str++;
//    }
//    while (1)
//    {
//        num += *str - '0';
//        *str++;
//        if (*str < '0')
//            break;
//        num *= 10;
//    }
//    return num * sign;
//}
//long long my_atoll(const char* str)
//{
//    long long num = 0;
//    int sign = 1;
//    if (*str == '-')
//    {
//        sign = -1;
//        *str++;
//    }
//    while (1)
//    {
//        num += *str - '0';
//        *str++;
//        if (*str < '0')
//            break;
//        num *= 10;
//    }
//    return num * sign;
//}
//double my_atof(const char* str)
//{
//    double num = 0;
//    int sign = 1;
//    if (*str == '-')
//    {
//        sign = -1;
//        *str++;
//    }
//    while (1)
//    {
//        num += *str - '0';
//        *str++;
//        if (*str == '\0' || *str == '.')
//            break;
//        num *= 10;
//    }
//    if (*str == '.')
//    {
//        *str++;
//        double dec = 1;
//        while (1)
//        {
//            num += (*str - '0') / (dec *= 10);
//            *str++;
//            if (*str == '\0')
//                break;
//        }
//    }
//    return num * sign;
//}
//int main()
//{
//	char str[128];
//	printf("���������͂���F"); scanf("%s", str);
//	printf("int�^�ɕϊ�����ƁF�@�@�@%d�ł��B\n", my_atoi(str));
//	printf("long�^�ɕϊ�����ƁF�@�@ %d�ł��B\n", my_atol(str));
//	printf("long long�^�ɕϊ�����ƁF%d�ł��B\n", my_atoll(str));
//	printf("double�^�ɕϊ�����ƁF   %lf�ł��B\n", my_atof(str));
//	return 0;
//}