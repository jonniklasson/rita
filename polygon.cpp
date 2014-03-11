#include <iostream>
#include <cmath>
#include <array>
using namespace std;
#include "polygon.h" 
#include "vertex.h"

Vertex & Vertex::operator=(Vertex & arr)
{
  if (this != &arr)
    {
      delete[] p;
      p = new double[m];
 
      for(int i = 0; i < bufSize; i++)
        {
         p[i] = arr.array[i];
        }
    }
  return *this;
}


void Polygon::add(Vertex n)
{
	m++;
	if (!p)
	{	
		p = new Vertex; p=0;
		p = &n;
	}
	else {
		Vertex* q;
		q = new Vertex[m];
		for (int i=0;i<m;i++) 
		{
			if (i == m-1) {q[i]=n;} else {q[i]=p[i];}
		}
		p=q;
		delete q; q=0;
	}
		
		
}

// Constructors
Polygon::Polygon(Vertex n[], int k)
{	
	m = k;
	p  = new Vertex[m];
	
	for (int i = 0; i < m; i++) 
	{
		p[i]=n[i];
	}
}

Polygon::Polygon()
{	
	p = 0; //nollpekare;
	m = 0;
}

Polygon::~Polygon()
{
	delete[] p;
}

//utskrift
int Polygon::miny(){
	int temp;
	for (int i=0;i<m;i++){
		if (i==0) {temp = p[i].gety();}
		if (p[i].gety() < temp) {temp = p[i].gety();}	
	}
	return temp;
}
int Polygon::maxy(){ 
	int temp;
	for (int i=0;i<m;i++){
		if (i==0) {temp = p[i].gety();}
		if (p[i].gety() > temp) {temp = p[i].gety();}	
	}
	return temp;	
}
int Polygon::minx(){
	int temp;
	for (int i=0;i<m;i++){
		if (i==0) {temp = p[i].getx();}
		if (p[i].getx() < temp) {temp = p[i].getx();}	
	}
	return temp;	
}
int Polygon::maxx(){
	int temp;
	for (int i=0;i<m;i++){
		if (i==0) {temp = p[i].getx();}
		if (p[i].getx() > temp) {temp = p[i].getx();}	
	}
	return temp;
}
float Polygon::area()
{
	
	float temp; ma = 0; int x1,y1,x2,y2;
	//(xi*yi+1 - xi+1*yi)/2
	for (int i=0;i<m;i++)
	{
		temp=0;
		// körning m-1 använder inte p[i] då P[m] inte finns
		// men passar på att räkna med p[0] och P[m-1]
		if (i == m-1) {
			x2 = p[0].getx();
			y2 = p[0].gety();
			x1 = p[m-1].getx();
			y1 = p[m-1].gety();		
		}
		else {
			x1 = p[i].getx();
			y1 = p[i].gety();
			x2 = p[i+1].gety();
			y2 = p[i+1].gety();
		}
		//(xn-1*y0 - x0*yn-1)/2
		//(xi*yi+1 - xi+1*yi)/2
		temp += (x1*y2); 
		temp -= (x2*y1);
		temp /= 2;
		temp = abs(temp);
		ma += temp;
	}
	return ma;
}

