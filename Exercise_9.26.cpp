#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
using namespace std;
/*
Exercise 9.26:
���������� ia �Ķ��壬�� ia ���Ƶ�һ�� vector ����
��һ�� list �����С�ʹ�õ��������������汾�� erase
������ list �����е�����ֵԪ��ɾ������Ȼ��
vector �����е�ż��ֵԪ��ɾ������
int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55,
89 };
*/ 
int main(){
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	size_t size = (sizeof(ia) / sizeof(int));
	vector<int> ivec(ia,ia+size);
	list<int> ilist(ia,ia+size);
	for (vector<int>::iterator i = ivec.begin(); i != ivec.end();){
		if ((*i) % 2 == 0){
			i=ivec.erase(i);
			continue;
		};
		i++;
	};
	for (list<int>::iterator i = ilist.begin(); i != ilist.end(); i++){
		if (*i % 2 != 0){
			i=ilist.erase(i);
			--i;
		}
	}
	return 0;
}