#include<iostream>
#include<windows.h>
using namespace std;
int main() {
	int sum=0;
	int a[2][3] = { 1,2,3,4,5,6 };//����һ���������е�����
	int b[2][3] = { 1,2,3,4,5,6 };//����һ���������е�����
	int c[3][2] = { 0 };
	cout << "����1Ϊ" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "\t" << a[i][j];
		}
		cout << "\n";//��ӡ����1
	}
	cout << "����2Ϊ" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "\t" << b[i][j];
		}
		cout << "\n";//��ӡ����2
	}
	cout << "��ô����1������2��ֵΪ" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "\t" << a[i][j] * b[i][j];//��ӡ��˽��
		}
		cout << "\n";
	}
	cout << "����1ת�ú�" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			c[i][j] = a[j][i];//����ת��aתc
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << c[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "��ô����1������2��ֵΪ" << endl;
	for (int k = 0; k < 3; k++) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 2; j++) {
				;
				sum += c[k][j] * b[j][i];
			}
			cout << sum << "\t"; sum = 0;
		}
		cout << "\n";
	}//����ѭ�����������
	system("pause");
	return 0;
}