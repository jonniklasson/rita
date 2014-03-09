#ifndef POLYGON_H
#define POLYGON_H
#include <array>
#include "vertex.h"


class Polygon : public Vertex 
{
public:
	Polygon();		//default
	Polygon(Vertex n[], int m);
	~Polygon();
	void draw();

	void add(Vertex n);
	int miny();
	int maxy();
	int minx();
	int maxx();
	float area();
	int numVertices();
	int mn;
	Vertex* p; 
	int* my;
	int* mx;
	float ma;


};
#endif
