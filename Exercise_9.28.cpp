#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
using namespace std;
/*
Exercise 9.28:
��д����һ�� list ����������Ԫ�ظ�ֵ��һ��
vector ���������� list �����д洢����ָ�� C �����
������ char* ָ�룬�� vector ������Ԫ������ string
���͡�
*/
int main(){
	list<char*> ilist = { "a", "b", "c", "d" };
	vector<string> ivec;
	ivec.assign(ilist.begin(),ilist.end());
	cout << ivec[0] << endl;
	return 0;
}