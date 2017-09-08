#ifndef AGGREGATE_H
#define AGGREGATE_H

typedef int Object;
class Iterator;
class Aggregate{           //�������ۺ���
	public:
		virtual ~Aggregate();
		virtual Iterator *create_iterator() = 0;
		virtual Object get_item(int idx) = 0;
		virtual int get_size() = 0;
	protected:
		Aggregate();
};

//�������ۺ���������࣬��ʾ�����ĳ���ۺ�����
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