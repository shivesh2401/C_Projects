#include<stdio.h>
#include<string.h>

int
main ()
{
  employee ();
}

employee ()
{
  int i, n;
  float employee_ID, ID, age, expi, basic, HRA, MA, DA, tax, Final_salary,
    I_T, P_T, Gross_salary, Net_salary;
  char type, dep;

	  printf ("**Enter employee Details**\n", i);
      printf ("\n");
      printf ("Enter employee_ID:\n");
      scanf ("%f", &ID);
      printf ("Enter age:\n");
      scanf ("%f", &age);
      printf ("Enter type:\n");
      scanf ("%s", &type);
      printf ("Enter dep:\n");
      scanf ("%s", &dep);
      printf ("Enter expi:\n");
      scanf ("%f", &expi);
      printf ("Enter MA:\n");
      scanf ("%f", &MA);
      printf ("Enter HRA:\n");
      scanf ("%f", &HRA);
    
      if (type == 'P')
	{
	  basic = 1000 * 365 + 1000 * expi;
	}
      else
	{
	  basic = 400 * 365 + 1000 * expi;
	}
      if (basic != 0)
	{
	  DA = 1.1 * basic;
	  tax = 0.2 * basic + DA;
	  P_T = 200;
	  Gross_salary = basic + HRA + DA + MA;
	  I_T = 0.2 * Gross_salary;
	  Final_salary = basic + DA - tax;
	  Net_salary = basic + (HRA + DA + MA) - (P_T + I_T);

	  printf ("***EMPLOYEE DETAILS****\n");
	  printf ("\n");
	  printf ("EMPLOYEE_ID %f \n", ID);
	  printf ("AGE %d \n", age);
	  printf ("TYPE %c \n", type);
	  printf ("DEP %c \n", dep);
	  printf ("EXPI %f \n", expi);
	  printf ("\n");
	  printf ("*****SALARY SLIP****\n");
	  printf ("HRA %f \n", HRA);
	  printf ("MA %f \n", MA);
	  printf ("DA %f \n", DA);
	  printf ("TAX %f \n", tax);
	  printf ("FINAL_SALARY %f \n", Final_salary);
	  printf ("I_T %f \n", I_T);
	  printf ("P_T %f \n", P_T);
	  printf ("Net_salary %f \n", Net_salary);
	  printf ("Gross_salary %f \n", Gross_salary);

	}
    }
