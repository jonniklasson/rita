#ifndef VERTEX_H
#define VERTEX_H

class Vertex
{
int x; 
int y;
public:
	int getx();
	int gety();
	Vertex();		//default
	Vertex(int n, int m);
	
	~Vertex();
};
#endif

