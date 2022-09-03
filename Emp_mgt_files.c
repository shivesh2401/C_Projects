#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i, n, ID, age, basic, expi;
  float DA, tax, Final_salary, Net_salary, Gross_salary, increment,
    salaryslip, HRA, MA, P_T, I_T;
  char type[50], dep[50];
  printf("Enter number of Employees: ");
        scanf("%d",&n);
        FILE *fptr;
        fptr=(fopen("C:\\Users\\acer\\Documents\\student.txt","w"));
        if(fptr==NULL) {
                printf("\nError!");
                exit(1);
        }
        for (i=0;i<n;++i) {
            printf("\nFor Employee%d\n",i+1);
                printf("Enter employee_ID: ");
                scanf("%d",&ID);
                printf("Enter Age: ");
                scanf("%d",&age);
                printf("Enter type: ");
                scanf("%s",&type);
                printf("Enter dep: ");
                scanf("%s",&dep);
                printf("Enter expi: ");
                scanf("%s",&expi);
                printf("Enter HRA: ");
                scanf("%f", &HRA);
                printf("Enter MA: ");
                scanf("%f", &MA);
        }
         for(i=0;i<n;i++)
         {
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
	  Final_salary = basic + DA - tax;
	  Gross_salary = basic + HRA + DA + MA;

	  I_T = 0.2 * Gross_salary;

	  P_T = 200;

	  Net_salary =
	    (basic + (HRA + DA + MA) -
	     (P_T + I_T));
	}
    }
      for (int i = 0; i < n; i++)
    {
      fprintf(fptr,"\n EMPLOYEE ID %d \n AGE %d \n TYPE %s \n DEP %s \n HRA %f \m MA %f \n BASIC %d \n DA %f \n tax %f \n P_T %f \n I_T %f \n Final_salary %f \n Gross_salary %f \n Net_salary %f \n",
      ID, age, type, dep, HRA, MA, basic, DA, tax, P_T, I_T, Final_salary, Gross_salary, Net_salary);
    }
        fclose(fptr);
        return 0;
}
