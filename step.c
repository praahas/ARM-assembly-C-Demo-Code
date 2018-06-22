//To interface Stepper motor with ARM processor--ARM7TDMI/LPC2148. Write a program to rotate stepper motor.
/*
THE PORT PINS P1.20,P1.21,P1.22 & P1.23 ARE CONNECTED TO THE 4 PINS OF THE STEPPER MOTOR
THE PINS HAVE TO BE SUCCESSIVLEY ACTIVATED TO CAUSE ROTATION OF THE SHAFT BY ROTATING THE ROTOR OF THE STEPPER MOTOR
*/
#include <LPC21xx.h>
void clock_wise(void) ;
void anti_clock_wise(void) ;
unsigned  int var1 ;
unsigned long int i = 0 , j = 0 , k = 0 ;

int main(void)
{
	PINSEL2 = 0x00000000;			     //P1.20 to P1.23 GPIO
	IO1DIR |= 0x00F00000 ;		                   //P1.20 to P1.23 made as output
	
	while(1)
	{	
		for( j = 0 ; j < 50 ; j++ )		   //50 times in Clock wise Rotation
		clock_wise() ;			   //rotate one round clockwise
		for( k = 0 ; k < 65000 ; k++ ) ;   	   //Delay to show  anti_clock Rotation 	   
		for( j=0 ; j < 50 ; j++ )      		   //50 times in  Anti Clock wise Rotation
			anti_clock_wise() ;             //rotate one round anticlockwise
		for( k = 0 ; k < 65000 ; k++ ) ;          //Delay to show ANTI_clock Rotation 	
	} 							

}// End of main 								

void clock_wise(void)
{
	var1 = 0x00080000;         		  //For Clockwise
    for( i = 0 ; i <= 3 ; i++ )      		                // for A B C D Stepping
	{
		var1 <<= 1 ;
		IO1CLR =0x00F00000 ;	               //clearing all 4 bits
		IO1SET = var1 ;		              //setting particular bit
		 for( k = 0 ; k < 3000 ; k++ );         //for step speed variation      
	}

}

void anti_clock_wise(void)
{
	var1 = 0x00800000 ;      		 	//For Anticlockwise
	IO1CLR =0x00F00000 ;			//clearing all 4 bits
	IO1SET = var1 ;
	for( k = 0 ; k < 3000 ; k++ ) ; 
   	 for( i = 0 ; i < 3 ; i++ )      		// for A B C D Stepping
   		{
			var1 >>=1;	 	//rotating bits 
		 	IO1CLR =0x00F00000 ;  	// clear all bits before setting
			IO1SET = var1 ;		// setting particular bit
        for( k = 0 ; k < 3000 ; k++ ) ; 			//for step speed variation 
		}  
}
