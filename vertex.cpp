#include "vertex.h"


Vertex::Vertex(int n, int m){x=n; y=m;}

int Vertex::getx() {return this->x; }
int Vertex::gety() {return this->y; }
Vertex::Vertex() {}

Vertex::~Vertex()
{
}