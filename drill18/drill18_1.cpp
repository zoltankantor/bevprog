#include "std_lib_facilities.h"

int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int array[], int n)
{
	int la[n];

	for (int i = 0; i < n; ++i) //copying values
	{
		la[i] = array[i]; //not using ga[i], because the second call wouldn't be able to use it!
	}

	for (int i = 0; i < n; ++i) //printing
	{
		cout << la[i] << ' ';
	}
	cout << '\n';

	int* p = new int[n];

	for (int i = 0; i < n; ++i)
	{
		p[i] = la[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << p[i] << ' ';
	}
	cout << '\n';

	delete[] p;

}

int main()
{
	f(ga, 10);

	int aa[10] = {1, 2*1, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1, 8*7*6*5*4*3*2*1, 9*8*7*6*5*4*3*2*1, 10*9*8*7*6*5*4*3*2*1,};

	f(aa, 10);

	return 0;
}