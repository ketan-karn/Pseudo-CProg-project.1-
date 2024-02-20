//GROUP 6 
//CIVIL CD 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //system() is used to customize console
#include<math.h> //abs() function is used


//to find the sum of two numbers 
void sum_of_2(){
	int x,y;
	printf("Enter the 1st number:");
	scanf("%d",&x);
	printf("\nEnter the 2nd number:");
	scanf("%d",&y);
	int sum=x+y;
	printf("\nThe sum of %d & %d is %d.\nThank You\3\3\3",x,y,sum);
}

//to find the simple interst.
void simple_interest(){
	int p,t,r,si;
	printf("\nEnter the principal amount:");
	scanf("%d",&p);
	printf("\nEnter the Time:");
	scanf("%d",&t);
	printf("\nEnter the Rate:");
	scanf("%d",&r);
	si=(p*t*r)/100;
	printf("\nThe Simple interest is %d.\nThank You\3\3\3",si);	
}

//print the fibonacci series upto n terms
void fibonacci_series(){
	int a=0,b=1,c,i,n;
	printf("\nEnter the number for how many digits you want to print fibonacci number:");
	scanf("%d",&n);
	printf("\nThe required fibonacci numbers are %d,%d",a,b);
	for(i=2;i<=n;i++){
		c=a+b;
		b=c;
		a=b;
		printf(",%d",c);
	}
	printf(".\nThank You\3\3\3");
}

//reverse the given number.
void reverse_number(){
	int reverse=0,last,num;
	printf("\nEnter the number: ");
	scanf("%d",&num);
	while(num>0){
		last=num%10;
		reverse=reverse*10+last;
		num=num/10;
	}
	printf("\nThe reverse of the number is %d.\nThank You\3\3\3",reverse);
}

//to check if the given number is odd or even.
void odd_even(){
	int a;
	printf("\nEnter the number:");
	scanf("d",&a);
	if(a%2==0){
		printf("\nThe given Number is even.\nThank You\3\3\3");
	}
	else{
		printf("\nThe given Number is odd.\nThank You\3\3\3");
	}
}

//to find the prime factors of the number
void prime_factor(){
	int number,factor=2;
	printf("\nEnter the number to find its prime factor:");
	scanf("%d",&number);
	while(number>0){
		while(number%factor==0){
			printf("\n%d is the prime factor.",factor);
			number=number/factor;
		}
		factor=factor+1;
	}
		printf("\n\nThank You\3\3\3");
}

//to calculate the electricity bill.
//Rs20 for the first 20 Units, 
//Rs8 for next 100 per Units, 
//Rs10 for further anything more.
void electricity_bill(){
	int unit,first20=80,next100=8,further=10,total;
	printf("\nEnter the unit consumed.");
	scanf("%d",&unit);
	if(unit<=20){
		total = first20;
		printf("Your Total bill is %d",total);
	}
	else if(unit<=120){
		total = first20 + (unit-20)*next100;
		printf("Your Total bill is %d",total);
	}
	else{
		total = first20 + 100*next100 + (unit-120)*further;
		printf("Your Total bill is %d.\nThank You\3\3\3",total);
	}
}

//to find the largest number among  given three numbers
void largest_among3(){
	int a,b,c;
	printf("\nEnter the 1st number:");
	scanf("%d",&a);
	printf("\nEnter the 2nd number:");
	scanf("%d",&b);
	printf("\nEnter the 3rd number:");
	scanf("%d",&c);
	if(a>b && a>b){
		printf("\n%d is the largest among all.\n\nThank You\3\3\3",a);
	}
	else if(b>a && b>c){
		printf("\n%d is the largest among all.\n\nThank You\3\3\3",b);
	}
	else{
		printf("\n%d is the largest among all.\n\nThank You\3\3\3",c);
	}
}

//to find the factorial of the given number
void factorial(){
	int number,i,fact=1;
	printf("\nEnter the number to find the factorial: ");
	scanf("%d",&number);
	for(i=0;i<number;i++){
		fact = (fact*(number-i));
	}
	printf("\nThe factorial is %d.\n\nThank You\3\3\3",fact);
}

//to find the sum of the series upto n terms(natural numbers)
void sum_of_series(){
	int n,sum;
	printf("\nEnter the number to what term you want to get sum:");
	scanf("%d",&n);
	sum = n*(n+1)/2; //formula for sum of n natural numbers
	printf("\n%d is the sum of numbers to % terms.\n\nThank You\3\3\3",sum,n);
}

//to check if the given number is positive or negative
void positive_negative(){
	int a;
	printf("\nEnter the number");
	scanf("%d",&a);
	if(a==abs(a)){
		printf("\n%d is the positive number.\n\nThank You\3\3\3",a);
	}
	else{
		printf("\n%d is the negative number.\n\nThank You\3\3\3",a);
	}
}

//to count the numbers of digit in the given number given by user
void count_number(){
	int num,count=0;
	printf("\nEnter the number:");
	scanf("%d",&num);
	while(num>0){
		num=num/10;
		count++;
	}
	printf("\nThe number of the digits in the number is %d.\n\nThank You\3\3\3",count);
}

// to find the LCM of given two numbers
void LCM(){
	int a,b,lcm,c;
	printf("\nEnter the first number: ");
	scanf("%d",&a);
	printf("\nEnter the second number: ");
	scanf("%d",&b);
	if(a>b){
		c=a;
	}
	else{
		c=b;
	}
	while(1){
		if(c%a==0 && c%b==0){
			lcm=c;
			printf("\n%d is the lcm of the given numbers.\n\nThank You\3\3\3",lcm);
			break;
		}
		c++;
	}
}

//to find the HCF of given two numbers
void HCF(){
	int a,b;
	printf("\nEnter the first number:");
	scanf("%d",&a);
	printf("\nEnter the second number:");
	scanf("%d",&b);
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	printf("%d is the HCF of the numbers.\nThank You\3\3\3",a);
}

//Read n numbers from the user and calculate its sum.
void read_n_sum(){
	int n,sum=0,i,temp;
	printf("\nEnter how many numbers you wanna add:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\nEnter the number: ");
		scanf("%d",&temp);
		sum=temp+sum;
	}
	printf("\n%d is the sum of those numbers.\nThank You\3\3\3",sum);
}

void display_menu(){
//	printf("\n\n\n\t\3\3\3\3\3\3\3\3\3\3\3\3");
	printf("\n\n\n0.Exit");
	printf("\n1.Find sum of two numbers.");
	printf("\n2.Find Simple Interest.");
	printf("\n3.Find the Fibonacci Series.");
	printf("\n4.Reverse the given number.");
	printf("\n5.Check odd or even.");
	printf("\n6.Find the prime factor.");
	printf("\n7.Find the electricity bill.");
	printf("\n8.Find the largest number among three.");
	printf("\n9.Find the factorial of the number.");
	printf("\n10.Find the sum of the series.");
	printf("\n11.check the number is Positive or Negative.");
	printf("\n12.Count the number of digits in the number.");
	printf("\n13.Find the lcm of two numbers.");
	printf("\n14.Find the HCF of the two numbers.");
	printf("\n15.Read n numbers and find their numbers.");
}

int main(void){
	system("color 6B");
	int option;
	start:
//	clrscr();
//	system("cls");
		do{
			display_menu();
	printf("\n\n\nPlease! enter any option you want frome above menu: ");
	scanf("%d",&option);
	switch(option){
		case 0:
		break;
		case 1:
		sum_of_2();
		break;
		case 2:
		simple_interest();
		break;
		case 3:
		fibonacci_series();
		break;
		case 4:
		reverse_number();
		break;
		case 5:
		odd_even();
		break ;
		case 6:
		prime_factor();
		break;
		case 7:
		electricity_bill();
		break;
		case 8:
		largest_among3();
		break;
		case 9:
		factorial();
		break;		
		case 10:
		sum_of_series();
		break;
		case 11:
		positive_negative();
		break;	
		case 12:
		count_number();
		break;
		case 13:
		LCM();
		break;
		case 14:
		HCF();
		break;
		case 15:
		read_n_sum();
		break;
		default:
		printf("Please Enter Valid Option(from 0-17)");
			
	}		
		}while(option!=option);
	goto start;
}