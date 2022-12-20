#include "first.h"
#include <string.h>
#include <stdio.h>
#include <dlfcn.h>
#include "load.h"

void LoadRun(const char * const s) 
{
	void * lib;
	void (*fun)(void);
	lib = dlopen(s,RTLD_LAZY);
	if (!lib) 
	{
		printf("cannot open library '%s'\n", s);
		return;
	}
	fun = (void (*)(void))dlsym(lib, "obrMas");
	if (fun == NULL) 
	{
		printf("cannot load function func\n");
	} else 
	{
		fun();
	}
	dlclose(lib);
}