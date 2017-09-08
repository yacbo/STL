#ifndef PROXY_H
#define PROXY_H

class Subject{          //�������������
	public:
		virtual ~Subject();
		virtual void request() = 0;
	protected:
		Subject();
};

class ConcreteSubject :public Subject{    //�������������������࣬����һ�����������
	public:
		ConcreteSubject();
		~ConcreteSubject();
		void request();
};

class Proxy :public Subject{      //���������
	public:
		Proxy();
		Proxy(Subject *sub);
		~Proxy();
		void request();
	private:
		Subject *m_sub;
};

#endif