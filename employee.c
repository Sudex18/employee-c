#include<stdio.h>
int main(){
    int ch;
    int basic;
    float HRA,Da;
    int employee;
    float gross;
    printf("Enter the year of working of employees: /n");
    scanf("%d",&ch);
    printf("enter your choice graduate(1) or post graduate(2): /n");//graduate(1) or post graduate(2)
    scanf("%d",&ch);
    switch(ch){
        case 1:
          basic=5000;
          HRA=basic*0.4;
          Da=basic*0.9;
          gross=basic+HRA+Da;
          if (employee>=3){
            printf("total amount: %f", (gross+25000));
          }
          else{
            printf("total amount: %f", (gross));
          }
          
        case 2:
         basic=40000;
         HRA=basic* 0.25;
         Da=basic*0.70;
         gross=basic+HRA+Da;
          if (employee>=3){
            printf("total amount: %f", (gross+25000));
          }
          else{
            printf("total amount: %f", (gross));
          }

    }
    }