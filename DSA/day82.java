public class day82 {
    static int pow1(int a,int b){
        int p=1;
        for(int i=1;i<=b;i++){
            p*=a;
        }
        return p;
    }
    static void kth(int n,int k){
        int i=0;int m=1;
        while(i<k){
            m=n%10;
            i++;
            n/=10;
        }
        System.out.println(m);
    }
    public static void main(String[] args) {
        int n=pow1(2,8);
        kth(n,2);
    }
}
