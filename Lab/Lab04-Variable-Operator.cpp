/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน 
    , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน 
    พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด  

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374000.00
*/
#include <stdio.h>

int main() {

     //--| YOUR CODE HERE
    
    int EmployeesID [10] ;
    float  hrs ;
    float Salary  ;
    

    printf( "Input the Employees ID : \n ") ;
    scanf( "%s", &EmployeesID ) ;
    printf( "Input the working hrs : \n ") ;
    scanf( "%f", &hrs ) ;
    printf( "Salary amount/hr : \n ") ;
    scanf( "%f", &Salary ) ;
    printf( "Expected Output : \n " ) ;
    printf( "Employees ID = %s\n",EmployeesID ) ;
    printf( "Salary = U$ %0.2f",Salary *  hrs ) ;
    
    return 0 ;
}//end main function