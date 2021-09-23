import java.util.Scanner;
class pNo
{
    private int i=2;
    private int j;
    private int flag;
    private int c=0;
    private int m=1;
    public void disp(int n)
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
            {c++;}
            if(c==(n/2))
            {break;}
            i++;
        }
        System.out.println(i);
    }
}
class fib
{
    private int n1=0;
    private int n2=1;
    private int n3;
    private int c=1;
    private int flag=1;
    public void disp(int n)
    {
        while(c!=n)
        {
            n3=n1+n2;
            n1=n2;
            n2=n3;
            c+=2;
            flag=0;
        }
        if(flag==0)
        {System.out.println(n3);}
        else
        {System.out.println(flag);}
    } 
}
public class series
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the term you want to see:");
        int n=sc.nextInt();
        sc.close();
        if(n%2==0)
        {
            pNo p1=new pNo();
            p1.disp(n);
        }
        else
        {
            fib f1=new fib();
            f1.disp(n);
        }
    }

}
