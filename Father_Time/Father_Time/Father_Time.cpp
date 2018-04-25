// Father_Time.cpp : Defines the entry point for the console application.
//header files
#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <string>
#include "SetUp.h" //  header file 

using namespace std; //  standard namespace

void main() // main fucntion, don't want it to return anything
{
	string name = setName(); // variable to hold users name 
	int h = 0; // hours variable
	int m = 0; // minuutes variable
	int s = 0; // seconds variable
	setTimer(&h, &m, &s); // call setTimer 
	StartTimer(name, h, m, s); // call function StartTimer 
	cout << "\n\n Go for a Walk \n\n"; // simple cout 
	system("pause"); // pause at the end of the timer!
}