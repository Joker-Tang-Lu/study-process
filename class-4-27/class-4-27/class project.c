#include <stdio.h>
//包含一个叫stdio.h的文件
//std-标准

//int main()
//int是整型的意思
//主函数-程序的入口-main函数有且只有一个
//main前面的int表示main函数调用返回一个整型值
//{
	//这里完成任务
	//函数-print function -打印函数
	//#include
	//printf("he he\n");
	//return 0;
//}



/*int main()
{
	
	printf("hello 汤富\n");
	return 0;//返回0
}

//数据类型
/*int 整型
* char 字符类型数据
* short 短整型
* long 长整型
* long long 更长的整型
* float 单精度浮点数
* double 双精度浮点数
* 
//char 字符类型数据
int main()
{
	//char ch = 'A';//申请内存
	//printf("%c\n", ch);
	int age = 20;
	printf("%d\n", age);
	return 0;
}
*/
/*
%d - 打印整型
%c - 打印字符
%f - 打印浮点数字-打小数
%p - 以地址的形式打印
%x - 打印16进制
%o ........*/
//int main()
//{
	//float f = 5.0;
	//printf("%f\n", f);
	//double d = 3.14;
	//printf("%lf", d);

	//return 0;
	/*int main()
	{
		short age = 20;
		return 0;

		/*printf("%d\n", sizeof(char));//1
		printf("%d\n", sizeof(short));//2
		printf("%d\n", sizeof(long));//4/8
		printf("%d\n", sizeof(long long));//8
		printf("%d\n", sizeof(float));//4
		printf("%d\n", sizeof(double));//8
		printf("%d\n", sizeof(int));//4
		return 0;
	//}
//}
	
	bit   比特位
	byte  字节
	kb    
	mb
	gb
	tb
	pb*/
/*int num = 15;
int main()
{
	int num = 10;
	printf("%d\n", num);
	return 0;
}
//局部变量和全局变量名字最好不要相同，当名字相同时，局部变量优先。
*/
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	//输入数据-使用输入函数scanf
	scanf_s("%d%d", &a, &b);
	//scanf命令在VS2019中使用时需变成scanf_s(告诉程序这是安全的)
	sum = a + b;
	printf("sum=%d\n", sum);
	//取地址符号&
	//printf("%d+%d\n", a, b);
	return 0;
}
