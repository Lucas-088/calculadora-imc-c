#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
float peso, altura, imc;
float somaIMC = 0; // acumula todos os IMCs
int contador = 0; // conta quantos IMCs foram calculados
char opcao;
char entrada[20]; // buffer para ler peso/altura como string
printf("=== CALCULADORA DE IMC ===\n");
printf("Este programa calcula seu IMC, classifica e mostra a media geral ao final.\n\n");
do {
// Lê o peso
printf("Digite seu peso (ex: 70,5 ou 70.5): ");
scanf("%s", entrada);
// Troca vírgula por ponto
for (int i = 0; entrada[i]; i++) {
if (entrada[i] == ',')
entrada[i] = '.';
}
peso = atof(entrada); // converte para float
// Lê a altura
printf("Digite sua altura em metros (ex: 1,75 ou 1.75): ");
scanf("%s", entrada);
// Troca vírgula por ponto
for (int i = 0; entrada[i]; i++) {
if (entrada[i] == ',')
entrada[i] = '.';
}
altura = atof(entrada); // converte para float
// Valida a altura para evitar divisão por zero
if (altura > 0 && peso > 0) {
imc = peso / (altura * altura);
printf("Seu IMC e: %.2f\n", imc);
// Acumula IMC e incrementa contador
somaIMC += imc;
contador++;
// Classificação do IMC
if (imc < 18.5)
printf("Classificacao: Abaixo do peso\n");
else if (imc < 25)
printf("Classificacao: Peso normal\n");
else if (imc < 30)
printf("Classificacao: Sobrepeso\n");
else
printf("Classificacao: Obesidade\n");
} else {
printf("Valores invalidos! O calculo nao pode ser realizado.\n");
}
// Pergunta se o usuário deseja continuar
printf("\nDeseja calcular outro IMC? (s/n): ");
scanf(" %c", &opcao);
} while (opcao == 's' || opcao == 'S');
// Mostra a média geral dos IMCs
if (contador > 0) {
printf("\nMedia geral dos IMCs calculados: %.2f\n", somaIMC / contador);
} else {
printf("\nNenhum IMC valido foi calculado.\n");
}
printf("\nPrograma encerrado.\n");
return 0;
}
