#include<iostream>
using namespace std;

/*Vint division(int a, int b)
{
	if (b == 0) throw "divisian by zero";
	return a / b;
}

int main()
{
	try {
		cout << division(3, 5);
		cout << division(3, 0);
	}
	catch (const char* exept)
	{
		cout << "exept"
	}
	

}
*/

/*class Array
{
	int size;
	int count = 0;
	int* mass = nullptr;
public:
	Array(int size)
	{
		this->size = size;
		mass = new int[size];

	}

	void add(int i)
	{
		if (count >= size) throw overflow_error("error");
		else
		{
			mass[count++] = i;
		}
		
	}
	void show()
	{

		for (int i = 0; i < size; i++)
		{
			cout << mass[i] << " ";
		}
	}

	void del()
	{
		if (count == 0) throw out_of_range("error");
		else count--;
	}
};

int main()
{
	int out = 0;
	int empty = 0;
	Array m1(3);
	try
	{
		m1.add(5);
		m1.add(1);
		m1.add(2);
		m1.add(8);
		m1.del();
		m1.del();
		m1.del();
		m1.del();
	}
	catch (out_of_range& ex)
	{
		cout << ex.what();
		cout << typeid(ex).name();
	}
	catch (overflow_error& ex)
	{

		cout << ex.what();
		cout << typeid(ex).name();
	}


	cout << endl << "out: " << out << endl << "empty: " << empty << endl;

}*/

int str_to_int(string st)
{
	int n = 0;
	for (int i = 0; i < st.size(); i++)
	{
		if (st[i] > 57 or st[i] < 48) throw out_of_range("out of range");
	}
	for (int i = 0; i < st.size(); i++)
	{
		n *= 10;
		n += st[i] - '0';
	}
	if (n > 2147483647) throw out_of_range("out of range");
	if (n < -2147483648) throw out_of_range("out of range");
	return n;
}

int main()
{
	
	try
	{
		string st;
		cin >> st;
		cout << str_to_int(st);
	}
	catch (out_of_range& ex)
	{
		cout << typeid(ex).name() << endl;
	}
}