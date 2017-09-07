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
	list<int>::iterator it;         //定义一个list迭代器
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
	//用数组给v容器赋值
	v.assign(arr, arr + sizeof(arr) / sizeof(int));

	//1.调用for_each函数将容器中每个元素都乘以2
	for_each(v.begin(), v.end(), Multi<int>(2));
	//调用copy()构造函数将容器中元素输出
	copy(v.begin(), v.end(), ostream_iterator<int>(cout," "));
	cout << endl;
	//2.调用find()算法查找容器中是否存在值为200的元素
	vector<int>::iterator it = find(v.begin(), v.end(), 200);
	if (*it == 200)
		cout << "容器中有值为200的元素";
	else
		cout << "容器中没有值为200的元素";
	cout << endl;
	//3.调用sort()算法将容器中元素从小到大排序
	sort(v.begin(), v.end());
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	//4.累加容器中元素
	int sum = accumulate(v.begin(), v.end(), 0);
	cout << sum << endl;
	*/

	system("pause");
	return 0;
}