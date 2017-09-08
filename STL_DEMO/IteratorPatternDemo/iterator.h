#ifndef ITERATOR_H
#define ITERATOR_H

class  Aggregate;
typedef int Object;
class Iterator        //定义抽象迭代器
{
	public:
		virtual ~Iterator();
		virtual void first() = 0;
		virtual void next() = 0;
		virtual bool is_done() = 0;
		virtual Object current_item() = 0;
	protected:
		Iterator();
};

class ConcreteIterator :public Iterator    //定义抽象迭代器的派生类
{
	public:
		ConcreteIterator(Aggregate *ag, int idx = 0);
		~ConcreteIterator();
		void first();
		void next();
		bool is_done();
		Object current_item();
	private:
		Aggregate *m_ag;
		int m_idx;
};

#endif