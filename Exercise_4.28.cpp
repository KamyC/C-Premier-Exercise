/*
Exercise 4.28:
��д�����ɴӱ�׼�����豸�����Ԫ�����ݽ���һ��
int �� vector ����Ȼ��̬����һ����� vector ��
���Сһ�µ����飬�� vector ���������Ԫ�ظ��Ƹ���
���顣
*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

int main(){
	vector<int> vec = { 1, 2, 3, 4, 5 };
	int *p = new int[5];
	for (vector<int>::size_type i = 0; i != vec.size(); i++){
		*p = vec[i];
		++p;
	};
	p -= vec.size();//point back to the beginning
	
	delete[] p;
	return 0;
}