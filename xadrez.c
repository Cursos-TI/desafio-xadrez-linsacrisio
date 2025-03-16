#include <stdio.h>

void moverTorre(int casas){
    if(casas >0){
        printf("Direita\n");
        moverTorre(casas-1);
    }
}

void moverBispo(int casas){
    if(casas >0){
        printf("Cima,Direita\n");
        moverBispo(casas-1);
    }
}

void moverRainha(int casas){
    if(casas >0){
        printf("Esquerda\n");
        moverRainha(casas-1);
    }
}


int main() {
int j,k,l;

// Movendo a torre para Direita //
// Usando o FOR //
printf("Movendo a torre (método 1)...\n");
for (int i = 0; i<5; i++) {
    printf("Direita\n"); 
}

// Movendo a torre para Direita //
// Usando recursividade //
printf("Movendo a torre (método 2)...\n");
moverTorre(5);


// Movendo o bispo para Cima/Direita //
// Zerando o contador j do bispo //
// Usando o WHILE //
printf("Movendo o bispo (método 1)...\n");
j=0;
while (j < 5) {
    printf("Cima, Direita\n");
    j++;
}

// Movendo o bispo para diagonal Cima,Direita //
// Usando recursividade //
printf("Movendo o bispo (método 2)...\n");
moverBispo(5);



// Movendo a rainha para Esquerda //
// Zerando o contador k da rainha //
// Usando o DO-WHILE //
printf("Movendo a rainha (método 1)\n");

k=0;
do {
    printf("Esquerda\n");
    k++;   
} while (k < 8);

// Movendo a rainha para Esquerda //
// Usando recursividade //
printf("Movendo a rainha (método 2)\n");
moverRainha(8);



// Movendo o cavalo em L (Cima,Direita) //
// 4 movimentos do cavalo //
// Usando o WHILE-FOR //
printf("Movendo o cavalo (método 1)\n");
l=4;
while (l--) {
    for (int i = 0; i<2; i++) {
        printf("Cima\n"); 
    }
    printf("Direita\n");
}

// Movendo o cavalo para Baixo,Esquerda //
// Usando FOR aninhados //
printf("Movendo o cavalo (método 2)\n");

for (int i = 0; i<5; i++) {
    for (int j = 0; j<2; j++) {
        printf("Esquerda\n"); 
    }
    printf("Baixo\n"); 
}



return 0;
}
