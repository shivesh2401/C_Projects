#include<stdio.h>

int main(){
    
    float employee_ID,age,basic,expi,DA,tax,Finalsalary,increment,salaryslip;
    char type,dep;
    printf("Enter employee_ID:\t");
    scanf("%f",&employee_ID);
    printf("Enter your age:\t");
    scanf("%f",&age);
    printf("Enter your basic:\t");
    scanf("%f",&basic);
    printf("Enter your type('P'-Permanent , 'T'-Temporary):\t");
    scanf("%s",&type);
    printf("Enter ypur dep:\t");
    scanf("%s",&dep);
    printf("Enter your expi:\t");
    scanf("%f",&expi);
    
    if (basic != 0)
    {
     DA = 1.1 * basic;
     tax = 0.2 * basic + DA;
     Finalsalary = basic + DA - tax;
    }
    if (type=='P'){
        Finalsalary=Finalsalary+1000*365+1000*Finalsalary;
    }
    else{
        Finalsalary=Finalsalary+400*365+1000*Finalsalary;
    }
    
    
    printf("************Salary slip**********\n");
    
    printf("employee ID \t %f \n", employee_ID);
    
    printf("AGE \t\t %f\n BASIC \t %f \n TYPE \t %c \n DEP \t %c \n DA \t %f \n TAX \t %f \n FINALSALARY \t %f \n ",age,basic,type,dep,DA,tax,Finalsalary);
      
      return 0;
};
