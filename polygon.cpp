#include <iostream>
#include <cmath>
using namespace std;
#include "polygon.h" 
#include "vertex.h"

Polygon::Polygon(Vertex n, int m) 
{
	Vertex.set_num(&n,m);
	Vertex.set_p(&n);

}
Polygon::Polygon() 
{

}
Polygon::~Polygon() {}

int Polygon::numVertices()
{
	return Vertex.get_num();
};