#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0         //���Ϊ�棨1���������˶δ��룬��֮������
//ѡ�������
int main()
{
	int sum = 0;   //����sumΪ0

	printf("�������һ�Σ��������ѡ����\n");          //��ӡ���
	printf("1.��,0.����\n");
	scanf("%d", &sum);                //Ϊsum��ֵ
	if (sum == 1)                 // ���sum����1
		printf("ף��ɹ�������Ŭ��\n");                //��ӡ���
	else if (sum == 0)                              //�������sum����0
		printf("���Ŀ���Ҳ�Ǻ���Ҫ��\n");             //��ӡ���
	else                                //����
		printf("�������󣬵����Ҫ����\n");            //��ӡ���

}
#endif       //�������

//�����������ֵĺ�
#if 0

int main()
{
	//��������
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);       //���뺯�� 

	sum = a + b;
	printf("%d \n", sum);          //��ӡsum
	return 0;



}
#endif

//���ú����������������ֵĺ�
#if 0

int cad(int x, int y)  //���庯��
{
	int z = 0;           //�������zΪ0
	z = x + y;          //����x+y��ֵ����z
	return z;          //����z��ֵ
}
int main()
{
	int a = 0;            //�������aΪ0
	int b = 0;
	scanf("%d%d", &a, &b);          //���뺯��
	int sum = cad(a, b);        //���ú���
	printf("%d\n", sum);         //��ӡsum
	return 0;                   //����0����ʾ����
}
#endif


//�����ʹ��
//10 20 30 40 50 60 70 80 90 100���±�����Ϊ0 1 2 3 4 5 6 7 8 9��
#if 0
int main()
{
	int sum[10] = { 10,20,30,40,50,60,70,80,90,100 };           //������������Ϊsum������10��Ԫ�ص���{10,20,30,40,50,60,70,80,90,100}
	int o = 0;                              //����oΪ0
	while (o < 10)                //��oС��10ʱ����ʼѭ��
	{

		printf("%d", sum[o]);              //��ӡ����sum�����±�Ϊo��ֵ

		o++;                        //ÿ��ѭ��o��1
	}

	return 0;                //����0����ʾ����


}
#endif                