#include<stdio.h>
#include<string.h>
struct Employee
{
  int i, ID, age, basic, expi;
  float DA, tax, Final_salary, Net_salary, Gross_salary, increment,
    salaryslip, HRA, MA, P_T, I_T;
  char type, dep;
};
int
main ()
{
  int i,n;
  char type;
  struct Employee e1[2000];
  printf ("Enter the no. of employees:\n");
  scanf ("%d", &n);

  for (int i = 0; i < n; i++)
    {
      printf ("**Details of employee_ID** %d\n", i + 1);

      printf ("Enter employee_ID:\n");
      scanf ("%d", &e1[i].ID);
      printf ("Enter age:\n");
      scanf ("%d", &e1[i].age);
      printf ("Enter type:\n");
      scanf ("%s", &e1[i].type);
      printf ("Enter dep:\n");
      scanf ("%s", &e1[i].dep);
      printf ("Enter expi:\n");
      scanf ("%d", &e1[i].expi);
      printf ("Enter HRA:\n");
      scanf ("%f", &e1[i].HRA);
      printf ("Enter MA:\n");
      scanf ("%f", &e1[i].MA);
}
  for (i = 0; i < n; i++)
    {
      if (type == 'P')
	{

	  e1[i].basic = 1000 * 365 + 1000 * e1[i].expi;

	}

      else

	{

	  e1[i].basic = 400 * 365 + 1000 * e1[i].expi;

	}
 
      if (e1[i].basic != 0)
	{
	  e1[i].DA = 1.1 * e1[i].basic;
	  e1[i].tax = 0.2 * e1[i].basic + e1[i].DA;
	  e1[i].Final_salary = e1[i].basic + e1[i].DA - e1[i].tax;
	  e1[i].Gross_salary = e1[i].basic + e1[i].HRA + e1[i].DA + e1[i].MA;

	  e1[i].I_T = 0.2 * e1[i].Gross_salary;

	  e1[i].P_T = 200;

	  e1[i].Net_salary =
	    (e1[i].basic + (e1[i].HRA + e1[i].DA + e1[i].MA) -
	     (e1[i].P_T + e1[i].I_T));
	}
    }

  for (int i = 0; i < n; i++)
    {
      printf ("****Employee Details***\n");
      printf ("The values are ID : %d\n", e1[i].ID);
      printf ("The values are age : %d\n", e1[i].age);
      printf ("The values are type : %c\n", e1[i].type);
      printf ("The values are dep : %c\n", e1[i].dep);
      printf ("The values are expi: %d\n", e1[i].expi);
      printf ("\n");
      printf ("***Employee salary slip***\n");
      printf ("HRA: %f\n", e1[i].HRA);
      printf ("MA: %f\n", e1[i].MA);
      printf ("The calculated basic : %d\n", e1[i].basic);
      printf ("The calculated DA is : %f \n", e1[i].DA);
      printf ("The calculated tax is : %f \n", e1[i].tax);
      printf ("The calculated P_T is : %f\n", e1[i].P_T);
      printf ("The calculated I_T is : %f", e1[i].I_T);
      printf ("The calculated Final_salary is : %f \n", e1[i].Final_salary);
      printf ("The calculated Gross_salary: %f\n", e1[i].Gross_salary);
      printf ("The calculated Net_salary: %f\n", e1[i].Net_salary);
    }

  return 0;
}
