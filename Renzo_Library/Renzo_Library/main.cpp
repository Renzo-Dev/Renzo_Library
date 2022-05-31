#include <iostream>
#include "RenzoLib.h"
#include <stack>

using namespace std;


int main()
{
	//std::stack<string> stdStack;

	//stdStack.emplace("1");
	//stdStack.emplace("2");
	//stdStack.emplace("3");

	//cout << stdStack.top();

	renzo::stack<renzo::string> e;

	e.push("wdad");

	cout << e.empty();

	return 0;
}