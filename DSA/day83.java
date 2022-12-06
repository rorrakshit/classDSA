public class day83 {
    static void add1(int n){
        int m=n;
        while(m>0){
            n=m;
            int s=0;
            while(n>0){
                int t=n%10;
                s+=t;
                n/=10;
            }
            m=s;
            if((m/10)==0){
                break;
            }

        }
        System.out.println(m);
    }
    public static void main(String[] args) {
        add1(2198);
    }
    
}
