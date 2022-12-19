import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class Historia {

    public static void main(String[] args) {
        Scanner e = new Scanner(System.in);
        HashMap<Integer, Integer> tamanhos = new HashMap();
        
        while(e.hasNextInt()){
            int aux = e.nextInt();
            if(!tamanhos.containsKey(aux))
                tamanhos.put(aux, 1);
            else
                tamanhos.replace(aux, tamanhos.get(aux)+1);
        }

        ArrayList<Integer> aux = new ArrayList<>();
        aux.addAll(tamanhos.keySet());
        aux.sort(Integer::compareTo);
        
        ArrayList<Integer> aux2 = new ArrayList<>();
        for(int i = aux.size() - 1; i >= 0; i--){
            aux2.add(aux.get(i));
        }
        
        for(int key : aux2){
            System.out.println(key + " " + tamanhos.get(key));
        }
    }
}
