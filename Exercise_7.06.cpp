#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
/*
Exercise 7.6:
��д������������ int ��ָ����ָ���ֵ�����ò�����
�ú���������������ֵ��
*/
void swap(int *&a, int *&b){
	int *temp = b;
	b = a;
	a = temp;
}
int main(){
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << a << " " << b << endl;
	return 0;
}