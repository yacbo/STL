#include <stdlib.h>   
#include <windows.h>   
#include <conio.h> 
#include <vector>
#include <deque>  
#include <functional> //STL  
#include <algorithm>   //STL
#include <iostream>
#include <list>
#include <numeric>
#include <map>   //STL
#include <set>
#include <functional>
#include <iterator>
using namespace std;

template<typename T>
class Multi
{
private:
	T value;
public :
	Multi(const T& v) :value(v){}
	void operator()(T& elem) const{ elem *= value; }
};

void print(int elem)
{
	cout << elem << "";
}

int main(){

	/*
	list<int> It;
	for (int i = 0; i < 10; i++)
	{
		It.push_back(i);
	}
	list<int>::iterator it;         //����һ��list������
	for (it = It.begin(); it != It.end(); it++)
	{
		cout << *it << endl;
	}

	list<int>::reverse_iterator itr(it);
	for (itr = It.rbegin(); itr != It.rend(); itr++)
	{
		cout << *itr << endl;
	}
	*/
	
	/*
	int arr[] = { 21, 4, 55, 22, 100, 46, 79, 9, 5, 78, 34, 100 };
	vector<int> v;
	//�������v������ֵ
	v.assign(arr, arr + sizeof(arr) / sizeof(int));

	//1.����for_each������������ÿ��Ԫ�ض�����2
	for_each(v.begin(), v.end(), Multi<int>(2));
	//����copy()���캯����������Ԫ�����
	copy(v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;
	//2.����find()�㷨�����������Ƿ����ֵΪ200��Ԫ��
	vector<int>::iterator it = find(v.begin(), v.end(), 200);
	if (*it == 200)
		cout << "��������ֵΪ200��Ԫ��";
	else
		cout << "������û��ֵΪ200��Ԫ��";
	cout << endl;
	//3.����sort()�㷨��������Ԫ�ش�С��������
	sort(v.begin(), v.end());
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	//4.�ۼ�������Ԫ��
	int sum = accumulate(v.begin(), v.end(), 0);
	cout << sum << endl;
	*/

	system("pause");
	return 0;
}