#ifndef __ENGINE_H
#define __ENGINE_H

#include "map.h"

class engine
{
	public:
		engine();
		int start();
	protected:
		map currentmap;
};

#else

class engine;

#endif
