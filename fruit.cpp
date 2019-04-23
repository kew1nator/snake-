#include "fruit.h"
#include <ctime>
#include<cstdlib>
#include<iostream>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std; 

void gotoxy1(int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE),
		coord
	);
}

fruit::fruit()
{
	m_fruitx = 15;
	m_fruity = 15;
}

int fruit::getx() // funktionen get x 
{
	return m_fruitx; // returnerar positionen i arrayien som finns i m_x
}

int fruit::gety() // funktionen get y 
{
	return m_fruity; // returnerar positionen i arrayien som finns i m_y
}

void fruit::ny()
{
	m_fruitx = rand() % 115; // rand gör så att frukten skrivs ut på en slumpmässig position mellan 1 115 i x led
	m_fruity = rand() % 26; // rand gör så att frukten skrivs ut på en slumpmässig position mellan 1 26 i y led

}


