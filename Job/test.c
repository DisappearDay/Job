#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���ھۣ������
// �ھۣ��������Լ��Ĵ��룬��Զ���һЩ   ��ϣ�������֮��ĺ�����������һЩ����������һЩ
//��������ƾ�Ӧ�ø��ھۣ�����ϡ����Լ�������������ĺ���û��ϵ����Ҫ��Ҫ�ÿ��Ե��á�
// main()������λ�ÿ���������

//ջ�б�����Ǻ����ľֲ���������ʽ������ջ�д�ŵ������ǽ�ջ���棬��ջ����

//��ά���鶨��ʱ����ʡ���У����ǲ�����ʡ����

//int get_diff(int n, int m)
//{
//	int sum = n ^ m;
//	int num = 0;
//	while (sum) {
//		sum = sum & (sum - 1);
//		num++;
//	}
//	return num;
//}
//
//int main() {
//	int n = 0;
//	int m = 0;
//	scanf("%d %d",&n,&m);
//	int count=get_diff(n,m);
//	printf("%d\n",count);
//	return 0;
//}


//void prinf(int a) 
//{
//	int i = 0;
//	int j = 0;
//	for (i = 30; i >= 0; i -= 2) 
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	for (j = 31; j >= 1; j -= 2) 
//	{
//		printf("%d ", (a >> j) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	prinf(a);
//	return 0;
//}
//
//void print_mul(int a)
//{
//	int i = 0;
//	int j = 0;
//	for (i=1;i<=a;i++)
//	{
//		for (j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//
//int main() 
//{
//	int a = 0;
//	scanf("%d",&a);
//	print_mul(a);
//	return 0;
//}
//int my_strlen(char a[])
//{
//	int count = 0;
//	while (*a != '\0') {
//		a++;
//		count++;
//	}
//	return count;
//}
//
//void reverse_arr(char a[])
//{
//	int sum = my_strlen(a);
//	char temp = a[0];
//	a[0] = a[sum - 1];
//	a[sum - 1] = '\0';
//	if(my_strlen(a+1) >= 2)
//	reverse_arr(a+1);
//	a[sum - 1] = temp;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	
//	
//	reverse_arr(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//int main()
//{
//	int n;
//	double a = 0.0225,b,c;
//	scanf("%d,%lf", &n,&b);
//	printf("%f\n", b * (1 + a, n));
//	return 0;
//}




//int main()
//
//{
//
//	float x, y, z;
//
//	scanf("%f,%f", &x, &y);
//
//	z = x * 0.3 + y * 0.7;
//
//	printf("z=%.2f\n", z);
//
//	return 0;
//
//
//
//
//}


