# Calculadora de IMC em C

Este projeto é um programa em **C** que calcula o **IMC (Índice de Massa Corporal)** de diferentes usuários.  
Ele permite calcular repetidamente até o usuário encerrar, exibe a classificação e mostra a média geral dos IMCs no final.

## Como usar
1. Copie o código para qualquer compilador C (pode ser Dev-C++, Code::Blocks ou OnlineGDB).  
2. Compile e execute o programa.  

## Funcionalidades
- Entrada de peso e altura (aceita vírgula ou ponto como separador decimal).
- Cálculo do IMC usando a fórmula: `IMC = peso / (altura * altura)`.
- Classificação automática:
  - Abaixo do peso (< 18.5)
  - Peso normal (18.5 a 24.9)
  - Sobrepeso (25 a 29.9)
  - Obesidade (>= 30)
- Mostra a média geral dos IMCs ao final.
