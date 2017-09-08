#ifndef FACTORY_H
#define FACTORY_H

class AbstractProduct;

class AbstractFactory{   //定义抽象工厂类
	public:
		virtual ~AbstractFactory();
		virtual AbstractProduct *create_product(int) = 0;
	protected:
		AbstractFactory();
};

class Factory :public AbstractFactory   //定义简单工厂类，派生自抽象工厂类
{
	public:
		~Factory();
		Factory();
		AbstractProduct *create_product(int);  //根据参数，生成不同产品
};
#endif