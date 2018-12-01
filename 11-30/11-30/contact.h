ifdef      __CONTACT_H__
#define     __CONTACT_H__
#include<string.h>
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<erron.h>


enum()
{
     ADD,
	 DEL,
	 SEARCH,
	 MODIFY,
	 SHOW,
	 EMPTY,
	 SORT,
	 EXIT
};

void InitContact(Contact* pcon);


#endif  //__CONTACT_H__