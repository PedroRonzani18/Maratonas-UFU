import java.util.Scanner;

public class casa {
    public static void main(String[] args) {
        Scanner e = new Scanner(System.in);
        
        int entrada = e.nextInt();
        
        double raizDouble = Math.sqrt(entrada);
        int raiz = (int) raizDouble;
        
        if(raizDouble > raiz){
            System.out.println("Nao eh quadrado perfeito");
            System.out.println(raiz*raiz);
        }
        else{
            System.out.println("Quadrado perfeito");
            System.out.println(entrada);
        }
        
        System.out.println(raiz);
    }
}