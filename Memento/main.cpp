#include "Header.h"

int main()
{
	History historyObj;

	Entity obj;
	obj.changeData(10, 5, "Nitin");
	obj.print();

	historyObj.addToHistory(obj);
	obj.changeData(34, 23, "ABC");
	obj.print();

	historyObj.restoreFromHistory(obj);
	obj.print();
}