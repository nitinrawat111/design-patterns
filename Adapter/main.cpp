#include "classes.h"
int main()
{
	Service serviceObj;
	
	TargetFormat* obj1 = new TargetFormat();;
	serviceObj.doSomething(obj1);

	FirstFormat* obj2 = new FirstFormat();
	FirstFormatAdapter* obj3 = new FirstFormatAdapter(obj2);
	serviceObj.doSomething(obj3);
}