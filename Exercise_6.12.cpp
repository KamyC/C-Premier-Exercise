#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
/*
Exercise
6.12:
��дһ��С���򣬴ӱ�׼�������һϵ�� string ����
Ѱ�������ظ����ֵĵ��ʡ�����Ӧ���ҳ���������������
���ʵ�����λ�ã��õ��ʵĺ���������ٴγ����Լ���
�������ظ��������ĵ��ʼ����ظ�����������ظ���
�������ֵ����û�е����ظ������˵����Ϣ�����磬��
�������ǣ�
how, now now now brown cow cow
�����Ӧ������now��������ʳ��������Ρ�
*/
int check(vector<string> str){
	int sum = 1;
	int max = 1;
	vector<string>::size_type i = 1;
	while (i<str.size())
	{
		if (str[i] == str[i - 1]){
			sum += 1;
			i++;
			cout << "==" << endl;
		}
		else if (str[i] != str[i - 1]){
			max = max<sum ? sum : max;
			i++;
			sum = 1;
			cout << "!=" << endl;
		}
	}
	return sum>max ? sum : max;
}
int main(){
	string str;
	vector<string> str_array;
	vector<string>::size_type i = 0;
	do{
		cin >> str;
		str_array.push_back(str);
		i++;
	} while (cin.get() != '\n');
	cout<<check(str_array)<<endl;
	return 0;
}