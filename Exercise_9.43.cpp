#include<iostream>
#include<string>
#include<vector>
#include <stack> 
#include <queue>
using namespace std;
/*
Exercise
9.43:
ʹ�� stack �������Բ���ŵı��ʽ��������Բ����
ʱ��������������Ȼ���������Ҽ�����ʱ������ stack
����������������֮������Ԫ�أ�������Բ���ţ���
������ stack ������ѹ��һ��ֵ�����Ա��������һ��
Բ�����������ı��ʽ�Ѿ����滻��
*/

int main(){
	stack<char> charStack;
	string input; cin >> input;
	string::iterator iter = input.begin();
	while (iter != input.end()){
		if (*iter != ')'){//keep recording the input string until meet ")"
			charStack.push(*iter);
		}
		else{//if meets "(", start to pop out values in the stack until meets '(' while the stack is not empty
			while (charStack.top()!='('&&!charStack.empty()){
				charStack.pop();
			}
			if (charStack.empty()){//if after poping the elements, the stack happens to be empty, report the stack is empty
				cout << "stack is empty" << endl;
			}
			else{//if the stack is not empty, the top should be '('. So pop it out and then push # to show this section is replaced
				charStack.pop();
				charStack.push('#');
			}
		}
		iter++;
	}
	while (!charStack.empty()){//check if the code is right
		cout << charStack.top();
		charStack.pop();
	}
	return 0;
}
