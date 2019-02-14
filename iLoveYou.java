/*
* I love you in Java
*/
public class HelloWorld{

    public static void main(String []args){
        iLoveYou(true);
    }
    
    static void iLoveYou(boolean loveIsTrue){
        while(loveIsTrue){
            System.out.println("I love you Angie!");
            //loveIsTrue = false; this never end baby
        }
    }
     
}