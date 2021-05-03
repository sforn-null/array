#include<stdio.h>
#include<string.h>
int main()
{
	int arr[] ={1,2,3,4,5,6,7};
	printf("%p\n",arr);
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr);//虽然地址一样但其实取出的是数组的地址 
	//int sz=sizeof(arr)/sizeof(arr[0]);
	//1.sizeof（数组名） 数组名表示整个数组，sizeof（数组名） 计算的是整个数组的大小，单位是字节
	//2.&数组名，数组名代表的是整个数组，&数组名，去除的是整个数组的地址 
	return 0;
}
