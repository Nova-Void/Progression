#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>        //Ԥ�����ļ�

int main()    //�������
{
	//printf���ڴ�ӡ��������Ļ ��%dΪ������100ΪҪ��ӡ�����֣�
	//sizeof -�ؼ��� -������ ���ڲ鿴�������ͻ������ռ�ڴ��С����λΪ�ֽ�
	printf("%d \n", 100);    //��ӡ����Ϊ100
	printf("%d \n", sizeof(char));     //�ַ��ͣ�1��
	printf("%d \n", sizeof(short));     //�̾����ͣ�2��
	printf("%d \n", sizeof(int));       //���ͣ�4��
	printf("%d \n", sizeof(long));                 //�����ͣ�4��
	printf("%d \n", sizeof(long long));            //���������ͣ�8��
	printf("%d \n", sizeof(float));                //�����ȸ����ͣ�4��
	printf("%d\n", sizeof(double));                //˫���ȸ����ͣ�8��
	printf("%d \n", sizeof(long double));          //������˫���ȸ����ͣ�8��

	return 0;   //�������˳����򣬷���0
}