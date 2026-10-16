/* Código errado:

#include <stdio.h>
#include <stdlib.h>; // não se utiliza ";" no include
int Main{} // se escreve "main" com m minusculo e não "Main", {} ao invés de () ta errado também
( // aqui é "{" ao invés de "("
    printf( Existem %d semanas no ano.,52); // ta faltando as aspas antes da ","
    cout << endl; // é melhor usar "\n" pra pular linha, esse "cout << endl" é algo que eu nem sei o que era pra fazer...
    system("PAUSE"); // eu usaria "system("PAUSE")"... o problema é que esse é um comando só pra Windows e não funciona no meu Linux, e como ele nem é necessário pra fazer o código rodar... então pode tirar
    return 0;
) // aqui é "}" ao invés de ")"
*/

// Código certo:

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    printf("Existem %d semanas no ano.\n", 52);
    
    return 0;
}