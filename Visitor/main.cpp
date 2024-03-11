#include "shapes.h"

int main()
{
	Shape* obj1 = new Square();
	Shape* obj2 = new Circle();
	
	
	Exporter* exp1 = new JPEGExporter();
	obj1->callExporter(exp1);

	Exporter* exp2 = new PNGExporter();
	obj2->callExporter(exp2);
}