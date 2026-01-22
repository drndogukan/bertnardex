// bertnardex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	
	return 0;*/
	int sayi ;
	
	
	cout << "Bir sayi giriniz: ";
	cin >> sayi;
	for (int i = 2; i <= sayi; i++)
	{
		
		int asal = 1;
		for (int a = 2; a <= sqrt(i);a++) {
			if (i % a == 0) {
				asal = 0;
				break;
			}
		}
		if (asal==1)
		{
			cout <<"Girilen n sayisina kadar olan asal sayilar: " << i << endl << " "   ;
		}
		
	}
	for (int i = 2; i <= sayi *2; i++)
	{

		int asal = 1;
		for (int a = 2; a <= sqrt(i);a++) {
			if (i % a == 0) {
				asal = 0;
				break;
			}
		}
		if (asal == 1)
		{
			cout << "Girilen 2n sayisina kadar olan asal sayilar: " << i << endl << " ";
		}
	}
	



}



