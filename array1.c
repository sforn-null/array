#include<stdio.h>
#include<string.h>
int main()
{
	//创建一个数组存放整型-10个 
	int arr[10] = { 1,2.3 };//不完全初始化，剩下的元素默认初始化为0 
	char arr2[5] = { 'a','b' };
	char arr3[5] = "ab"; //存储了a b \0 
	char arr4[] = "abcdef";
	printf("%d\n", sizeof(arr4));
	printf("%d\n", strlen(arr4));
	//[]中要写常量 
	return 0;
}
//1.strien和sizeof没什么关联
//2.strlen 是求字符串长度的--只能针对字符串求长度--库函数--使用得引头文件
//3.sizeof 是计算变量，数组，类型的大小--单位是字节--操作符 
