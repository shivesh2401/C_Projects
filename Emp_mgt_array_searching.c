#include<stdio.h>
float binarySearch(float array[], float x, float low, float high)
{
  if (high >= low) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (array[mid] == x)
      return mid;

    // Search the left half
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    // Search the right half
    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

int main()
{
    int i,n;
    float employee_ID1,employee_ID[1000],age[1000],basic[1000],expi[1000],DA[1000],tax[1000],Finalsalary[1000],increment[1000],
    salaryslip[1000],HRA[1000],MA[1000],P_T[1000],I_T[1000],Gross_salary[1000],Final_salary[1000], Net_salary[1000];
    char type[50],dep[50];
    printf("Enter the no. of employees\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter employee_ID:\t");
    scanf("%f",&employee_ID[i]);
    printf("Enter your age:\t");
    scanf("%f",&age[i]);
    printf("Enter your type('P'-Permanent , 'T'-Temporary):\t");
    scanf("%s",&type[i]);
    printf("Enter your dep:\t");
    scanf("%s",&dep[i]);
    printf("Enter your expi:\t");
    scanf("%f",&expi[i]);
    printf("Enter HRA:\t");
    scanf("%f", &HRA[i]);
    printf("Enter MA:\t");
    scanf("%f", &MA[i]);
    
    }
    for(i=0;i<n;i++)
    {
    
     if (type[i]=='P')
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
    
   printf("#####Enter the ID of the employee you want to find the details of###### \n");
scanf("%f",&employee_ID1);
int result = binarySearch(employee_ID,employee_ID1 , 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
  printf("*BELOW ARE THE DETAILS OF THE EMPLOYEE**\n");
    printf("AGE %f\n",age[result]);
    printf("BASIC %f\n",basic[result]);
    printf("TYPE %c\n",type[result]);
    printf("DEPARTMENT %c\n",dep[result]);
    printf("EXPI %f\n",expi[result]);
    printf("DA %f \n", DA[result]);
    printf("TAX %f \n", tax[result]);
    printf ("HRA %f \n", HRA[result]);
    printf ("MA %f \n", MA[result]);
    printf ("P_T %f \n", P_T[result]);
    printf ("I_T %f \n", I_T[result]);
    printf ("GROSS_SALARY %f\n", Gross_salary[result]);
    printf ("FINAL_SALARY %f \n", Final_salary[result]);
    printf ("NET_SALARY %f \n", Net_salary[result]);
      return 0;
}
