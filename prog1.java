import java.util.Scanner;
class nthPrime
{
    private int i=2;
    private int j;
    private int c=0;
    private int t;
    private int m=1;
    private int flag;
    public void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter The prime number index you want to see:");
        t=sc.nextInt();
    }
    public void display()
    {
        while(m==1)
        {
            flag=0;
            for(j=2;j<=i-1;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
               c++;
            }
            if(c==t)
            {
                System.out.println(t+"th the number is "+i);
                break;
            }
            i++;
        }
    }
}
public class prog1 
{
    public static void main(String[] args)
    {   
        nthPrime n1=new nthPrime();
        n1.input();
        n1.display();
    }
}
