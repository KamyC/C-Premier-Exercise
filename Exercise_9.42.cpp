#include<iostream>
#include<string>
#include<vector>
#include <stack> 
#include <queue>
using namespace std;
/*
Exercise 9.42:
��д�������һϵ�е��ʣ��������Ǵ洢�� stack ����
�С�
*/
int main(){
	stack<char> cStack;
	do{
		char a;
		cin >> a;
		cStack.push(a);
	} while (cin.get() != '\n');
	cout << cStack.top() << endl;
	return 0;
}