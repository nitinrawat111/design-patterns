#include "Header.h"

int main()
{
	StatusHandler* handler = new StatusHandler();
	CompletenessHandler* handler2 = new CompletenessHandler();
	handler->setNextHandle(handler2);


	Response res(10, true);
	handler->handle(res);

	Response res2(200, true);
	handler->handle(res2);
}