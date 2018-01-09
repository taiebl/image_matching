
#include <iostream>

#include "matcher.h"

int main(int argc, char **argv)
{
	Matcher* matcher = new Matcher();
	
	matcher->readImage();

	matcher->run();

	return 0;
}