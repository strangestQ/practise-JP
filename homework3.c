#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�V����C������剉�K7-1
//int main()
//{
//	int n = 0;
//	printf("%zu\n", sizeof 1);//�����^������S
//	printf("%zu\n", sizeof+1);//�����t���������^������S
//	printf("%zu\n", sizeof-1);//�����������^������S
//	printf("%zu\n", sizeof(unsigned) - 1);//�����^-1������R
//	printf("%zu\n", sizeof(double) - 1);//���������_�^-1������V
//	printf("%zu\n", sizeof((double) - 1));//���������_�^�ƂP�̌v�Z���ʂ͕��������_�^������W
//	printf("%zu\n", sizeof n + 2);//�����^�{�Q������U
//	printf("%zu\n", sizeof (n + 2));//�����^�̌v�Z���ʂ͐����^������S
//	printf("%zu\n", sizeof (n + 2.0));//�����^�ƕ��������_�^�̌v�Z���ʂ͕��������_�^������W
//	return 0;
//}
//�V����C������剉�K7-2
//2���n����v�Z
//unsigned pow2(unsigned n)
//{
//   unsigned i = 0, mul = 1;
//    for (i = 0; i < n; i++)
//    {
//        mul *= 2;
//    }
//    return mul;
//}
//int main(void)
//{
//    unsigned a = 0;
//    int n = 0;
//    printf("��������͂��Ă��������F"); scanf("%u", &a);
//    printf("���E�ɃV�t�g����l����͂��Ă��������F"); scanf("%d", &n);
//    unsigned ret = pow2(n);
//    unsigned l_sht = a << n;
//    unsigned r_sht = a >> n;
//    printf("%u * 2��%u�� = %u\n", a, n, a * ret);
//    printf("%u << %u = %u\n", a, n, l_sht);
//    printf("%u / 2��%u�� = %u\n", a, n, a / ret);
//    printf("%u >> %u = %u\n", a, n, r_sht);
//    return 0;
//}
//�V����C������剉�K7-3
//void print_bits(unsigned x)
//{
//	int i = 0;
//	for (i = 8 * sizeof(unsigned) - 1; i >= 0; i--)
//	{
//		if ((x >> i) & 1)
//			putchar('1');
//		else
//			putchar('0');
//	}
//}
//unsigned rrotate(unsigned x, int n)
//{
//	int i = 8 * sizeof(unsigned);
//	return (n?(x >> n | (x << (i - n))):x);
//}
//unsigned lrotate(unsigned x, int n)
//{
//	int i = 8 * sizeof(unsigned);
//	return (n?(x << n | (x >> (i - n))):x);
//}
//int main()
//{
//	unsigned x = 0;
//  int n = 0;
//	printf("��������͂��Ă��������F"); scanf("%u", &x);
//  printf("���r�b�g��]���邩����͂��Ă��������F"); scanf("%d", &n);
//	printf("���̐��̃r�b�g�́@�@�@�@�F"); print_bits(x); 
//	putchar('\n');
//	printf("%u���E��%u�r�b�g��]������́F%u\n", x, n, rrotate(x, n));
//	printf("�E�ɉ�]������̃r�b�g�́F"); print_bits(rrotate(x, n));
//	putchar('\n');
//	printf("%u������%u�r�b�g��]������́F%u\n", x, n, lrotate(x, n));
//	printf("���ɉ�]������̃r�b�g�́F"); print_bits(lrotate(x, n));
//	putchar('\n');
//	return 0;
//}
//�V����C������剉�K7-4
//void print_bits(unsigned x)
//{
//	int i = 0;
//	for (i = 8 * sizeof(unsigned) - 1; i >= 0; i--)
//	{
//		if ((x >> i) & 1)
//			putchar('1');
//		else
//			putchar('0');
//	}
//}
//unsigned set(unsigned x, int pos)
//{
//	return (x | 1U << (pos - 1));
//}
//unsigned reset(unsigned x, int pos)
//{
//	return (x & ~(1U << (pos - 1)));
//}
//unsigned inverse(unsigned x, int pos)
//{
//	return (x ^ 1U << (pos - 1));
//}
//int main()
//{
//	unsigned x = 0;
//	int pos = 0;
//	printf("��������͂��Ă��������F"); scanf("%u", &x);
//	printf("�扽�ʂ̃r�b�g�𑀍삵�܂����F"); scanf("%d", &pos);
//	printf("���̐��̃r�b�g�́@�@�@�@�@�F"); print_bits(x); 
//	putchar('\n');
//	printf("%u�̑�%u�ʃr�b�g���Z�b�g�����l�́@�F%u\n", x, pos, set(x, pos));
//	printf("�Z�b�g������̃r�b�g�́@�@�F"); print_bits(set(x, pos));
//	putchar('\n');
//	printf("%u�̑�%u�ʃr�b�g�����Z�b�g�����l�́F%u\n", x, pos, reset(x, pos));
//	printf("���Z�b�g������̃r�b�g�́@�F"); print_bits(reset(x, pos));
//	putchar('\n');
//	printf("%u�̑�%u�ʃr�b�g�𔽓]�����l�́@�@�F%u\n", x, pos, inverse(x, pos));
//	printf("���]������̃r�b�g�́@�@�@�F"); print_bits(inverse(x, pos));
//	putchar('\n');
//	return 0;
//}
//�V����C������剉�K7-5
//void print_bits(unsigned x)
//{
//	int i = 0;
//	for (i = 8 * sizeof(unsigned) - 1; i >= 0; i--)
//	{
//		if ((x >> i) & 1)
//			putchar('1');
//		else
//			putchar('0');
//	}
//}
////int move_1(int pos, int n)
////{
////	int i;
////	int j = 0;
////	for (i = 1; i <= n; i++)
////	{
////		j |= 1U << (pos + n - 1 - i);
////	}
////	return j;
////}
////unsigned set_n(unsigned x, int pos,int n)
////{
////	return x | move_1(pos, n);
////}
////unsigned reset_n(unsigned x, int pos,int n)
////{
////	return x & ~move_1(pos, n);
////}
////unsigned inverse_n(unsigned x, int pos,int n)
////{
////	return x ^ move_1(pos, n);
////}
////������̏�����
//unsigned move_1(int i) 
//{
//	return 1U << i - 1;
//}
//
//unsigned set_n(unsigned x, int pos, int n) 
//{
//	for (int i = pos; i <= pos + n - 1; i++) 
//	{
//		x |= move_1(i);
//	}
//	return x;
//}
//
//unsigned reset_n(unsigned x, int pos, int n) 
//{
//	for (int i = pos; i <= pos + n - 1; i++) 
//	{
//		x &= ~move_1(i);
//	}
//	return x;
//}
//
//unsigned inverse_n(unsigned x, int pos, int n) 
//{
//	for (int i = pos; i <= pos + n - 1; i++) 
//	{
//		x ^= move_1(i);
//	}
//	return x;
//}
//int main()
//{
//	unsigned x = 0;
//	int pos = 0, n = 0;
//	printf("��������͂��Ă��������F"); scanf("%u", &x);
//	printf("�扽�ʂ̃r�b�g�𑀍삵�܂����F"); scanf("%d", &pos);
//	printf("�X�ɂ������牽�r�b�g�ύX���܂����F"); scanf("%d", &n);
//	printf("���̐��̃r�b�g�́@�@�@�@�@�F"); print_bits(x);
//	putchar('\n');
//	printf("%u�̑�%u�ʃr�b�g�����%u�ʃr�b�g���Z�b�g�����l�́@�F%u\n", x, pos, pos + n - 1, set_n(x, pos, n));
//	printf("�Z�b�g������̃r�b�g�́@�@�F"); print_bits(set_n(x, pos, n));
//	putchar('\n');
//	printf("%u�̑�%u�ʃr�b�g�����%u�ʃr�b�g�����Z�b�g�����l�́F%u\n", x, pos, pos + n - 1, reset_n(x, pos, n));
//	printf("���Z�b�g������̃r�b�g�́@�F"); print_bits(reset_n(x, pos, n));
//	putchar('\n');
//	printf("%u�̑�%u�ʃr�b�g�����%u�ʃr�b�g�𔽓]�����l�́@�@�F%u\n", x, pos, pos + n - 1, inverse_n(x, pos, n));
//	printf("���]������̃r�b�g�́@�@�@�F"); print_bits(inverse_n(x, pos, n));
//	putchar('\n');
//	return 0;
//}
//�V����C������剉�K7-6
//#include<limits.h>
//
//int main()
//{
//	unsigned x, y, z;
//	x = UINT_MAX / 2;//2,147,483,647
//	y = UINT_MAX / 2 + 123;//2,147,483,770+
//	z = x + y;//���w�I�ȉ��Z���ʁF4,294,967,417
//	printf("�{���̕����Ȃ������^�̒l�̍ő�l��%u\n", UINT_MAX);//4,294,967,295
//	printf("%u\n", z);//121
//	return 0;
//}
//�V����C������剉�K7-7

//�V����C������剉�K7-8

//�V����C������剉�K7-9

//�V����C������剉�K7-10

//�V����C������剉�K7-11
