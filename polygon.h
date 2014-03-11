#ifndef POLYGON_H
#define POLYGON_H

#include "vertex.h"
class Polygon : public Vertex
{
public:
	Polygon(Vertex n[], int m);
	Polygon();
	~Polygon();

	//
	int numVertices();
}
#endif
