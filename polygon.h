#ifndef POLYGON_H
#define POLYGON_H
#include <array>
#include "vertex.h"


class Polygon : public Vertex 
{
	Vertex* p; 
public:
	Polygon();		//default
	Polygon(Vertex n[], int m);
	~Polygon();
	void setp(int vertex*[]);		 //eftersom jag �nd� h�ller p�, anv get och setter metoder.
	std::pair<int vertex*[]> getp(); //vill kunna f� p och antal element i p.
	void add(Vertex n);
	int miny();
	int maxy();
	int minx();
	int maxx();
	float area();
	int numVertices();
};
#endif
