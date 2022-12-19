import java.util.Locale;
import java.util.Scanner;

public class logaritmo {

    public static void main(String[] args) {
        Scanner e = new Scanner(System.in);
        Locale.setDefault(Locale.US);
        System.out.printf("%.1f\n", Math.log10(e.nextDouble()));
    }
}
