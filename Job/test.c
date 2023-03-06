#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//高内聚，低耦合
// 内聚：尽量让自己的代码，相对独立一些   耦合：是两个之间的函数尽量交互一些，关联更大一些
//函数的设计就应该高内聚，低耦合。让自己更独立，跟别的函数没关系，你要是要用可以调用。
// main()函数的位置可以任意存放

//栈中保存的是函数的局部变量和形式参数，栈中存放的数据是进栈保存，出栈销毁

//二维数组定义时可以省略行，但是不可以省略列

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


