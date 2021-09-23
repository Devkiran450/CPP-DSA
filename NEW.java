import java.util.Scanner;
public class NEW 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        System.out.println("Enter a number:");
        double d=input.nextDouble();
        System.out.println("Enter a second number:");
        int i=input.nextInt();
        System.out.print("The sum of entered numbers is "+(d+i));
        input.close();
    }
}
