#include <iostream>
#include "aggregate.h"
#include "iterator.h"
using namespace std;

Aggregate::Aggregate()
{}

Aggregate::~Aggregate()
{}

ConcreteAggregate::ConcreteAggregate()
{
	for (int i = 0; i < SIZE; i++)
		m_objs[i] = i;
}

ConcreteAggregate::~ConcreteAggregate()
{}

Iterator *ConcreteAggregate::create_iterator()
{
	return new ConcreteIterator(this);
}

Object ConcreteAggregate::get_item(int idx)
{
	if (idx < this->get_size())
		return m_objs[idx];
	return -1;
}

int ConcreteAggregate::get_size()
{
	return SIZE;
}