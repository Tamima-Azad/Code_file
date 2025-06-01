 import java.util.Scanner;

 public float area(int r){
        return (float)3.1416*r*r;
    }
    public float circumfereance(int r){
        return 2*(float)3.1416*r;
    }
    public static void main(String[] args){
        circle_area ac=new circle_area();
        Scanner sc=new Scanner(System.in);
        int radius=sc.nextInt();
        float a=ac.area(radius);
        float b=ac.circumfereance(radius);
         System.out.print("Area: ");
        System.out.println(a);
        System.out.print("circumfereance: ");
        System.out.println(b);
    }
