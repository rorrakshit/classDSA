public class day85 {
    static void prime(int n){
        int i=2;
        if(n==1){
            System.out.print(n);
        }
        
        while(n>1){
           
            if(n%i== 0){
                
                System.out.print(i+" ");
                n/=i;
            }
            else{
                i++;
            }
            
        }
        
    }
    public static void main(String[] args) {
        int n=11;
        for(int i=1;i<=n;i++){
            prime(i);
            System.out.println();
        }
        
    }
}
