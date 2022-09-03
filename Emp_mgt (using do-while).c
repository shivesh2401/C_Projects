#include<stdio.h>

int
main ()
{

  float employee_ID, age, basic, expi, DA, tax, Final_salary, increment, MA,
    HRA, P_T, I_T, Gross_salary, salary_slip, Net_salary;
  int i, num;
  char type, dep, ex, menu, option;
  
  printf ("Enter employee_ID:\t");
  scanf ("%f", &employee_ID);
  printf ("Enter your age:\t");
  scanf ("%f", &age);
  printf ("Enter your type('P'-Permanent , 'T'-Temporary):\t");
  scanf ("%s", &type);
  printf ("Enter your dep:\t");
  scanf ("%s", &dep);
  printf ("Enter your expi:\t");
  scanf ("%f", &expi);
  printf ("Enter value of MA:\t");
  scanf ("%f", &MA);
  printf ("Ener value of HRA:\t");
  scanf ("%f", &HRA);

  increment = 1000;

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


      printf ("Enter value of 'i'\t :");
      scanf ("%d", &num);
       do
	{   if (i == 4){
	  printf ("menu \t");
	  break;
	}
	  printf ("press option '1' for Employee Details\t :");
	  printf ("press option '2' for Salary slip\t :");
	  printf ("press '3' for exit option\t :");
	  scanf ("%d", &num);
	  switch (num)
	{
	case 1:
	  printf ("**********Employee Details*******\n");

	  printf ("employee ID \t %f \n", employee_ID);

	  printf
	    (" AGE \t %f \n BASIC \t %f \n TYPE \t %c \n DEP \t %c \n EXPI \t %f \n ",
	     age, basic, type, dep, expi);
	  break;

	case 2:
	  printf ("************Salary slip**********\n");

	  printf ("employee ID \t %f \n", employee_ID);

	  printf
	    (" DA \t %f \n TAX \t %f \n HRA \t %f \n MA \t %f \n I_T \t %f \n P_T \t %f \n GROSS_SALARY \t %f \n FINAL_SALARY \t %f \n NET_SALARY \t %f \n ",
	     DA, tax, HRA, MA, P_T, I_T, Gross_salary, Final_salary,
	     Net_salary);
	  break;
	  case 3:
	  printf ("exit\t");
	  break;
	  
	  default: 
	  printf("invalid choice\t");
	  break;
	}
      break;
      }
      while (4);		// if user selects option 4
      return 0;
      }
      };
