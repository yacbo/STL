#include <iostream>
#include "proxy.h"
using namespace std;
int main()
{
	Subject *sub = new ConcreteSubject();
	Proxy *p = new Proxy(sub);     //定义代理对象
	p->request();                  //通过代理完成主体需要的操作
	system("pause");
	return 0;
}