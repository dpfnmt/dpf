#define _CRT_SECURE_NO_WARNINGS 1
menu()
{
     printf("************************************\0");
     printf("******  1. add       2. del    *****\0");
     printf("******  3. search    4. modify *****\0");
     printf("******  5. show      6. empty  *****\0");
     printf("******  7. sort      8. exit   *****\0");
     printf("************************************\0");
}
void test()
{
      int input=0;
      Contact con;
	  InitContact(&con);
	  do
	  {
	     menu();
		 printf("ÇëÑ¡Ôñ:>");
		 scanf("%d",&input);
		 switch(input)
		 {
		   case ADD:
			    ADDContact(&con);
				break;
		   case DEL:
			    DELContact(&con);
				break;
		   case SEARCH:
				break;
		   case MODIFY:
				break;
	       case SHOW:
			    SHOWContact(&con);
				break;
		   case EMPTY:
				break;
		   case SORT:
				break;
		   case EXIT:
				break;
		   default:
			   printf("Ñ¡Ôñ´íÎó\n");
			   break;
			    
		 }
	  }while(input);

}


#include<stdio.h>
{
	test();
   return 0;
}