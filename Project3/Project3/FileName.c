#define _CRT_SECURE_NO_WARNINGS
//用于处理scanf函数的安全问题，添加该语句后，scanf函数不会报错，在newsc++.cpp中添加该语句后，scanf函数也不会报错
#include <stdio.h> //预处理文件

//全局变量与局部变量
#if 1    //该代码为当在一个文件中写入多个独立代码时，为开关作用，0为关闭，1为启用

int age = 25;    //定义年龄中的全局变量

int main()    //函数入口
{
    //原理:当全局变量中的名称与局部变量名称冲突时，局部变量的优先级高于全局变量
    int age = 20;    //定义年龄中的局部变量
    age = age + 1;    //局部变量年龄加1
    printf("%d \n", age);    //打印局部变量年龄结果（printf为输出，输出已有的数值）
    return 0;
}

#endif    //表示开关的结尾

//变量的初始化。代码效果，编译后，输入两个数字并相加，按回车，得出加后结果
#if 0
int main()
{
    int a = 0;
    int d = 0;
    int sum = 30;
    scanf("%d %d", &a, &d);    //scanf为输入，将编译后输入的两个数字，存储到a和d两个变量中，已实现a、d的加法
    sum = a + d;    //定义sum（数字）为a+d
    printf("sum = %d\n", sum);    //打印sum（数字）到屏幕上
    return 0;    //如程序正常运行，返回值为0，表示程序正常结束，同时为程序的结尾
}
#endif