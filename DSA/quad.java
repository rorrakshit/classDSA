import java.lang.Math;
public class quad {
//     public static int sqrt1(float n){
//         int p=1;
//         int i=2;
//         while(i<n){
//             if(n%(i*i)==0){
//                 p*=i;
//                 n=n/(i*i);
//             }
//             else{
//                 i++;
//             }
            
//         }
//         return p;
//     }
    public static void quad(int a,int b,int c){
        float x1,x2;
        float n=((b*b)-4*a*c);
        if(n>0){
            x1=(float) (((-b)+(Math.sqrt(n)))/(2.0*a));
            x2=(float) (((-b)-(Math.sqrt(n)))/(2.0*a));
            System.out.println(x1+" "+x2);
        }
        else if(n<0){
            float m1=(float) ((float) (Math.sqrt(-n))/(2.0*a));
            float m2=(float) ((-b)/(2.0*a));
           
            System.out.println(m2+"+i"+m1);
            System.out.println(m2+"-i"+m1);
        }
        else{
            System.out.println((float) (-b)/(2*a));
        }
        
    }

    public static void main(String[] args){
        quad(7,6,2);
        
    }
}
