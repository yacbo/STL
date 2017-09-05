#include <stdlib.h>   
#include <windows.h>   
#include <conio.h>   
#include <map>   //STL
#include <functional> //STL  
#include <algorithm>   //STL
#include <iostream>
#include <list>
#include <numeric>
#include <vector> 
using namespace std;

typedef list<int> LISTINT;
typedef list<char> TISTCHAR;

int main(){

	/*vector<int> vi;  //存放整形的向量
	int a;
	while (true)
	{
		cout << "输入一个整数，按0停止输入：";
		cin >> a;
		if (a == 0)
			break;
		vi.push_back(a);
		vector<int>::iterator iter;
		for (iter = vi.begin(); iter != vi.end(); ++iter)
		{
			cout << *iter << endl;
		}
	}*/

	/*
	string str = "shiyang";
	vector<string> vecstr;  
	vecstr.push_back(str);
	vector<string>::iterator iter;
	for (iter = vecstr.begin(); iter != vecstr.end(); ++iter)
	{
		string str = *iter;
		cout << str.c_str() << endl;
	}
	*/


	LISTINT listOne; //创建一个名为listOne的list对象
	LISTINT::iterator i; //声明迭代器
	LISTINT::reverse_iterator ir; //反向迭代器
	listOne.push_front(2);  // 2
	listOne.push_front(1);  // 1 2

	listOne.push_back(3);   // 1 2 3
	listOne.push_back(4);	// 1 2 3 4
	for (i = listOne.begin(); i != listOne.end(); ++i)
	{
		cout << *i << " ";
	}	
	//使用STL的accumulate算法
	int result = accumulate(listOne.begin(), listOne.end(), 0);
	cout << result << endl;
	system("pause");
	return 0;
}