#include "game.h"
#include "map.h"
#include "engine.h"
#include <getopt.h>
#include <cstdlib>
#include <iostream>


void print_help(int argc, char ** argv)
{
	std::cout << "Usage: " << std::endl;
	std::cout << argv[0] << std::endl;
	std::cout << std::endl;
	std::cout << "\t-h\t--help\tDisplayes Help" << std::endl;
	std::cout << "" << std::endl;
}

int main(int argc, char ** argv)
{
	int c;
	static struct option long_options[] = {
		"help", 0, 0, 'h',
		"printmap", 0, 0, 'M',
		"exit", 0, 0, 'x'
	};
	engine e;
	int option_index = 0;
	while ((c = getopt_long(argc, argv, "hMx", long_options, &option_index))!=-1)
	{
		switch (c)
		{
			case 'h':
				print_help(argc, argv);
				break;
			case 'M':
				{
					map m;
					m.printmap();
				}
				break;
			case 'x':
				exit(0);
				break;
		}
	}
	return e.start();
}
