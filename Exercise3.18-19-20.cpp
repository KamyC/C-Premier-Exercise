#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

int main(){
	vector<int> vec(10, 1);
	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++){
		*i = 0;
	}
	cout << vec[0] << endl;
	//const_interator
	vector<int>::const_iterator it_1 = vec.begin();
	it_1++;//�����ֵ���Ըı�	
	//*it_1 = 10; ���ܸı���ָ��Ԫ�ص�ֵ
	cout << *it_1 << endl;
	//const iterator
	const vector<int>::iterator it_2 = vec.begin();
	*it_2 = 1;//���Ըı�ָ��Ԫ��ֵ
	//it_2++;���ܸı������ֵ
	cout << *it_2 << endl;
	//�޷���cout���it_1��it_2

	/*Exercise 3.18+3.19+3.20
	1. ��д������������ 10 ��Ԫ�ص� vector �����õ�����
	��ÿ��Ԫ��ֵ��Ϊ��ǰֵ�� 2 ����
	2. ��֤ϰ�� 3.18 �ĳ������ vector ������Ԫ��
	3. ����һ�����ϼ���ϰ��ĳ���ʵ�������������ֵ�������
	��˵��ԭ��*/

	vector<int> ivec(10, 1);
	for (vector<int>::iterator i = ivec.begin(); i != ivec.end(); i++){
		*i *= 2;
	}
	//�����ʱ����const_iterator����������Ϊ���������޸�iָ��Ԫ�ص�ֵ
	for (vector<int>::const_iterator i = ivec.begin(); i != ivec.end(); i++){
		cout << *i << " ";
	}

	return 0;
}