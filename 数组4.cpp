#include<stdio.h>
#include<string.h>
//二维数组
//int main()
//{
//	int arr1[3][4]={{1,2,3},{4,5}};
//	int arr[][4] ={{1,2,3,4},{5,6,7,8}};//二维数组可以省略行,但不能省略列 
//	char arr2[5][6];
//	return 0; 
// } 

int main()
{
		int arr[3][4]={{1,2,3},{4,5}};
		int i=0;
		int j=0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%d",arr[i][j]);
			}
			printf("\n");
		}
	return 0;
}