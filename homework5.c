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
//	printf("������s�̒���,����c��%d����܂��B\n", tmp);
//	return 0;
//}
//�V����C������剉�K9-7
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
//	printf("����R�s�[���܂����F"); scanf("%d", &n);
//	put_stringn(s, n);
//	return 0;
//}
//�V����C������剉�K9-8
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
//	printf("��������t�ɕ\�����邵�܂��F");
//	put_stringr(s);
//	return 0;
//}
//�V����C������剉�K9-9
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
//	printf("������̕��т𔽓]���܂��F\"%s\"\n", s);
//	return 0;
//}
//�V����C������剉�K9-10
//void del_digit(char s[])
//{
//	int i = 0, j = 0;
//	//while�z��
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
//	//for�z��
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
//	printf("�����������������܂��F\"%s\"\n", s);
//	return 0;
//}
//�V����C������剉�K9-11
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
//�V����C������剉�K9-12
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
//	printf("�z��Ɋi�[����Ă���%d�̕�����̕����̕��т𔽓]���܂����B\n", n);
//	for (i = 0; i < n; i++)
//	{
//		if (strcmp(s[i], stop) == 0)
//			break;
//		printf("s[%d] = \"%s\"\n", i, s[i]);
//	}
//	return 0;
//}
//�V����C������剉�K10-1
//void adjust_point(int* n)
//{
//	if (*n < 0)
//		*n = 0;
//	else if (*n > 100)
//		*n = 100;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	adjust_point(&n);
//	printf("�X�V��Fn = %d\n", n);
//	return 0;
//}
//�V����C������剉�K10-2
//void decrement_date(int* y, int* m, int* d)
//{
//	*d -= 1;
//	if (*d < 1)
//	{
//		*m -= 1;
//		if (*m == 4 || *m == 6 || *m == 9 || *m == 11)
//		{
//			*d = 30;
//		}
//		else if (*m == 2)
//		{
//			if ((*y % 4 == 0 && *y % 100 != 0) || (*y % 400 == 0))
//				*d = 29;
//			else
//				*d = 28;
//		}
//		else if (*m < 1)
//		{
//			*m = 12;
//			*d = 31;			
//			*y -= 1;
//		}
//		else
//			*d = 31;
//	}
//}
//void increment_date(int* y, int* m, int* d)
//{
//	*d += 1;
//	if ((*m == 4 || *m == 6 || *m == 9 || *m == 11) && *d > 30)
//	{
//		*m += 1;
//		*d = 1;
//	}
//	else if (*m == 2)
//	{
//		if (((*y % 4 == 0 && *y % 100 != 0) || (*y % 400 == 0)) && *d > 29)
//		{
//			*m += 1;
//			*d = 1;
//		}
//		else
//		{
//			*m += 1;
//			*d = 1;
//		}
//	}
//	else if (*m == 12 && *d > 31)
//	{
//		*y += 1;
//		*m = 1;
//		*d = 1;
//	}
//	else
//	{
//		*m += 1;
//		*d = 1;
//	}
//}
//int main()
//{
//	int y = 0, m = 0, d = 0;
//	put:
//	do
//	{
//		printf("���������t��N�A���A���̏��Ԃɓ��͂���F"); scanf("%d %d %d", &y, &m, &d);
//		if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
//		{
//			goto put;
//		}
//		else if (m == 2)
//		{
//			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//			{
//				if (d > 29)
//					goto put;
//			}
//			else
//			{
//				if (d > 28)
//					goto put;
//			}
//		}
//		else
//			if (d > 31)
//				goto put;
//	} while (y < 1 && m < 1 && m>12 && d < 1 && d>31);
//	printf("���t�́F %d �N %d �� %d ��\n", y, m, d);
//	int sw = 0;
//	int y1 = y, m1 = m, d1 = d, y2 = y, m2 = m, d2 = d;
//	do
//	{
//		printf("�\��������t�́F�O�̓� -- 1 ���̓� -- 2 �I�� -- 0\n"); scanf("%d", &sw);
//		switch (sw)
//		{
//		case 0:
//			break;
//		case 1:
//			decrement_date(&y1, &m1, &d1);
//			printf("�O�̓��̓��t�́F %d �N %d �� %d ���ł��B\n\n", y1, m1, d1);
//			y1 = y, m1 = m, d1 = d;
//			break;
//		case 2:
//			increment_date(&y2, &m2, &d2);
//			printf("���̓��̓��t�́F %d �N %d �� %d ���ł��B\n\n", y2, m2, d2);
//			y2 = y, m2 = m, d2 = d;
//			break;
//		default:
//			printf("0,1����2����͂��Ă��������B\n\n");
//			break;
//		}
//		
//	} while (sw);
//	return 0;
//}
//�V����C������剉�K10-3
//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//void sort3(int* n1, int* n2, int* n3)
//{
//	if (*n1 > *n2)
//		swap(n1, n2);
//	if (*n1 > *n3)
//		swap(n1, n3);
//	if (*n2 > *n3)
//		swap(n2, n3);
//}
//int main()
//{
//	int a, b, c;
//	puts("�O�̐�������͂���B");
//	printf("����A�F"); scanf("%d", &a);
//	printf("����B�F"); scanf("%d", &b);
//	printf("����C�F"); scanf("%d", &c);
//	sort3(&a, &b, &c);
//	puts("�����Ƀ\�[�g���܂����B");
//	printf("����A��%d�ł��B\n", a);
//	printf("����B��%d�ł��B\n", b);
//	printf("����C��%d�ł��B\n", c);
//	return 0;
//}
//�V����C������剉�K10-4
//void set_idx(int* v, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		v[i] = i;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	set_idx(arr, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		if (i == 0)
//			printf("arr = { %d", arr[i]);
//		else if (i == 9)
//			printf(", %d }", arr[i]);
//		else
//			printf(", %d", arr[i]);
//	}
//	putchar('\n');
//	return 0;
//}
//�V����C������剉�K10-5
//void ary_set(int v[], int n, int val)
//{
//	for (int i = 0; i < n; i++)
//	{
//		v[i] = val;
//	}
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	ary_set(&a[2], 2, 99);//���ʂ́o1,2,99,99,5�p
//	//��������̂�a[2]����n�܂�2�̌��f�݂̂ł���
//	for (int i = 0; i < 5; i++)
//	{
//		printf("a[%d] = %d\n", i, a[i]);
//	}
//	return 0;
//}