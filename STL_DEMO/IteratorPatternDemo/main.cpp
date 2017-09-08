#include <iostream>
#include "aggregate.h"
#include "iterator.h"
using namespace std;

int main()
{
	Aggregate *ag = new ConcreteAggregate();   //定义一个具体的聚合类性，由ag指向
	Iterator *it = new ConcreteIterator(ag);  //定义迭代器it 操作ag指向的聚合类性数据
	for (; !(it->is_done()); it->next())
	{
		cout << it->current_item() << endl;
	}
	system("pause");
	return 0;
}