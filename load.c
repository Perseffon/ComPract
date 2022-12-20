#include "first.h"
#include <string.h>
#include <stdio.h>
#include <windows.h>
#include "load.h"

void LoadRun(const char * const s) 
{
	void * lib;
	void (*fun)(void);
	lib = LoadLibrary(s);
	if (!lib) 
	{
		printf("cannot open library '%s'\n", s);
		return;
	}
	fun = (void (*)(void))GEtProcAddress((MINSTANCE)lib, "obrMas");
	if (fun == NULL) 
	{
		printf("cannot load function func\n");
	} else 
	{
		fun();
	}
	FreeLibrary((HINSTANCE)lib);
}