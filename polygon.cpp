#include <iostream>
#include <cmath>
#include <array>
using namespace std;
#include "polygon.h" 
#include "vertex.h"

void Polygon::add(Vertex n)
{
	if (p == nullptr)
	{
		p = new vertex;
	}
}


// Constructors
Polygon::Polygon(Vertex n[], int k)
{	
	p  = new Vertex[k];
	
	for (int i = 0; i < mn; i++) 
	{
		p[i]=n[i];
	}
}

Polygon::Polygon(){	mn = 0; p = nullptr;}

Polygon::~Polygon()
{
	delete mx,my,p;
}

int Polygon::miny(){
		int temp = 0;
		for (int i = 0; i < mn; i++) 
		{
			if (i==0) { temp = my[i];}
			else 
			{
				if ( temp > my[i] ) {
					temp=my[i];
				}
			}
		}
		return temp;
}
int Polygon::maxy(){ 
	int temp = 0;
		for (int i = 0; i < mn; i++) 
		{
			if (i==0) { temp = my[i];}
			else 
			{
				if ( temp < my[i] ) {
					temp=my[i];
				}
			}
		}
		return temp;}
int Polygon::minx(){
	int temp = 0;
		for (int i = 0; i < mn; i++) 
		{
			if (i==0) { temp = mx[i];}
			else 
			{
				if ( temp > mx[i] ) {
					temp=mx[i];
				}
			}
		}
		return temp;
}
int Polygon::maxx(){
	int temp = 0;
		for (int i = 0; i < mn; i++) 
		{
			if (i==0) { temp = mx[i];}
			else 
			{
				if ( temp < mx[i] ) {
					temp=mx[i];
				}
			}
		}
		return temp;
}
float Polygon::area()
{
	float marea=0; ma = 0;
//(xi*yi+1 - xi+1*yi)/2
	for (int i=0;i<mn-1;i++)
	{
	marea = 0;
	marea += mx[i]*my[i+1];
	marea -= mx[i+1]*my[i];
	marea /= 2;
	marea = abs(marea);
	ma += marea;
	}
	marea = 0;
//(xn-1*y0 - x0*yn-1)/2
	marea += mx[mn-1]*my[0];
	marea -= mx[0]*my[mn-1];
	marea /= 2;
	marea = abs(marea);
	ma += marea;
	return ma;
}
int Polygon::numVertices(){ return mn;}