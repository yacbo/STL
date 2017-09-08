#include <iostream>
#include "factory.h"
#include "product.h"
using namespace std;

AbstractFactory::AbstractFactory()
{
}
AbstractFactory::~AbstractFactory()
{
}
Factory::Factory()
{
	cout << "factory constructor!" << endl;
}
Factory::~Factory()
{
}

AbstractProduct *Factory::create_product(int type)   //���ݲ���������ͬ��Ʒ����
{
	switch (type)
	{
		case 1: return new Product1();
		case 2: return new Product2();
		default: return NULL;
	}
}