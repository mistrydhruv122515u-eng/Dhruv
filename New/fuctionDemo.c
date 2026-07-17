/*return_type fuction_name(parameter){
    operation
}
    */
   #include<stdio.h>
   int calculate_salary(int salary){
    return salary+5000;
   }
    float calcuteEMI(int pa){
    return pa/12;

   }
   int main(){
     printf("\n total salary is  %d",calculate_salary(1500000));
     printf("\n total salary is  %d",calculate_salary(800000));
     printf("monthly intallment is %f",calcuteEMI(350000));

    return 0;
   }

   