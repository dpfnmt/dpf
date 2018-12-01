#define _CRT_SECURE_NO_WARNINGS 1

#include " contact.h"

void InitContact(Contact* pcon)
{
       assert(pcon != NULL)
	   pcon ->sz =0;
	   pcon->capacity=DEFAULT_SZ;
}