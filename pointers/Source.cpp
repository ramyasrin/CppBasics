#include<iostream>

using namespace std;

class pointer
{
	int *a;
	int *b;
public:
	pointer()
	{
		a = new int;
		b = new int;
	}
	pointer(const pointer &obj)
	{

	}
	void set(int x, int y)
	{
		*a = x;
		*b = y;
    }
	int get_a()
	{
		return *a;
	}
	int get_b()
	{
		return *b;
	}
	int *get_address_a()
	{
		return a;
	}
	int *get_address_b()
	{
		return b;
	}
	void show()
	{
		cout << "*a=" << *a << "	" << "*b=" << *b << endl;
		cout << "a=" << a << "	" << "b=" << b << endl;
		cout << "&a=" << &a << "	" << "&b=" << &b << endl;

	}
	int add()
	{
		return *a + *b;
	}
	void swap()
	{
		int *temp = a;
		a = b;
		b = temp;
    }
	~pointer()
	{
		delete a;
		delete b;
	}
};
int main()
{
	int *a1, *b1;
	//cin >> a1 >> b1;
	pointer ptr;
	a1=ptr.get_address_a();
	b1=ptr.get_address_b();
	*a1 = 50;
	*b1 = 100;
	//ptr.set(a1, b1);
	ptr.show();
	cout << ptr.add() << endl;
	ptr.swap();
	ptr.show();
	cout << ptr.add() << endl;
	system("pause");
	return 0;
}