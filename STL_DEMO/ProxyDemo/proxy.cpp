#include <iostream>
#include "proxy.h"
using namespace std;

Subject::Subject()
{}

Subject::~Subject()
{}

ConcreteSubject::ConcreteSubject()
{}

ConcreteSubject::~ConcreteSubject()
{}

void ConcreteSubject::request()
{
	cout << "ConcreteSubject request!" << endl;
}

Proxy::Proxy()
{}

Proxy::Proxy(Subject *sub)
{
	m_sub = sub;
}

Proxy::~Proxy()
{}

void Proxy::request()
{
	cout << "Proxy request!" << endl;
	m_sub->request();
}