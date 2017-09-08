#ifndef FACTORY_H
#define FACTORY_H

class AbstractProduct;

class AbstractFactory{   //������󹤳���
	public:
		virtual ~AbstractFactory();
		virtual AbstractProduct *create_product(int) = 0;
	protected:
		AbstractFactory();
};

class Factory :public AbstractFactory   //����򵥹����࣬�����Գ��󹤳���
{
	public:
		~Factory();
		Factory();
		AbstractProduct *create_product(int);  //���ݲ��������ɲ�ͬ��Ʒ
};
#endif