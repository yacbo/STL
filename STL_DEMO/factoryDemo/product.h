#ifndef PRODUCT_H
#define PRODUCT_H

class AbstractProduct		//��������Ʒ�࣬�ṩ��Ʒ�����ӿ�
{
	public:
		virtual ~AbstractProduct();
		virtual void operation() = 0;
	protected:
		AbstractProduct();
};


class Product1 :public AbstractProduct{			//������Product1�������Գ����Ʒ��
public:
	~Product1();
	Product1();
	void operation();  //�������ڱ���Ʒ�Ĳ�������
};


class Product2 :public AbstractProduct{		//������Product2�������Գ����Ʒ��
	public:
		~Product2();
		Product2();
		void operation();
};
#endif