#include <iostream>
#include <cmath>
#include <array>
using namespace std;
#include "polygon.h" 
#include "vertex.h"

void Polygon::add(Vertex v)
{	//skapar exception
		num++;
		Vertex * temp;
		temp = new Vertex[num];
		for (int i = 0; i < num; i++) {
			if (i == num-1) {
				temp[i]=v;
			}
			else {
				temp[i] = p[i];
			}
			}
		p = temp;
}


// Constructors
Polygon::Polygon(Vertex n[], int k)
{
	num = k;
	p  = new Vertex[k];

	for (int i = 0; i < k; i++) 
	{
		p[i]=n[i];
	}
	
}

Polygon::Polygon(){ p = new Vertex; p=0; num=0;}

Polygon::~Polygon()
{
	delete[] p;
}

int Polygon::miny(){
		int temp = 0; int v;
		for (int i = 0; i < num; i++) 
		{
			v = p[i].gety();
			if (i==0) { temp = v;}
			else 
			{
				if ( temp > v ) {
					temp=v;
				}
			}
		}
		return temp;	
}
int Polygon::maxy(){ 
		int temp = 0; int v;
		for (int i = 0; i < num; i++) 
		{
			v = p[i].gety();
			if (i==0) { temp = v;}
			else 
			{
				if ( temp < v ) {
					temp=v;
				}
			}
		}
		return temp;		
}
int Polygon::minx(){
		int temp = 0; int v;
		for (int i = 0; i < num; i++) 
		{
			v = p[i].getx();
			if (i==0) { temp = v;}
			else 
			{
				if ( temp > v ) {
					temp=v;
				}
			}
		}
		return temp;		
}
int Polygon::maxx(){
	int temp = 0; int v;
		for (int i = 0; i < num; i++) 
		{
			v = p[i].getx();
			if (i==0) { temp = v;}
			else 
			{
				if ( temp < v ) {
					temp=v;
				}
			}
		}
		return temp;		
}

float Polygon::area()
{
	float temp, ma = 0;
	int x1, x2, y1, y2;

	for (int i=0;i<num;i++)
	{
	if (i == num-1)
	{
	x1=p[0].getx();		y1=p[0].gety();
	x2=p[num-1].getx();  y2=p[num-1].gety();	
	} else {
	x1=p[i].getx();		y1=p[i].gety();
	x2=p[i+1].getx();  y2=p[i+1].gety();
	}
	//(xi*yi+1 - xi+1*yi)/2
	//(xn-1*y0 - x0*yn-1)/2
	temp = 0;
	temp += x1*y2;
	temp -= x2*y1;
	temp /= 2;
	temp = abs(temp);
	ma += temp;
	}

	return ma;
}
int Polygon::numVertices(){ return num;}