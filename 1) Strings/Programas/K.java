package com.mycompany.k;

import java.util.Scanner;


public class K {

    public static void main(String[] args) {
        Scanner e = new Scanner(System.in);
        int q = e.nextInt();
        int tam;
        for(int i = 0; i < q; i++){
            int t = e.nextInt();
            System.out.println(t);
            String nome = e.nextLine();
            
            int aux = nome.length() - 1;
           
            
            if(aux < t){
                tam = t%aux;
            }else{
                tam = t;
            }
            
            
            
            String ini = nome.substring(1, tam+1);
            String nome1 = nome.substring(tam+1, nome.length()) + ini;
            
            System.out.println(nome1);

        }
        
        
        
        
    }
}
