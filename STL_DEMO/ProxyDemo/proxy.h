#ifndef PROXY_H
#define PROXY_H

class Subject{          //定义抽象类主体
	public:
		virtual ~Subject();
		virtual void request() = 0;
	protected:
		Subject();
};

class ConcreteSubject :public Subject{    //定义抽象主题类的派生类，描述一个具体的主体
	public:
		ConcreteSubject();
		~ConcreteSubject();
		void request();
};

class Proxy :public Subject{      //定义代理类
	public:
		Proxy();
		Proxy(Subject *sub);
		~Proxy();
		void request();
	private:
		Subject *m_sub;
};

#endif