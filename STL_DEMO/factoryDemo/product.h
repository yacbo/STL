#ifndef PRODUCT_H
#define PRODUCT_H

class AbstractProduct		//定义抽象产品类，提供产品操作接口
{
	public:
		virtual ~AbstractProduct();
		virtual void operation() = 0;
	protected:
		AbstractProduct();
};


class Product1 :public AbstractProduct{			//定义类Product1，派生自抽象产品类
public:
	~Product1();
	Product1();
	void operation();  //定义属于本产品的操作函数
};


class Product2 :public AbstractProduct{		//定义类Product2，派生自抽象产品类
	public:
		~Product2();
		Product2();
		void operation();
};
#endif