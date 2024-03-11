#include "manager.h"

int main()
{
	Manager obj;
	obj.addListener("Email", new EmailListener());
	obj.addListener("Call", new CallListener());

	obj.notifyListener("Email", "sample data");
}