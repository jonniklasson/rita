#ifndef VERTEX_H
#define VERTEX_H

class Vertex
{
	int x, y;
	static Vertex *p;
	static int num;
public:
	Vertex();		//default
	Vertex(int n, int m);	
	~Vertex();
	void set_p    (Vertex *P_CLS);
	Vertex* get_p ();
	void set_num  (Vertex *P_CLS, int m);
	int get_num   ();
};
#endif

