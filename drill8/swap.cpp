#include "std_lib_facilities.h"

void feladat1();
void feladat2();
void feladat3();
void swap_r();
void swap_v();
//void swap_cr();

int main()
{
	feladat1();	

	feladat2();

	feladat3();

	return 0;
}

//Ez az egész függvény nem fog működni, 
//mert "x" és "y" értékét vette át "a-ra" és "b"-re, 
//de nem ad vissza/nem változtatja meg.
void swap_v(int a, int b)
{
	int temp;
	temp = a,
	a = b;
	b = temp;
}

//Ez a függvény le fog futni és működni is fog,
//mert referenciaként adtuk át "x"-et és "y"-t,
//tehát "x" és "y" értéke fog változni!
void swap_r(int& a, int& b)
{
	int temp;
	temp = a,
	a = b;
	b = temp;
}

//Ez az egész függvény nem fog lefordulni, mert read-only!
/*
void swap_cr(const int& a, const int& b)
{
	int temp;
	temp = a,
	a = b;
	b = temp;
}
*/

void feladat1()
{
	int x = 7;
	int y = 9;
	cout << "x: " << x << '\n';
	cout << "y: " << y << '\n';

	//swap_r(x, y); //Lefordul, működik!
	//swap_v(x, y); //Lásd a függvénynél!
	//swap_cr(x, y); //Lásd a függvénynél!

	//swap_r(7, 9); //itt nem fog felcserélődni hiszen nincs definiálva a változó amire hivatkozhatna a referencia a swap_r függvényben csak egy értéket adunk át.
	//swap_v(7, 9); //itt sem cserélődik fel ezért
	//swap_cr(7, 9); //nem fog müködni konstans változót nem modosíthatunk 

	cout << "x: " << x << '\n';
	cout << "y: " << y << '\n';
}

void feladat2()
{
	const int cx = 7;
	const int cy = 9;
	cout << "cx: " << cx << '\n';
	cout << "cy: " << cy << '\n';

	//swap_r(cx,cy); //forditó: "error: binding reference of type ‘int&’ to ‘const int’ discards qualifiers".
	//swap_v(cx,cy); //konstans változót nem lehet felüldefiniálni
	//swap_cr(cx,cy); //nem fog működni, mind2 konstans

	//swap_r(7.7,9.9); //Nem konstans!
	//swap_v(7.7,9.9); //lefordul de nem működik
	//swap_cr(7.7,9.9); //nem fut le azóta sem sajnos

	cout << "cx: " << cx << '\n';
	cout << "cy: " << cy << '\n';
}

void feladat3()
{
	double dx = 7.7;
	double dy = 9.9;
	cout << "dx: " << dx << '\n';
	cout << "dy: " << dy << '\n';

	//swap_r(dx, dy);
	//swap_v(dx, dy);
	//swap_cr(dx, dy);
		//doubleből nem tud intet csinálni
	//swap_r(7.7, 9.9);
	//swap_v(7.7, 9.9);
	//swap_cr(7.7, 9.9);

	cout << "dx: " << dx << '\n';
	cout << "dy: " << dy << '\n';
}