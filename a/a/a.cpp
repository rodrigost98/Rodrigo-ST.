// a.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;

void main()
{
	float total;
	float descuento;
	cout<<"Introduce el precio"<< endl;
	do
	{
		cin>>total;
	}
	while(total<0);
	descuento = total*0.5;
	cout<<"El descuento es"<<endl;
	cout<<descuento;
	getch();
	

}

