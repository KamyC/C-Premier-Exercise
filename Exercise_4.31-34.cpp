#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

int main(){
	/*
	Exercise 4.31:
	��д����ӱ�׼�����豸�����ַ��������Ѹô��������
	�������С�������ĳ�����δ���ɱ䳤�����롣�ṩ��
	���������鳤�ȳ����ַ������ݲ�����ĳ���
	*/
	string str;
	cin >> str;
	size_t char_length = 10;
	if (str.length() > char_length){
		char_length = str.length();
		char *p = new char[char_length];
		for (string::size_type i = 0; i != str.length(); i++){
			*p = str[i];
			p++;
		}
		p--; 
		cout << *p << endl;
	}
	else{
		char *p = new char[char_length];
		for (int i = 0; i != str.length(); i++){
			*p = str[i];
			p++;
		}
		p--;
		cout << *p << endl;
}
		/*
		Exercise 4.32:
		��д������ int �������ʼ�� vector ����
		*/	
		const size_t arr_size = 10;
		int arr[arr_size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		vector<int> vec(arr, arr + arr_size);//�������ʼ��vector
		cout << vec[0] << endl;
		/*
		Exercise 4.33:
		��д����� int �� vector ���Ƹ� int �����顣*/
		vector<int>vec_2 = { 1, 2, 3, 4, 5, 6 };
		int *pInt=new int[vec_2.size()];
		for (vector<int>::size_type i = 0; i != vec_2.size(); i++){
			 *pInt= vec_2[i];
			 pInt++;
		}
		cout << *(--pInt) << endl;
		/*
		Exercise 4.34:
		��д�������һ�� string ���͵����ݣ��������Ǵ洢��
		vector �С����ţ��Ѹ� vector �����Ƹ�һ���ַ�ָ
		�����顣Ϊ vector �е�ÿ��Ԫ�ش���һ���µ��ַ���
		�飬���Ѹ� vector Ԫ�ص����ݸ��Ƶ���Ӧ���ַ�����
		�У�����ָ��������ָ������ַ�ָ�����顣
		*/
		string str_2;
		vector<string> vec_str;
		do{
			cin >> str_2;
			vec_str.push_back(str_2);
		} while (cin.get()!='\n');
		char *pp=new char[];
		int count = 0;
		for (vector<int>::size_type i = 0; i != vec_str.size(); i++){
			for (size_t j = 0; j != vec_str[i].size(); j++){
				*pp = vec_str[i][j];
				pp++;
				count++;
			}
		}
		pp -= count;
		cout << *pp << endl;
		return 0;
	
}