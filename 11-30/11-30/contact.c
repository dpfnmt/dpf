#define _CRT_SECURE_NO_WARNINGS 1

#include " contact.h"

void InitContact(Contact* pcon)
{
       assert(pcon != NULL)
	   pcon ->sz =0;
	   pcon->capacity=DEFAULT_SZ;
	   pcon->data =(PenInfo*)malloc(pcon->capacity*sizeof(PenInfo));
	   memset(pcon->dadt, 0 ,pcon->capacity*sizeof(PenInfo));
	   Loacontact(pcon);
}

void DestoryContact(Contact* pcon)
{
    assert( pcon != NULL);
	SaveContact(pcon);
	free(pcon->data);
	pcon->data = 0;
	pcon->sz = 0;
	pcon->capacity = 0;
}
void AddContact(Contact* pcon)
{
    assert(pcon);

}