#include <iostream>

///////////////////////////////////////////////////////////////////
// EXPORTER FORWARD DECLARATION
///////////////////////////////////////////////////////////////////
class Exporter;

///////////////////////////////////////////////////////////////////
// SHAPES
///////////////////////////////////////////////////////////////////
class Shape
{
public:	
	virtual void print() = 0;
	virtual void callExporter(Exporter* exp) = 0;
};

class Square : public Shape
{
public:
	void print();
	void callExporter(Exporter* exp);
};

class Circle : public Shape
{
public:
	void print();
	void callExporter(Exporter* exp);
};

class Rectangle : public Shape
{
public:
	void print();
	void callExporter(Exporter* exp);
};

///////////////////////////////////////////////////////////////////
// EXPORTER VISITORS
///////////////////////////////////////////////////////////////////
class Exporter
{
public:
	virtual void exportSquare(Square* obj) = 0;
	virtual void exportCircle(Circle* obj) = 0;
	virtual void exportRectangle(Rectangle* obj) = 0;
};

class JPEGExporter : public Exporter
{
public:
	void exportSquare(Square* obj);
	void exportCircle(Circle* obj);
	void exportRectangle(Rectangle* obj);
};

class PNGExporter : public Exporter
{
public:
	void exportSquare(Square* obj);
	void exportCircle(Circle* obj);
	void exportRectangle(Rectangle* obj);
};