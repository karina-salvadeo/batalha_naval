# batalha_naval

# Jogo de Batalha Naval em C

Este programa implementa um jogo de **Batalha Naval** em C com funcionalidades básicas de **posicionamento de navios** e **habilidades especiais** com áreas de efeito. O tabuleiro é uma matriz 10x10, e o jogo exibe áreas afetadas pelas habilidades de **Cone**, **Cruz** e **Octaedro**.

## Como Compilar e Executar

### Requisitos

- Um compilador de C (ex: GCC).
- Sistema operacional: Linux, macOS, ou Windows (com compilador adequado).

### Passos

1. **Compilar o código**:

   Se você está usando o GCC, abra o terminal ou prompt de comando e execute o seguinte comando para compilar o código: 
   
   ```
   gcc -o batalha_naval batalha_naval.c
   ```

2. **Executar o programa**:

   Após a compilação, execute o programa com o seguinte comando:

   ```
   ./batalha_naval
   ```
   

O programa irá exibir o tabuleiro 10x10 com os navios e as áreas de efeito das habilidades. As áreas afetadas pelas habilidades serão indicadas com o valor 5 e os navios com o valor 3.

## Exemplos de Execução
Após a execução, o programa exibe o tabuleiro da seguinte forma:

Tabuleiro:
0 0 3 0 0 0 0 0 0 0 
0 3 3 3 0 0 0 0 0 0 
0 3 3 3 0 0 0 0 0 0 
3 3 3 0 0 0 0 0 0 0 
3 0 0 0 0 0 0 0 0 0 
3 3 3 3 0 0 0 0 0 0 
0 3 3 3 0 0 0 5 5 0 
0 0 3 0 0 0 5 5 5 0 
0 0 3 0 0 5 5 5 0 0 
0 0 0 5 5 5 0 0 0 0 

Significado dos números:
0: Água

3: Navio

5: Área afetada pela habilidade

