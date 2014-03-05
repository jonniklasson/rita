#include "polygon.h"

int Polygon::miny(){ int a = 1; return a;}
int Polygon::maxy(){ int a = 1; return a;}
int Polygon::minx(){ int a = 1; return a;}
int Polygon::maxx(){ int a = 1; return a;}
int Polygon::area(){ int a = 1; return a;}
int Polygon::numVertices(){ int a = 1; return a;}

void Polygon::add(Vertex n)
{
	//if(arr == 0)
	//{
	//	arr = new Vertex[1];
	//	arr[0] = n;
	//	vertices ++;
	//}
	//else
	//{
	//	// stega genom arr som har okänt index.
	//	// tydligen så kan man inte använda sig
	//	// av "last" då kompulatorn måste veta index
	//	// vid kompilering.
	//	Vertex *barr;
	//	barr = new Vertex[vertices];
	//	for (int i = 0; i < vertices; i++)
	//	{
	//		if (i < (vertices - 1))
	//		{
	//			barr[i] = arr[i];
	//		}
	//		else 
	//		{
	//			barr[i] = n;
	//		}

	//		arr = barr;

	//	}	

	//}
}

// Constructors
Polygon::Polygon(Vertex n[], int m) : Vertex(x,y)
{
			
	arr = new Vertex[m];	// allokerar minne dynamiskt
	vertices = m;

for (int i = 0; i < m; i++)
{
	arr[i] = n[i];	//sparar n pekare av vertex
}
}

Polygon::Polygon()
{
}

Polygon::~Polygon()
{

}
