#include <iostream>
#include <cmath>
#include <array>
using namespace std;
#include "polygon.h" 
#include "vertex.h"

void Polygon::add(Vertex n)
{
	m++;
	if (p == nullptr)
	{
		p = new Vertex;
		p[0] = n;
	}
	else {
		Vertex * temp;
		temp = new Vertex[sizeof(p)];
		temp = p;
		p = new Vertex[m];
		for (int i = 0; i < m; i++) {
			if (i == m-1) {
				p[i]=n;
			}
			else {
				p[i] = temp[i];
			}
			
		}
		
		delete[] temp;
	}
}


// Constructors
Polygon::Polygon(Vertex n[], int k)
{	
	m = k;
	p  = new Vertex[k];
	
	for (int i = 0; i < m; i++) 
	{
		p[i]=n[i];
	}
}

Polygon::Polygon(){	m = 0;}

Polygon::~Polygon()
{
	delete[] p;
}

int Polygon::compare(char n, bool positive) {
	int temp = 0;
	int check;
		for (int i = 0; i < m; i++) 
		{
			if (i==0) { 
				if (n == 'x') {temp = p[i].getx(); }
				if (n == 'y') {temp = p[i].gety(); }
			}
			else 
			{
				if (n == 'x') {check = p[i].getx();}
				if (n == 'y') {check = p[i].gety();}
				if (positive = true) {
						if ( temp < check ) {
						temp=check;
						}	
				}
				if (positive = false) {
					if ( temp > check ) {
					temp=check;
					}	
				}
				
			}
		}
		return temp;
		}

int Polygon::miny(){
	return compare('y',false);	
}
int Polygon::maxy(){ 
	return compare('y',true);	
}
int Polygon::minx(){
	return compare('x',false);
}
int Polygon::maxx(){
	return compare('x',true);
}
float Polygon::area()
{
	
	float temp; ma = 0; int x1,y1,x2,y2;
	//(xi*yi+1 - xi+1*yi)/2
	for (int i=0;i<m;i++)
	{
		temp=0;
		// körning m-1 använder inte p[i] då P[m] inte finns
		// men kör då avslutande biten (sista, första vertex)
		if (i == m-1) {
			//(xn-1*y0 - x0*yn-1)/2
			x2 = p[m-1].getx();
			y2 = p[m-1].gety();
			x1 = p[0].getx();
			y1 = p[0].gety();		
		}
		else {
			x1 = p[i].getx();
			y1 = p[i].gety();
			x2 = p[i+1].gety();
			y2 = p[i+1].gety();
		}
		//(xi*yi+1 - xi+1*yi)/2
		//(xi*yi+1 - xi+1*yi)/2
		temp += x1*y2 - x2*y1;
		temp /= 2;
		temp = abs(temp);
		ma += temp;
	}
	return ma;
}
int Polygon::numVertices(){ return m;}