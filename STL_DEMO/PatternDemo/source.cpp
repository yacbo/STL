#include <iostream>
using namespace std;

//单例
//单例模式
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

Singleton::Singleton()  //定义构造函数
{
	var = 20;
	cout << "Single constructor!" << endl;
}

Singleton:: ~Singleton()  //定义析构函数
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

int Singleton::get_var()  //定义get_var()成员函数
{
	return var;
}

void Singleton::set_var(int n)  //定义set_var()成员函数
{
	var = n;
}

int main()
{
	Singleton *p1 = Singleton::get_instance();  //第一次调用get_instance()时创建对象，对象地址记录在p1中

	Singleton *p2 = Singleton::get_instance();  //第二次调用get_instance()时创建对象，对象地址记录在p2中

	cout <<"p1 var = "<< p1->get_var() << endl;
	cout << "p2 var = " << p2->get_var() << endl;
	p1->set_var(5);
	cout << "p1 var = " << p1->get_var() << endl;
	cout << "p2 var = " << p2->get_var() << endl;
}


