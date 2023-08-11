import java.util.Scanner;

public class Area5 
{
    public static void main(String[] args)
     {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the value of side A: ");
        double A = s.nextDouble();
        System.out.print("Enter the value of side B: ");
        double B = s.nextDouble();
        System.out.print("Enter the value of side C: ");
        double C = s.nextDouble();
        double S = (A+B+C)/2.0;
        double Area = Math.sqrt(S * (S-A)*(S-B)*(S-C));
        System.out.println("Area of the triangle: " + Area);
        s.close();
    }
}
