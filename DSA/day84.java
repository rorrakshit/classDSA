public class day84 {
    static int count(int n){
        int i=0;
        while(n>0){
            n/=10;i++;
        }
        return i;
    }
    static void balanced(int n){
        int m=count(n);
        if(!(m%2==0)){
        m=m/2;
        int i=0;int s1=0,s2=0;
        while(i<m){
            int p=n%10;
            s1+=p;
            n/=10;
            i++;
        }
        n/=10;
        int j=0;
        while(j<m){
            int p=n%10;
            s2+=p;
            n/=10;
            j++;
        }
        if(s1==s2){
            System.out.println("balanced");
        }
        else{
            System.out.println("unbalanced");
        }
    }
    else{
        System.out.println("invalid no.");
    }

    }
    public static void main(String[] args) {
        balanced(6439823);
    }
}
