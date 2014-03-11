#include <iostream>
#include <cmath>
using namespace std;
#include "polygon.h" 
#include "vertex.h"

Polygon::Polygon(Vertex n[], int m) 
{
	n[0].set_num(n,m);
	n[0].set_p(&n[0]);

}
Polygon::Polygon() 
{
	// kan inte initiera Vertex i standard konstruktor for vertex
	// då jag anv. statiska värden.
	// gör därför detta i denna klass.
	Vertex *p;
	p= new Vertex;
	Vertex empty;
	p = &empty;
	empty.set_num(p,0);
	empty.set_p(p);
}
Polygon::~Polygon() {}

int Polygon::numVertices()
{
	return .get_num();
};