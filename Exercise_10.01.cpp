#include<iostream>
#include<utility>
#include<vector>
#include<string>
using namespace std;
/*
Exercise
10.1:
��д�������һϵ�� string �� int �����ݣ���ÿһ��
�洢��һ�� pair �����У�Ȼ����Щ pair ����洢
�� vector �����
*/
typedef pair<string, int> Author;

int main(){

	vector<pair<string, int> > ivec;
	string name;
	int age;
	do{
		cin >> name >> age;
		ivec.push_back(Author(name, age));
	} while (cin.get() != '\n');
	vector<pair<string, int> >::iterator iter = ivec.begin();
	iter += 1;
	cout << (*iter).first << endl;
	return 0;
}