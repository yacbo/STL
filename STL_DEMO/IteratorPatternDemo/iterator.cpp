#include <iostream>
#include "aggregate.h"
#include "iterator.h"
using namespace std;

Iterator::Iterator()
{}

Iterator::~Iterator()
{}

ConcreteIterator::ConcreteIterator(Aggregate *ag,int idx)
{
	m_ag = ag;
	m_idx = idx;
}

ConcreteIterator::~ConcreteIterator()   //定义具体迭代器的析构函数
{}

Object ConcreteIterator::current_item()
{
	return m_ag->get_item(m_idx);
}
void ConcreteIterator::first()
{
	m_idx = 0;
}

void ConcreteIterator::next()
{
	if (m_idx < m_ag->get_size())
		m_idx++;
}

bool ConcreteIterator::is_done()
{
	return (m_idx == m_ag->get_size());
}