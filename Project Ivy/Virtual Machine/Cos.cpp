#include "Cos.h"
#include "InternalFunctionFactory.h"

REGISTER_CLASS("cos", Cos);

void Cos::Execute(std::vector<boost::any> arglist)
{

}

boost::any Cos::GetResult()
{
	return Result;
}

Cos::~Cos()
{
}