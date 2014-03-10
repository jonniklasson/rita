#ifndef VERTEX_H
#define VERTEX_H
class Vertex
{
int x;
int y;
public:
	int getx() const;
	int gety() const;
	Vertex();		//default
	Vertex(int n, int m): x(n), y(m) {}
	~Vertex();
};
#endif

