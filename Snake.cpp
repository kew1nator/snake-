#include "Snake.h" // inkluderar klassen snake.h
#include <iostream> // inkluderar bibioteket iostream
using namespace std; 

Snake::Snake() // funktionen snake 
{
	m_length = 0;
	m_dirx = 1;
	m_diry = 0;
	m_positionx[0] = 15; // initcierar variabeln för första gången 
	m_positiony[0] = 20; // initcierar variabeln för första gången 
	m_dirx = 1;
	m_diry = 0;
}
void Snake::move() {
	
	for (int i = m_length; i > 0; i--)
	{
		m_positionx[i] = m_positionx[i - 1];
		m_positiony[i] = m_positiony[i - 1];
	}
	m_positionx[0] += m_dirx;
	m_positiony[0] += m_diry;
	//m_length++;//
}

int Snake::getx(int pos) // funktionen get x 
{
	return m_positionx[pos]; // returnerar positionen i arrayien som finns i m_x
}

int Snake::gety(int pos) // funktionen get y 
{
    return m_positiony[pos]; // returnerar positionen i arrayien som finns i m_y
}
void Snake::turn(int t, int t2) { 
	m_dirx = t;
	m_diry = t2;
}
void Snake::grow()
{
	m_length++;
}
int Snake::getLangd()
{
	return m_length;
}
