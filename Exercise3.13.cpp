/*exercise 3.13:
��һ�������� vector ���󣬼��㲢���ÿ������Ԫ�صĺ͡��������Ԫ�ظ���Ϊ����������ʾ�û����һ��Ԫ��
û����ͣ��������ֵ��Ȼ���޸ĳ���ͷβԪ��������ԣ���һ�������һ�����ڶ����͵����ڶ������Դ����ƣ���
����ÿ��Ԫ�صĺͣ��������
*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

int main(){
	vector<int> vec;
	int i;
	while (cin >> i){
		vec.push_back(i);
	}
	int n =1;
	cout << vec.size() << endl;
	if (vec.size() % 2 != 0){
		while (n < vec.size()){
			cout << vec[n]+vec[n-1]<< endl;
			n += 2;
		}
		cout << "���һ��Ԫ��û�����" << endl;

	}
	else{
		while (n < vec.size()){
			cout << vec[n] + vec[n - 1] << endl;
			n += 2;
		}
	}
	int low = 0;
	int high = vec.size()-1;
	if (vec.size() % 2 != 0){
		while (low<high)
		{
			cout << vec[low] + vec[high] << endl;
			low++;
			high--;
		}
		cout << vec[(high + 2) / 2] << endl;
	}
	else{
		while (low<high)
		{
			cout << vec[low] + vec[high] << endl;
			low++;
			high--;
		}
	}

	 
	return 0;
	
}
	
