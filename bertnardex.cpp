// bertnardex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	/*int asal = 1;
	int say= 0;
	int asal2 = 1;
    long long sayi ;
	cout << "n ve 2ni bulunacak sayiyi giriniz: ";
	cin >> sayi;
	for (int i = 2; i < sayi/2; i++)
	{
		for (int i = 2; i < sayi*2; i++)
		{
			if (sayi % i == 0) {
				asal2 = 0;
				cout << sayi * 2 << " sayisi asal degildir.";
				break;
			}
			else
			{
				say++;
				cout << say;
			}
		}
		
		if (sayi%i== 0)
		{
			cout << sayi << " sayisi asal degildir." ;
			asal = 0;
		}
		else
		{
			say++;
			cout << say;
		}
	}
	if (asal==1)
	{
		
		cout << sayi << " sayisi asaldir. " ;
		
	}
	if (asal2==1)
	{
		cout << sayi << " sayisi asaldir. ";
	}
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


