#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
using namespace std;
/*
Exercise 9.18:
��д���� int �͵� list ����������Ԫ�ظ��Ƶ�����
deque �����С�list ������Ԫ�����Ϊż�������Ƶ�
һ�� deque �����У����Ϊ���������Ƶ���һ�� deque
�����
*/
int main(){
	list<int> ilist = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	deque<int> aDeque;//store the odd
	deque<int> bDeque;//store the even
	for (list<int>::iterator i = ilist.begin(); i != ilist.end(); i++){
		if ((*i) % 2 != 0){
			aDeque.push_back(*i);
		}
		else {
			bDeque.push_back(*i);
		}
	}
	return 0;
}