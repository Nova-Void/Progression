#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>        //预处理文件

int main()    //函数入口
{
	//printf用于打印东西到屏幕 （%d为整数，100为要打印的数字）
	//sizeof -关键字 -操作符 用于查看数据类型或变量所占内存大小，单位为字节
	printf("%d \n", 100);    //打印数字为100
	printf("%d \n", sizeof(char));     //字符型（1）
	printf("%d \n", sizeof(short));     //短句整型（2）
	printf("%d \n", sizeof(int));       //整型（4）
	printf("%d \n", sizeof(long));                 //长整型（4）
	printf("%d \n", sizeof(long long));            //更长的整型（8）
	printf("%d \n", sizeof(float));                //单精度浮点型（4）
	printf("%d\n", sizeof(double));                //双精度浮点型（8）
	printf("%d \n", sizeof(long double));          //更长的双精度浮点型（8）

	return 0;   //结束，退出程序，返回0
}