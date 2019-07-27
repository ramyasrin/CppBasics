#include<iostream>

using namespace std;

class copyconstructor {

	int m_a, m_b;
public:
	copyconstructor()
	{
		m_a = 10;
		m_b = 10;
	}
	copyconstructor(const copyconstructor &cc)
	{
		if (this != &cc)
		{
			m_a = cc.m_a;
			m_b = cc.m_b;
		}
	}
	copyconstructor & operator=(const copyconstructor &cc)
	{
		if (this != &cc)
		{
			m_a = cc.m_a;
			m_b = cc.m_b;
		}
	}
	void set(int a, int b)
	{
		m_a = a;
		m_b = b;
	}
	int add()
	{
		return m_a + m_b;
    }
	void swap()
	{
		int temp;
		temp = m_a;
		m_a = m_b;
		m_b = temp;

    }
	void show()
	{
		cout << "m_a="<<m_a<<"		"<<"m_b="<<m_b<<endl;
	}
};
int main()
{
	copyconstructor obj1;
	copyconstructor obj2(obj1);
	int a, b;
	cin >> a >> b;
	obj1.set(a, b);
	obj1.show();
	obj1.swap();
	obj1.show();
	cout << obj1.add()<<endl;
	system("pause");
	return 0;
}