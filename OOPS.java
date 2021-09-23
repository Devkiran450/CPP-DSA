import java.util.Scanner;
class circle
{
    private String name;
    private String colour;
    private int r;
    public void set()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("\nEnter The name of the circle:");
        name=sc.nextLine();
        System.out.println("\nEnter The colour of the circle:");
        colour=sc.nextLine();
        System.out.println("\nEnter The radius of the circle:");
        r=sc.nextInt();
    }
    public void disp()
    {
        System.out.println("\nThe name of the circle is "+name);
        System.out.println("\nThe colour of the circle is "+colour);
        System.out.println("\nThe radius of the circle is "+r);   
    }
}
public class OOPS
{
    public static void main(String[] args) 
    {
        circle c1=new circle();
        circle c2=new circle();
        c1.set();
        c2.set();
        c1.disp();
        c2.disp();
    }
}
