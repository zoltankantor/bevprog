#include "std_lib_facilities.h"

vector<int> gv = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(const vector<int> vektor)
{
	vector<int> lv; //ha még egyszer megadok zárójelben egy számot valaki törje el a kezem, köszönöm

	for (int i = 0; i < 10; ++i) //initializing
	{
		lv.push_back(vektor[i]);
	}

	cout << "lv vector's elements:\n";
	for (int i = 0; i < 10; ++i) //printing
	{
		cout << lv[i] << ' ';
	}
	cout << '\n';

	vector<int> lv2;

	for (int i = 0; i < 10; ++i) //initializing
	{
		lv2.push_back(lv[i]);
	}

	cout << "lv2 vector's elements:\n";
	for (int i = 0; i < 10; ++i) //printing
	{
		cout << lv2[i] << ' ';
	}
	cout << '\n';	
}

int main()
{
	f(gv);

	vector<int> vv = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};

	f(vv);

	return 0;
}