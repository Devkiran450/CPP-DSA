import java.util.Scanner;
class revDiff
{
     private int num;
     private int revNum=0;
     private int dif;
     public void input()
     {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        num=sc.nextInt();
        sc.close();
     }
     public void rev()
     {
         while(num!=0)
         {
             revNum=(revNum*10)+(num%10);
             num/=10;
         }
     }
     public void calc()
     {
         if(revNum>=num)
         {
             dif=revNum-num;
         }
         else
         {
             dif=num-revNum;
         }
     }
     public void disp()
     {
         System.out.println("The difference is "+dif);
     }
}
public class diff 
{
    public static void main(String[] args) 
    {
        revDiff d1=new revDiff();
        d1.input();
        d1.rev();
        d1.calc();
        d1.disp();
    }
}
