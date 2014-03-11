#include "vertex.h"


Vertex::Vertex(int n, int m): x(n), y(m) {}

Vertex::Vertex(){}

Vertex::~Vertex(){}

void Vertex::set_p    (Vertex *P_CLS) 
{
	//får en pekare till första positionen.
	this->p = new Vertex[this->num];
	for (int i=0;i<this->num;i++)
	{
		p[i] = P_CLS[i];		
	}
}

Vertex* Vertex::get_p () {return this->p;};

void Vertex::set_num  (Vertex *P_CLS, int m) 
{
	P_CLS->num = m;
}

int Vertex::get_num   () {return this->num;};