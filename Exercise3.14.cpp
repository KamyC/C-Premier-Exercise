#include<iostream>
#include<stdio.h>
/*exercise 3.14:
����һ���ı��� vector ����ÿ�����ʴ洢Ϊ vector�е�һ��Ԫ�ء��� vector ������ÿ������ת��Ϊ��д��
ĸ����� vector ������ת�����Ԫ�أ�ÿ�˸�����Ϊһ�����
*/
#include<string>
#include<vector>

using namespace std;

int main(){
	vector<string> vec;
	string str;
	do {
		cin >> str;
		vec.push_back(str);
	} while (cin.get() != '\n');
	vector<string>::size_type a = vec.size();
	std::cout << a << endl;
	int i = 0;
	while (i < a){
		for (int j = 0; j < vec[i].size(); j++){
			if (vec[i][j] > 96){
				vec[i][j] -= 32;
			}	
		}
		i++;
	}
	for (int n = 0; n < a;n++){
		std::cout << vec[n]<<" ";
	}

}