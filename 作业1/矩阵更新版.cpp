#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	const int A = 2; const int B = 3;
	int sum = 0;
	int a[A][B] = { 1,2,3,4,5,6 };//����һ���������е�����
	int b[A][B] = { 1,2,3,4,5,6 };//����һ���������е�����
	int c[B][A] = { 0 };
	int d[B][B] = { 0 };
	
	cout << "����1Ϊ" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			cout << "\t" << a[i][j];
		}
		cout << "\n";//��ӡ����1
	}
	cout << "����2Ϊ" << endl;
	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < B; j++) 
		{
			cout << "\t" << b[i][j];
		}
		cout << "\n";//��ӡ����2
	}
	cout << "��ô����1������2��ֵΪ" << endl;
	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < B; j++)
		{
			cout << "\t" << a[i][j] * b[i][j];//��ӡ��˽��
		}
		cout << "\n";
	}
	cout << "����1ת�ú�" << endl;
	for (int i = 0; i < B; i++)
	{
		for (int j = 0; j < A; j++)
		{
			c[i][j] = a[j][i];//����ת��aתc
		}
	}
	for (int i = 0; i < B; i++) {
		for (int j = 0; j < A; j++) {
			cout <<"\t" << c[i][j];
		}
		cout << endl;
	}
	cout << "��ô����1������2��ֵΪ" << endl;
	for (int k = 0; k < B; k++) 
	{
		for (int i = 0; i < B; i++) 
		{
			for (int j = 0; j < A; j++) 
			{
				d[k][i] += c[k][j] * b[j][i];
			}
		}
	}//����ѭ�����������
	for (int k = 0; k < B; k++) 
	{
		cout << endl;
		for (int i = 0; i < B; i++)
		{
			cout << "\t" << d[k][i];
		}
	}
	
	system("pause");
	return 0;
}