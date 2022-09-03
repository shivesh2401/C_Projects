#include<stdio.h>
#include <string.h>
#define maxsize 1000

 

void main()

{

    int i,n;
    int *p1;

    float age[1000],basic[1000],expi[1000],DA[1000],tax[1000],Finalsalary[1000],increment[1000],salaryslip[1000],HRA[1000],MA[1000],P_T[1000],I_T[1000],Gross_salary[1000],Final_salary[1000], Net_salary[1000];
    float employee_ID[maxsize];
    p1=&employee_ID;
    char type[50],dep[50];

    printf("Enter the no. of employees\n");

    scanf("%d",&n);                                                                                                                                                                           

    for(i=0;i<n;i++)

    {

    printf("**Details of employee_ID** %d\n", i+1);

    printf("Enter employee_ID:\n");

    scanf("%f",&employee_ID[i]);

    printf("Enter your age:\n");

    scanf("%f",&age[i]);

    printf("Enter your type('P'-Permanent , 'T'-Temporary):\n");

    scanf("%s",&type[i]);

    printf("Enter your dep:\n");

    scanf("%s",&dep[i]);

    printf("Enter your expi:\n");

    scanf("%f",&expi[i]);

    printf("Enter HRA:\n");

    scanf("%f", &HRA[i]);

    printf("Enter MA:\n");

    scanf("%f", &MA[i]);

   
    }

   

    for ( i = 0; i < n; i++)
    {
    if (type=='P')
    {

        basic[i]=1000*365+1000*expi[i];

    }

    else

    {

        basic[i]=400*365+1000*expi[i];

    }

    if (basic[i] != 0)

    {

     DA[i] = 1.1 * basic[i];

     tax[i] = 0.2 * basic[i] + DA[i];

     Final_salary[i] = ((basic[i] + DA[i]) - tax[i]);

     Gross_salary[i] = basic[i] + HRA[i] + DA[i] + MA[i];

     I_T[i] = 0.2 * Gross_salary[i];

     P_T[i] = 200;

     Net_salary[i] = (basic[i] + (HRA[i] + DA[i] + MA[i]) - (P_T[i] + I_T[i]));

    }
    }

    for(i=0;i<n;i++)

    {

    printf("****BALANCE SHEET***employee_ID\n", *p1);

    printf("BASIC %f \n", basic[i]);

    printf("DA %f \n", DA[i]);

    printf("TAX %f \n", tax[i]);

    printf ("HRA %f \n", HRA[i]);

    printf ("MA %f \n", MA[i]);

    printf ("P_T %f \n", P_T[i]);

    printf ("I_T %f \n", I_T[i]);

    printf("**TOTAL AMOUNT SPENT BY MANAGER**\n");

    printf ("GROSS_SALARY %f\n", Gross_salary[i]);

    printf ("FINAL_SALARY %f \n", Final_salary[i]);

    printf ("NET_SALARY %f \n", Net_salary[i]);

   

    

   }

}
