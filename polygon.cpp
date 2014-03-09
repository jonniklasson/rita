#include <iostream>
#include <cmath>
#include <array>
using namespace std;
#include "polygon.h" 
#include "vertex.h"

void Polygon::add(Vertex n)
{
	int mn1 = mn;
	mn++;
	if (mn == 1) // initiera mx och my om det inte gjort
	{
	mx = new int[mn];
	mx[0]=n.x;
	my = new int[mn];
	my[0]=n.y;
	}
	else
	{
	int *mxx = new int[mn];
	int *myy = new int[mn];
	for (int i = 0; i < mn; i++)
	{
		if (i < mn1) 
		{
			mxx[i]=mx[i];
			myy[i]=my[i];
		}
		else 
		{
			mxx[i]=n.x;
			myy[i]=n.y;
		}
				
	}
	mx = new int[mn];
	my = new int[mn];
	for (int i = 0; i < mn; i++)
	{
		mx[i]=mxx[i]; my[i]=myy[i];
	}
	}
}


// Constructors
Polygon::Polygon(Vertex n[], int k)
{
	mn=k; 
	
	p  = new Vertex[mn];
	mx = new int[mn];
	my = new int[mn];
	
	for (int i = 0; i < mn; i++) 
	{
		p[i]=n[i];
	}
	
	for (int i = 0; i < mn; i++) 
		{
			mx[i]=p[i].x;
			my[i]=p[i].y;
		}
}

Polygon::Polygon(){	mn=0; mx = 0; my = 0;}

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