#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
using namespace std;
/*
Exercise
9.4:
����һ�� list �������洢 deque �������Ԫ�أ���
deque ������ int ��Ԫ�ء�
*/
int main(){
	deque<int> ideque = { 1, 2, 3, 4, 5 };
	list<int> ilist;
	for (deque<int>::size_type i = 0; i != ideque.size(); i++){
		ilist.push_back(ideque[i]);
	}
	return 0;
}