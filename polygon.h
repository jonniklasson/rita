#pragma once
#include "Vertex.h"

class Polygon : public Vertex 
{
public:

	Polygon();		//default
	Polygon(Vertex n[], int m);
	~Polygon();
	int miny();
	int maxy();
	int minx();
	int maxx();
	int area();
	int numVertices();
	void add(Vertex n);
	Vertex *arr;	//skapar pekare
	int vertices;
};
