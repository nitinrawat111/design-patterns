#include "shapes.h"

///////////////////////////////////////////////////////////////////
// SQUARE
///////////////////////////////////////////////////////////////////
void Square::print()
{
	std::cout << "Square" << std::endl;
}

void Square::callExporter(Exporter* exp)
{
	exp->exportSquare(this);
}

///////////////////////////////////////////////////////////////////
// CIRCLE
///////////////////////////////////////////////////////////////////
void Circle::print()
{
	std::cout << "Circle" << std::endl;
}

void Circle::callExporter(Exporter* exp)
{
	exp->exportCircle(this);
}

///////////////////////////////////////////////////////////////////
// RECTANGLE
///////////////////////////////////////////////////////////////////
void Rectangle::print()
{
	std::cout << "Rectangle" << std::endl;
}

void Rectangle::callExporter(Exporter* exp)
{
	exp->exportRectangle(this);
}

///////////////////////////////////////////////////////////////////
// JPEG EXPORTER
///////////////////////////////////////////////////////////////////
 void JPEGExporter::exportRectangle(Rectangle* obj)
 {
	 obj->print();
	 std::cout << "Exported Rectangle to JPEG" << std::endl;
 }

 void JPEGExporter::exportCircle(Circle* obj)
 {
	 obj->print();
	 std::cout << "Exported Circle to JPEG" << std::endl;
 }

 void JPEGExporter::exportSquare(Square* obj)
 {
	 obj->print();
	 std::cout << "Exported Square to JPEG" << std::endl;
 }

 ///////////////////////////////////////////////////////////////////
 // PNG EXPORTER
 ///////////////////////////////////////////////////////////////////
 void PNGExporter::exportSquare(Square* obj)
 {
	 obj->print();
	 std::cout << "Exported Square to PNG" << std::endl;
 }

 void PNGExporter::exportCircle(Circle* obj)
 {
	 obj->print();
	 std::cout << "Exported Circle to PNG" << std::endl;
 }

 void PNGExporter::exportRectangle(Rectangle* obj)
 {
	 obj->print();
	 std::cout << "Exported Rectangle to PNG" << std::endl;
 }
