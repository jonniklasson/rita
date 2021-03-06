#ifndef POLYGON_H
#define POLYGON_H
#include <array>
#include "vertex.h"


class Polygon : public Vertex 
{
	Vertex * p;
	int num;
public:
	Polygon();		//default
	Polygon(Vertex n[], int m);
	~Polygon();
	void add(Vertex n);
	int miny();
	int maxy();
	int minx();
	int maxx();
	float area();
	int numVertices();
};
#endif