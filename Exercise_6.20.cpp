#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
/*
Exercise
6.20:
��д����ӱ�׼�������һϵ�� string ����ֱ��ͬһ
�����������������Σ��������еĵ��ʶ��Ѷ��꣬�Ž���
��ȡ����ʹ�� while ѭ����ÿ��ѭ������һ�����ʡ���
������������ͬ�ĵ��ʣ����� break ������ѭ������
ʱ�����������ظ����ֵĵ��ʣ��������û���κε���
�����ظ����ֵ���Ϣ��
*/
string check(vector<string> str_array){
	vector<string>::size_type i = 1;
	while (i != str_array.size()){
		if (str_array[i] == str_array[i - 1]){
			return str_array[i];
			break;
		}
		else{
			i++;
		}
	}
	return "No Repeated Words";
}
int main(){
	vector<string> str_array = { "now", "know", "co", "cow", "know", "now" };
	cout << check(str_array) << endl;
	return 0;
}