#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
/*
Exercise 7.28:
��д������ʹ���ڵ�һ�ε���ʱ���� 0��Ȼ���ٴε���ʱ
��˳��������������������䵱ǰ�ĵ��ô�������
*/
int callCnt(int &i){
	return ++i;
}
int main(){
	int i = 0;
	cout << callCnt(i) << endl;
	cout << callCnt(i) << endl;
	return 0;
}