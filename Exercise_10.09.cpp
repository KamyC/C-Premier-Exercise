#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<utility>
using namespace std;
/*
Exercise 10.9:
��д����ͳ�Ʋ����������ĵ��ʳ��ֵĴ�����
*/

int main(){
	map<string, int> cntMap;
	string input;
	do{
		cin >> input;
		++cntMap[input];
	} while (cin.get() != '\n');
	string searchWord;
	cin >> searchWord;
	cout << cntMap[searchWord] << endl;
	return 0;
}