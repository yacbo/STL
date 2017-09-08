#include <iostream>
#include "aggregate.h"
#include "iterator.h"
using namespace std;

int main()
{
	Aggregate *ag = new ConcreteAggregate();   //����һ������ľۺ����ԣ���agָ��
	Iterator *it = new ConcreteIterator(ag);  //���������it ����agָ��ľۺ���������
	for (; !(it->is_done()); it->next())
	{
		cout << it->current_item() << endl;
	}
	system("pause");
	return 0;
}