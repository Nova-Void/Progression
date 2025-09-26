#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0         //如果为真（1），则编译此段代码，反之不编译
//选择性语句
int main()
{
	int sum = 0;   //定义sum为0

	printf("如果从来一次，你会重新选择吗？\n");          //打印语句
	printf("1.会,0.不会\n");
	scanf("%d", &sum);                //为sum赋值
	if (sum == 1)                 // 如果sum等于1
		printf("祝你成功，加油努力\n");                //打印语句
	else if (sum == 0)                              //否则如果sum等于0
		printf("开心快乐也是很重要的\n");             //打印语句
	else                                //否则
		printf("输入有误，但生活还要继续\n");            //打印语句

}
#endif       //从这结束

//计算两个数字的和
#if 0

int main()
{
	//定义数字
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);       //输入函数 

	sum = a + b;
	printf("%d \n", sum);          //打印sum
	return 0;



}
#endif

//运用函数，计算两个数字的和
#if 0

int cad(int x, int y)  //定义函数
{
	int z = 0;           //定义变量z为0
	z = x + y;          //计算x+y的值赋给z
	return z;          //返回z的值
}
int main()
{
	int a = 0;            //定义变量a为0
	int b = 0;
	scanf("%d%d", &a, &b);          //输入函数
	int sum = cad(a, b);        //调用函数
	printf("%d\n", sum);         //打印sum
	return 0;                   //返回0，表示结束
}
#endif


//数组的使用
//10 20 30 40 50 60 70 80 90 100（下标依次为0 1 2 3 4 5 6 7 8 9）
#if 0
int main()
{
	int sum[10] = { 10,20,30,40,50,60,70,80,90,100 };           //定义数组名称为sum，包含10个元素等于{10,20,30,40,50,60,70,80,90,100}
	int o = 0;                              //定义o为0
	while (o < 10)                //当o小于10时，开始循环
	{

		printf("%d", sum[o]);              //打印数组sum数组下标为o的值

		o++;                        //每次循环o加1
	}

	return 0;                //返回0，表示结束


}
#endif                