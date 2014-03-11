#ifndef VERTEX_H
#define VERTEX_H
class Vertex
{
	int x;
	int y;
	const int m;
	const vertex* p;
public:
	const Vertex & Vertex::operator=( const Vertex & a );
	void setx(int n) {x=n;}
	void sety(int n) {y=n;}
	int getx() const;
	int gety() const;
	int getm() const;
	int setm() const;
	Vertex();		//default
	Vertex(int n, int m);
	~Vertex();
};
#endif

