#include <iostream>
#include<cmath>
using namespace std;

int Real = 0, Barca = 0, City = 0, PSG = 0;
int real_avg = 0, barca_avg = 0, city_avg = 0, psg_avg = 0;

int real_barca()
{
	srand(time(0));
	int x, y;
	x = rand() % 5;
	y = rand() % 5;
	cout << "* Real " << x << " - " << "Barca " << y << endl;
	if (x > y)
	{
		Real += 3;
		real_avg += x - y;
		barca_avg -= x - y;
	}
	else if (x == y)
	{
		Real += 1;
		Barca += 1;
	}
	else
	{
		Barca += 3;
		barca_avg += y - x;
		real_avg -= y - x;
	}
	return 0;
}


int real_city()
{

	int x, y;
	x = rand() % 5;
	y = rand() % 5;
	cout << "* Real " << x << " - " << "City " << y << endl;
	if (x > y)
	{
		Real += 3;
		real_avg += x - y;
		city_avg -= x - y;
	}
	else if (x == y)
	{
		Real += 1;
		City += 1;
	}
	else
	{
		City += 3;
		city_avg += y - x;
		real_avg -= y - x;
	}
	return 0;
}


int real_psg()
{
	int x, y;
	x = rand() % 5;
	y = rand() % 5;
	cout << "* Real " << x << " - " << "PSG " << y << endl;
	if (x > y)
	{
		Real += 3;
		real_avg += x - y;
		psg_avg -= x - y;
	}
	else if (x == y)
	{
		Real += 1;
		PSG += 1;
	}
	else
	{
		PSG += 3;
		psg_avg += y - x;
		real_avg -= y - x;
	}
	return 0;
}


int barca_city()
{
	int x, y;
	x = rand() % 5;
	y = rand() % 5;
	cout << "* Barca " << x << " - " << "City " << y << endl;
	if (x > y)
	{
		Barca += 3;
		barca_avg += x - y;
		city_avg -= x - y;
	}
	else if (x == y)
	{
		Barca += 1;
		City += 1;
	}
	else
	{
		City += 3;
		city_avg += y - x;
		barca_avg -= y - x;
	}
	return 0;
}


int barca_psg()
{
	int x, y;
	x = rand() % 5;
	y = rand() % 5;
	cout << "* Barca " << x << " - " << "PSG " << y << endl;
	if (x > y)
	{
		Barca += 3;
		barca_avg += x - y;
		psg_avg -= x - y;
	}
	else if (x == y)
	{
		Barca += 1;
		PSG += 1;
	}
	else
	{
		PSG += 3;
		psg_avg += y - x;
		barca_avg -= y - x;
	}
	return 0;
}


int city_psg()
{
	int x, y;
	x = rand() % 5;
	y = rand() % 5;
	cout << "* City " << x << " - " << "PSG " << y << endl << endl;
	if (x > y)
	{
		City += 3;
		city_avg += x - y;
		psg_avg -= x - y;
	}
	else if (x == y)
	{
		City += 1;
		PSG += 1;
	}
	else
	{
		PSG += 3;
		psg_avg += y - x;
		city_avg -= y - x;
	}
	return 0;
}


int main()
{
	real_barca();
	real_city();
	real_psg();
	barca_city();
	barca_psg();
	city_psg();

	cout << "* TEAM " << " P " << " GD" << endl;
	cout << "* Real  " << Real << "  " << real_avg << endl;
	cout << "* Barca " << Barca << "  " << barca_avg << endl;
	cout << "* City  " << City << "  " << city_avg << endl;
	cout << "* PSG   " << PSG << "  " << psg_avg << endl << endl;

	if (Real > Barca && Real > City && Real > PSG)
	{
		cout << "* REAL ARE THE CHAMPIONS" << endl;
	}

	if (Barca > Real && Barca > City && Barca > PSG)
	{
		cout << "* BARCA  ARE THE CHAMPIONS" << endl;
	}

	if (City > Barca && City > Real && City > PSG)
	{
		cout << "* CITY  ARE THE CHAMPIONS" << endl;
	}

	if (PSG > Barca && PSG > City && PSG > Real)
	{
		cout << "* PSG  ARE THE CHAMPIONS" << endl;
	}

	if (Real == Barca && Real > City && Real > PSG && Barca > City && Barca > PSG)
	{
		if (real_avg > barca_avg)
		{
			cout << "* REAL ARE THE CHAMPIONS" << endl;
		}
		else if (real_avg < barca_avg)
		{
			cout << "* BARCA ARE THE CHAMPIONS" << endl;
		}
	}

	if (Real == City && Real > Barca && Real > PSG && City > Barca && City > PSG)
	{
		if (real_avg > city_avg)
		{
			cout << "* REAL ARE THE CHAMPIONS" << endl;
		}
		else if (real_avg < city_avg)
		{
			cout << "* CITY ARE THE CHAMPIONS" << endl;
		}
	}

	if (Real == PSG && Real > Barca && Real > City && PSG > Barca && PSG > City)
	{
		if (real_avg > psg_avg)
		{
			cout << "* REAL ARE THE CHAMPIONS" << endl;
		}
		else if (real_avg < psg_avg)
		{
			cout << "* PSG ARE THE CHAMPIONS" << endl;
		}
	}

	if (Barca == City && Barca > Real && Barca > PSG && City > Real && City > PSG)
	{
		if (barca_avg > city_avg)
		{
			cout << "* BARCA ARE THE CHAMPIONS" << endl;
		}
		else if (barca_avg < city_avg)
		{
			cout << "* CITY ARE THE CHAMPIONS" << endl;
		}
	}

	if (PSG == City && PSG > Barca && PSG > Real && City > Barca && City > Real)
	{
		if (psg_avg > psg_avg)
		{
			cout << "* PSG ARE THE CHAMPIONS" << endl;
		}
		else if (psg_avg < city_avg)
		{
			cout << "* CITY ARE THE CHAMPIONS" << endl;
		}
	}
}
