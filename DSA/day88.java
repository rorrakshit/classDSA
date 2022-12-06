import java.util.Scanner;

class day88{
    static int count(int n){
        int p=1;
        while(n>0){
            n=n-p;
            p++;
        }
        return p-1;
    }
    static void triangle(int n){
        int a=2*(n-1);
        float A=(1.73f/4)*a*a;
        System.out.println("Area is: "+A);
    }
    public static void main(String[] args) {
        System.out.print("Enter total no. of coins: ");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=count(n);
        triangle(m);
        // System.out.println(m);
    }
}