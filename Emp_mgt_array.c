#include <stdio.h>

struct employee
{
  int id;
  int age;
  int basic;
  int expi;
  int DA;
  int tax;
  int MA;
  int HRA;
  int Final_salary;
  int increment;
  int I_T;
  int P_T;
  int Gross_salary;
  int Net_salary;
  char type;
  char dep;
  
};

int
main ()
{
  int i, j;
  struct employee emp[5];

  for (i = 0; i < 5; i++)
    {

      printf ("Enter employee id:\t");
      scanf ("%d", &emp[i].id);
      printf ("Enter employee age:\t");
      scanf ("%d", &emp[i].age);
      printf ("Enter employee type ('P'- Permanent , 'T'- Temporary):\t");
      scanf ("%s", &emp[i].type);
      printf ("Enter employee dep:\t");
      scanf ("%s", &emp[i].dep);
      printf ("Enter employee expi:\t");
      scanf ("%d", &emp[i].expi);
      printf ("Enter MA:\t");
      scanf ("%d", &emp[i].MA);
      printf ("Enter HRA:\t");
      scanf ("%d", &emp[i].HRA);

      emp[i].increment = 1000;

      if (emp[i].type == 'P')
	{
	  emp[i].basic = 1000 * 365 + 1000 * emp[i].expi;
	}
      else
	(emp[i].type == 'T');
      {
	emp[i].basic = 400 * 365 + 1000 * emp[i].expi;
      }

      if (emp[i].basic != 0)
	{

	  emp[i].DA = 1.1 * emp[i].basic;
	  emp[i].tax = 0.2 * emp[i].basic + emp[i].DA;
	  emp[i].P_T = 200;
	  emp[i].Gross_salary =
	    emp[i].basic + emp[i].HRA + emp[i].DA + emp[i].MA;
	  emp[i].I_T = 0.2 * emp[i].Gross_salary;
	  emp[i].Final_salary = emp[i].basic + emp[i].DA - emp[i].tax;
	  emp[i].Net_salary =
	    emp[i].basic + (emp[i].HRA + emp[i].DA + emp[i].MA) -
	    (emp[i].P_T + emp[i].I_T);

	  for (j = 0; j < 5; j++)
	    {
	      printf ("*******Employee Details******");

	      printf ("Employee id is %d", emp[i].id);
	      printf ("Employee age is %d", emp[i].age);
	      printf ("Employee type is %s", emp[i].type);
	      printf ("Employee dep is %s", emp[i].dep);
	      printf ("basic is %d", emp[i].basic);
	      printf ("MA is %d", emp[i].MA);
	      printf ("HRA is %d", emp[i].HRA);
	      printf ("DA is %d", emp[i].DA);
	      printf ("tax is %d", emp[i].tax);
	      printf ("Gross_salary is %d", emp[i].Gross_salary);
	      printf ("P_T is %d", emp[i].P_T);
	      printf ("I_T is %d", emp[i].I_T);
	      printf ("Final_salary is %d", emp[i].Final_salary);
	      printf ("Net_salary is %d", emp[i].Net_salary);
	    }
	}
    }
  return 0;
}
