#include <stdio.h>

/*int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}
*/
/*
#define MAX 10
int main()
{
	/*int num = 4;
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);*/
	//字面常量
	/*const int num = 5;
	//const修饰的常变量
	printf("%d\n", num);
	num = 9;
	printf("%d\n", num);*/
	/*int n = 10;
	int arr[n] = { 0 };
	//n是变量，但又是常量。
	int arr[MAX] = { 0 };
	printf("%d\n", MAX);
	return 0;
}
*/
//常量
//1.字面常量
//枚举常量
/*性别
三原色
星期
*/
//枚举关键字 enum
/*
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	enum Sex s = MALE;
	printf("%d\n", s);
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	return 0;
}
//枚举常量不可以改变，可以改变取值对象，但不能改变值本身
*/

//字符串
//char字符类型
//字符串类型？"dkjishf"为字符串类型
/*
int main()
{
	//数据在计算机上储存的是二进制
	//a-97
	//A-65
	//ASCII编码
	//对应的值为ASCII码值
	char arr[] = "abc\n";// \n为换行
	//数组
	//"abc"--'a' 'b' 'c' '\0'--'\0'为字符串结束标志
	char arr1[] = { 'a','b','c' ,'\0'};
	char arr2[] = { 'a','b','c'  };
	//'a' 'b' 'c' --没有结束标志，随机打印
	printf("%s\n", arr);
	printf("%s\n", arr1);
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr1));
	//strlen--sring length--计算字符串的长度
	printf("%d\n", strlen(arr2));
	return 0;
}
*/
int main()
{
	printf("c:\test\32\test.c");
	return 0;
}