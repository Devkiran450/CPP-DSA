import java.util.Scanner;
class fLogic
{
    private int n;
    private int fact=1;
    public void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        n=sc.nextInt();
        sc.close();
    }
    public void calc()
    {
        while(n!=0)
        {
            fact*=n;
            n-=1;
        }
    }
    public void disp()
    {
        System.out.println("The factorial is "+fact);
    }
}
public class factorial 
{
    public static void main(String[] args)
    {
        fLogic f1=new fLogic();
        f1.input();
        f1.calc();
        f1.disp();
    } 
}
