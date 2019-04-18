# include <iostream>
# include <stdio.h>
# include <math.h>
# include <string>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>
# include "Calculator.h"
	using namespace std;
	float Calculator::add(float a, float b)
	{
		return (a+b);
	}
	float Calculator::subtract(float a, float b)
	{
		return (a-b);
	}
	float Calculator::multiply(float a, float b)
	{
		return (a*b);
	}
	float Calculator::divide(float a, float b)
	{
		return (a/b);
	}
	float Calculator::exponential(float a, float b)
	{
		return pow(a,b);
	}
	float Calculator::squart(float a, float b)
	{
		return (b=sqrt(a));
	}
	float Calculator::logarithm(float a, float b)
	{
		return (b=log10(a));
	}
	float Calculator::trigonometry_sin(float a, float b)
	{
		return (b=sin(a));
	}
	float Calculator::trigonometry_cos(float a, float b)
	{
		return (b=cos(a));
	}
	float Calculator::trigonometry_tan(float a, float b)
	{
		return (b=tan(a));
	}
	float Calculator::percent(float a, float b)
	{
		return (a*b/100);
	}
	void Calculator::display()
	{
		enbas:
		Calculator calc;
		float x,y,numb;
		cout<<"--You want to do select the action!!!";
		cout<<"\n--For add press 1"
		<<"\n--For subtract press 2"
		<<"\n--For multiply press 3"
		<<"\n--For divide press 4"
		<<"\n--For exponential press 5"
		<<"\n--For square root press 6"
		<<"\n--For logaritm press 7"
		<<"\n--For trigonometry press 8"
		<<"\n--For percentage press 9";
		cout<<"\n---------------------------------------------------\n";
		cout<<"\n--Please entered number: ";
		cin>>numb;
		if(numb == 1)
		{
			cout<<"Entered the first number = "; cin>>x;
			cout<<"Entered the second number = "; cin>>y;
			cout<<x<<" + "<<y<<" = "<<calc.add(x,y)<<endl;
			cout<<"---------------------------------------------------\n";
		}
		else if(numb == 2)
		{
			cout<<"Entered the first number = "; cin>>x;
			cout<<"Entered the second number = "; cin>>y;
			cout<<x<<" - "<<y<<" = "<<calc.subtract(x,y)<<endl;
			cout<<"---------------------------------------------------\n";
		}
		else if(numb == 3)
		{
			cout<<"Entered the first number = "; cin>>x;
			cout<<"Entered the second number = "; cin>>y;
			cout<<x<<" * "<<y<<" = "<<calc.multiply(x,y)<<endl;
			cout<<"---------------------------------------------------\n";
		}
		else if(numb == 4)
		{
			cout<<"Entered the first number = "; cin>>x;
			cout<<"Entered the second number = "; cin>>y;
			cout<<x<<" / "<<y<<" = "<<calc.divide(x,y)<<endl;
			cout<<"---------------------------------------------------\n";
		}
		else if(numb == 5)
		{
			cout<<"Entered the number = "; cin>>x;
			cout<<"Entered the exponential number = "; cin>>y;
			cout<<x<<" exponent "<<y<<" = "<<calc.exponential(x,y)<<endl;
			cout<<"---------------------------------------------------\n";
		}
		else if(numb == 6)
		{
			cout<<"Entered the number = "; cin>>x;
			y=2;
			cout<<x<<" square root "<<y<<" = "<<calc.squart(x,y)<<endl;
			cout<<"---------------------------------------------------\n";
		}
		else if(numb == 7)
		{
			cout<<"Entered the number = "; cin>>x;
			cout<<"log10("<<x<<") = "<<calc.logarithm(x,y)<<endl;
			cout<<"---------------------------------------------------\n";
		}
		else if(numb == 8)
		{
			cout<<"Entered the number = "; cin>>x;
			cout<<"Sin("<<x<<") = "<<calc.trigonometry_sin(x,y)<<endl;
			cout<<"Cos("<<x<<") = "<<calc.trigonometry_cos(x,y)<<endl;
			cout<<"Tan("<<x<<") = "<<calc.trigonometry_tan(x,y)<<endl;
			cout<<"Cot("<<x<<") = "<<(1/calc.trigonometry_tan(x,y))<<endl;
			cout<<"---------------------------------------------------\n";
		}
		else if(numb == 9)
		{
			cout<<"Entered the number = "; cin>>x;
			cout<<"Entered the percentage number = "; cin>>y;
			cout<<y<<" percent of the "<<x<<" is = "<<calc.percent(x,y)<<endl;
			cout<<"---------------------------------------------------\n";
		}
		else
		{
			cout<<"PLEASE CHOOSE 1 OR 2 OR 3 OR 4 NUMBER!!!\n";
			cout<<"---------------------------------------------------\n";
		}	
		cout<<"\nWait five seconds and continue other calculate";
		sleep(5);
		system("cls");
		goto enbas;
	}
