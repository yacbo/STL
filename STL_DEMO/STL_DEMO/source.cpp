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

using namespace std;

typedef list<int> LISTINT;
typedef list<char> TISTCHAR;

template<typename T>
void print(list<T> mylist)
{
	list<T>::iterator it;
	for (it = mylist.begin(); it != mylist.end(); it++)
	{
		cout << *it << "";
	}
	cout << endl;
}

//输出map容器元素
void printm(map<char, double> mymap)
{
	pair<char, double> p;  //创建pair对象，map中元素是成对的
	map<char, double>::iterator it;
	for (it = mymap.begin(); it != mymap.end(); it++)
	{
		p = (pair<char, double>)*it;
		cout << p.first << "->" << p.second << endl;
	}
}

//输出multimap容器元素
void printmt(multimap<int, string> mymul)
{
	pair<int, string> p;  //创建pair对象，map中元素是成对的
	multimap<int, string>::iterator it;
	for (it = mymul.begin(); it != mymul.end(); it++)
	{
		p = (pair<int, string>)*it;
		cout << p.first << "->" << p.second.c_str() << endl;
	}
}

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
	vecstr.push_back("apple");
	vecstr.push_back("orange");
	vecstr.push_back("banana");
	vecstr.push_back(str);
	vecstr.insert(vecstr.begin(),"watermelon");
	vector<string>::iterator iter;
	for (iter = vecstr.begin(); iter != vecstr.end(); ++iter)
	{
	string str = *iter;
	cout << str.c_str() << endl;
	}
	*/

	/*
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
	*/

	/*
	list<int> It1,It2;
	for (int i = 0; i < 6; i++)
	{
	It1.push_back(i + 1);
	}

	for (int i = 2; i < 7; i++)
	{
	It2.push_back(i+2);
	}
	It1.splice(It1.end(),It2);  //在lt1的后面跟上It2
	print(It1);
	cout << "..................." << endl;
	*/

	/*
	set<int, greater<int>> s;
	multiset<char> ms;
	cout << s.max_size() << endl;
	cout << ms.max_size() << endl;
	pair<set<int>::iterator, bool> ps;
	ps = s.insert(12);
	if (ps.second == true)
		cout << "Insert success !" << endl;
	s.insert(12);

	//像ms中插入元素
	ms.insert('a');
	ms.insert('b');
	ms.insert('a');
	ms.insert('c');
	ms.insert('a');

	set<int>::iterator its;
	for (its = s.begin(); its != s.end(); its++)
	{
		cout << *its << endl;
	}

	multiset<char>::iterator itms;
	for (itms = ms.begin(); itms != ms.end(); itms++)
	{
		cout << *itms << endl;
	}
	*/
	
	map<char, double> m;
	//向容器m中插入元素
	m['a'] = 1.2;
	m['b'] = 2.4;
	m['c'] = 3.6;
	m['d'] = 4.8;
	m['e'] = 6.0;
	m['f'] = 1.2;
	cout << "map" << endl;
	printm(m);

	multimap<int, string> mt;
	mt.insert(pair<int,string>(1,"chun"));
	mt.insert(make_pair(2, "xia"));
	mt.insert(multimap<int, string>::value_type(3, "qiu"));
	mt.insert(multimap<int, string>::value_type(4, "dong"));
	cout << "multimap" << endl;
	printmt(mt);

	pair<int, string> p;
	p = (pair<int, string>)*(--mt.end());
	cout << p.first << "->" << p.second.c_str() << endl;
	system("pause");
	return 0;
}