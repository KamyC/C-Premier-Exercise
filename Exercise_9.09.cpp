#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
using namespace std;
/*
Exercise
9.9:��дһ��ѭ���� list ������Ԫ�����������
*/

int main(){
	list<int> ilist = { 1, 2, 3, 4, 5, 6, 7 };
	list<int>::iterator i = ilist.end();
	while (i!= ilist.begin()){
		cout << *(--i) << endl;
	}
	return 0;
}