#ifndef AGGREGATE_H
#define AGGREGATE_H

typedef int Object;
class Iterator;
class Aggregate{           //定义抽象聚合类
	public:
		virtual ~Aggregate();
		virtual Iterator *create_iterator() = 0;
		virtual Object get_item(int idx) = 0;
		virtual int get_size() = 0;
	protected:
		Aggregate();
};

//定义抽象聚合类的派生类，表示具体的某个聚合类性
class ConcreteAggregate:public Aggregate   
{
	public:
		enum{SIZE = 5};
		ConcreteAggregate();
		~ConcreteAggregate();
		Iterator *create_iterator();
		Object get_item(int idx);
		int get_size();
	private:
		Object m_objs[SIZE];
};
#endif