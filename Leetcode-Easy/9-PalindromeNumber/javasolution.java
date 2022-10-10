import java.util.Scanner;
class Palindrome{  
 public static void main(String args[]){  
  int r,sum=0,temp;    
  int num;
  Scanner sc= new Scanner(System.in);
    System.out.println("Input number to check palindrome or not");
    num=sc.nextInt();
  
  temp=num;    
  while(num>0){    
   r=num%10;  
   sum=(sum*10)+r;    
   num/=10;    
  }    
  if(temp==sum)    
   System.out.println("palindrome number");    
  else    
   System.out.println("not palindrome");    
}  
}  
