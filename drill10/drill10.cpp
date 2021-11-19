#include "std_lib_facilities.h"
/*
class Points
{
	public:
		vector<double> x;
		vector<double> y;
};
*/

int main()
{
	vector<double> x;
	vector<double> y;
	double number1;
	double number2;

	cout << "Please add 7 x,y coordinate pairs!\n";

	for (int i = 0; i < 7; ++i)
	{
		cout << i+1 << ". pair: ";
		cin >> number1 >> number2;

		x.push_back(number1);
		y.push_back(number2);
	}
	cout << "You have succesfully added all the seven needed pairs!\n";

	cout << "Here are your entered points:\n";
	
	for (int i = 0; i < 7; ++i)
	{
		cout << x[i] << ',' << y[i] << '\n';
	}

	ofstream fileiras;
	fileiras.open("mydata.txt"); //létrejött

	for (int i = 0; i < 7; ++i)
	{
		fileiras << x[i] << ' ' << y[i] << '\n';
	}

	fileiras.close();
	ifstream fileolvasas;
	fileolvasas.open("mydata.txt");

	vector<double> processed_points1;
	vector<double> processed_points2;

	cout << "There are the processed_points vectors coordinates:\n";

	for (int i = 0; i < 7; ++i)
	{
		fileolvasas >> number1 >> number2;
		processed_points1.push_back(number1);
		processed_points2.push_back(number2);
	}

	fileolvasas.close();

	for (int i = 0; i < 7; ++i)
	{
		cout << processed_points1[i] << ' ' << processed_points2[i] << '\n';
	}

	//Check if the vectors are the same
	bool same = true;

	for (int i = 0; i < 7; ++i)
	{
		if ( (x[i] != processed_points1[i]) || (y[i] != processed_points2[i]) )
		{
			same = false;
		}
	}

	if (same == false)
	{
		cout << "Something's wrong!";
	}

	return 0;
}