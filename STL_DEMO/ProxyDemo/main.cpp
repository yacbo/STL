#include <iostream>
#include "proxy.h"
using namespace std;
int main()
{
	Subject *sub = new ConcreteSubject();
	Proxy *p = new Proxy(sub);     //�����������
	p->request();                  //ͨ���������������Ҫ�Ĳ���
	system("pause");
	return 0;
}