#include <stdio.h>
#include <string.h>

// Anotações a respeito dos parâmetros de uma função:
// Na declaração de parâmetros em uma função, seus tipos
// devem ser declarados separados, mesmo que possuam mesmo tipo:
// Nesse caso algo como: primeira(int a, b) daria erro;
// Para uma função pode ser passados ínumeros parâmetros, desde que sejam
// declarados; Caso contrario, se declarar 2 parâmetros, e se passar 3,
// também teríamos um erro;
int primeira(int a, int b);
// Durante a declaração de uma função, pode ser que ela não precise receber
// nenhum parâmetro; Dessa forma, temos 2 diferentes maneiras de fazer:
// Deixando os parênteses vazios ou colocando a palavra "Void";
// A grande diferençã é que se declararmos os parênteses vazios,
// se no momento de usar a função, eu passar parâmetros para ela,
// esses valores serão simplismente ignorados.
// Diferente de uma declaração feita com "void", que geraria um
// erro no momento da compilação.
float leitura();
int le_arquivo(void);
