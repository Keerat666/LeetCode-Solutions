import java.util.Scanner;
class Palindrome{  
 public static void main(String args[]){  
 int rem,sum=0,temp, n;    
Scanner sc = new Scanner(System.in);
 System.out.println("Please enter a number to check if its palindrome or not");
 n = sc.nextInt();
  temp=n;    
  while(n>0){    
   rem=n%10; 
   sum=(sum*10)+rem;    
   n=n/10;    
  }    
  if(temp==sum)    
   System.out.println("palindrome number ");    
  else    
   System.out.println("not palindrome");    
}  
}  
