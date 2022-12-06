public class day86 {
    static void rectangle(int r){
        float h=(1.414f*r);
        System.out.format("\"We know that maximum area rectangle enclosed in a circle is a square\"\n ");
        System.out.println("One side of rectangle is "+h+"\n area is"+(h*h));
        
    }
    public static void main(String[] args) {
        int r=8;
        rectangle(r);
    }
}
