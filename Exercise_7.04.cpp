#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
/*
Exercise 7.4:
��дһ���������������βεľ���ֵ��
*/
double abso(int a){
	cout << "call int" << endl;
	return a > 0 ? a : -a;
}
double abso(const float &a){
	cout << "call float" << endl;
	return a > 0 ? a : -a;
}
double abso(const double &a){
	cout << "call double" << endl;
	return a > 0 ? a : -a;
}

int main(){
	cout << abso(-3.14) << endl;

	return 0;
}