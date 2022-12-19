#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

int funcaoPrimoDoida(unsigned long int num)
{
    int qt_primos, k = 0, raiz_number = sqrt(num), isPrime = 1;
    qt_primos = raiz_number - 1;

    int *primes = (int *)malloc((raiz_number + 1) * sizeof(int));

    for (int j = 0; j <= raiz_number; j++)
        primes[j] = 0;

    for (int i = 2; i <= raiz_number; i++)
    {
        if (primes[i] == 0)
            for (int j = i * 2; j <= raiz_number; j += i)
                if (primes[j] == 0)
                {
                    primes[j] = j;
                    qt_primos--;
                }
    }

    int *lista_primos = (int *)malloc(qt_primos * sizeof(int));

    for (int i = 2; i <= raiz_number; i++)
    {
        if (primes[i] == 0)
            lista_primos[k++] = i;
    }

    for (int i = 0; i < qt_primos; i++)
        if (num % lista_primos[i] == 0)
        {
            isPrime = 0;
            break;
        }
    return isPrime;
}

int main()
{
    int deuCerto = 0;
    int sair = 1;

    vector<int> primos;

        unsigned long int num;
        scanf("%ld", &num);

        for (int u = 2; u < num && sair; u++)
        {

            if (funcaoPrimoDoida(u))
            {
                primos.push_back(u);
                
                for (int aux : primos)
                {
                    if (primos.back() * aux == num)
                    {
                        deuCerto = 1;
                        sair = 0;
                    }
                }
            }
        }
        
        printf("%d\n", deuCerto);

        primos.clear();
        sair = 1;
        deuCerto = 0;
    
}