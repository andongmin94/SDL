#include "Calc.h"

using namespace std;

int main()
{
	Calc cal(10);
	Calc& temp1 = cal.add(10);
	Calc& temp2 = temp1.sub(1);
	Calc& temp3 = temp2.mult(2);
	temp3.print();
	//cal.add(10);
	//cal.sub(1);
	//cal.mult(2);
	//cal.print();
	cal.add(10).sub(1).mult(2).print();
}