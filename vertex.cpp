#include "vertex.h"
Vertex & Vertex::operator=(Vertex & arr)
{
  if (this != &arr)
    {
      delete[] p;
      p = new double[m];
 
      for(int i = 0; i < m; i++)
        {
         p[i] = arr.array[i];
        }
    }
  return *this;
}
int getm() const;
int setm() const;
int Vertex::getx() const { return x;};
int Vertex::gety() const { return y;};
Vertex::Vertex(int n, int m)
{
	x = n; y=m;
	p = new Vertex;
}
Vertex::Vertex()
{
	p=new Vertex;
}
Vertex::~Vertex() {
	delete[] p;
}

