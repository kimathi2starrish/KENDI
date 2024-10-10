/*CALCULAION OF ELECTRICITY BILL
NAME:KENDI EDWIN KIMATHI
REG NO:CT101/G/22309/24   */


#include<stdio.h>
     int main() {
        int Customer_ID;
        char CustomerName[50];
        float bill,units;
    

        { 
            printf("Enter Customer ID: ");
            scanf("%d", &Customer_ID);
            printf("Enter Customer Name: ");

            scanf("%s", CustomerName);
            printf("Enter the Units Consumed: ");
            scanf("%f", &units);

            if (units< 200){
                bill = 1.20 * units;
            } else if (units < 400)
            {  bill  = 1.50 * units;

            } else if (units < 600)
               {bill = 1.80 * units;  
               }
              else {
                bill = units * 2.00;
              }


              if (bill > 400) {
                bill += bill * 0.15;
              }
              if (bill < 100) {
                bill = 100;
              }

        } 
         
         
         (printf("\n----- Bill summary-----\n"));    

            
              printf("Customer Name: %s\n",CustomerName);
              printf("Units Consumed: %d\n", units);
              printf("Total bill: %.2f Ksh\n", bill );

              printf("----------------------\n");
             

    
         

         return 0;

     }