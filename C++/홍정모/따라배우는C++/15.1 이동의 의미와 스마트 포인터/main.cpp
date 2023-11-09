#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

// RAII : resource acquisition is initialization

void doSomething()
{
	try
	{
		Resource* res = new Resource;

		// work with res
		if (false)
		{
			throw - 1; // exception
		}

		delete res;
	}
	catch (...)
	{

	}
	return;
}

int main()
{
	doSomething();
}