#include <iostream>
using namespace std;

//����
//����ģʽ
class Singleton
{
	public:
		static Singleton *get_instance();
		int get_var();
		void set_var(int);
	private:
		Singleton();
		virtual ~Singleton();
		static Singleton *instance;
		int var;
};

Singleton::Singleton()  //���幹�캯��
{
	var = 20;
	cout << "Single constructor!" << endl;
}

Singleton:: ~Singleton()  //������������
{
	delete instance;
}

Singleton *Singleton::instance = NULL;

Singleton *Singleton::get_instance()
{
	if (NULL == instance)
	{
		instance = new Singleton();
	}
	return instance;
}

int Singleton::get_var()  //����get_var()��Ա����
{
	return var;
}

void Singleton::set_var(int n)  //����set_var()��Ա����
{
	var = n;
}

int main()
{
	Singleton *p1 = Singleton::get_instance();  //��һ�ε���get_instance()ʱ�������󣬶����ַ��¼��p1��

	Singleton *p2 = Singleton::get_instance();  //�ڶ��ε���get_instance()ʱ�������󣬶����ַ��¼��p2��

	cout <<"p1 var = "<< p1->get_var() << endl;
	cout << "p2 var = " << p2->get_var() << endl;
	p1->set_var(5);
	cout << "p1 var = " << p1->get_var() << endl;
	cout << "p2 var = " << p2->get_var() << endl;
}


