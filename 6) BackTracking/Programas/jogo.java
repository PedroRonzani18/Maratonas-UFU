import java.util.Scanner;

public class jogo {

    public static void main(String[] args) {
        Scanner e = new Scanner(System.in);
        String principal = e.next();
        int qtdTeste = e.nextInt();
        String aux;
        for(int i = 0; i < qtdTeste; i++){
            aux = e.next();
            if(principal.contains(aux)) System.out.println("1");
            else System.out.println("0");
        }
    }
}
