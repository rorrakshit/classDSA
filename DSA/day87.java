public class day87 {
    static void prime(int n){
        int i=2;
        while(n>1){
            if(n%i== 0){
                
                System.out.println(i);
                n/=i;
            }
            else{
                i++;
            }
            
        }
        
    }
    public static void main(String[] args) {
        int n=30;
        prime(n);
        
    }
    
}
