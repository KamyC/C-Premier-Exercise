/*
Exercise
7.5:
��дһ���������ú������������βΣ��ֱ�Ϊ int �ͺ�
ָ�� int �͵�ָ�룬������������ int ֵ֮�нϴ����
ֵ������Ӧ����ָ���βζ���Ϊʲô���ͣ�
*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
int bigger(int a, const int &b){
	return a > b ? a : b;
}
int main(){
	cout << bigger(2, 4) << endl;
	return 0;
}