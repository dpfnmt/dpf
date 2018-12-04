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

#define MAX 1000

#define MAX_NAME 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

#define DEFAULT_SZ 3
#define INC_SZ 2


void InitContact(Contact* pcon);
void DestoryContact(Contact* pcon);
void AddContact(Contact* pcon);






#endif  //__CONTACT_H__