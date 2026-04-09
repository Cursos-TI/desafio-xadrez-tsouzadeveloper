*Desafio: Movimentando as Peças de Xadrez* (Nível Aventureiro) 
♟️Este projeto é um simulador de movimentação de peças de xadrez desenvolvido em Linguagem C. 
O objetivo é exercitar a lógica de programação utilizando diferentes estruturas de repetição (for, while, do-while) e o conceito de loops aninhados.

🚀 8Objetivo do Projeto*
O código simula o deslocamento de quatro peças fundamentais no tabuleiro, seguindo regras específicas de casas e direções:
Torre: Movimentação linear para a direita.
Bispo: Movimentação diagonal (cima e direita).
Rainha: Movimentação linear para a esquerda.
Cavalo: Movimentação em "L" (2 casas para baixo e 1 para a esquerda), utilizando loops aninhados. 

🛠️ *Estruturas Utilizadas*
Para atender aos requisitos do desafio, foram aplicadas as seguintes estruturas:
for: Utilizado para a movimentação da Torre e como estrutura externa para o Cavalo.
while: Utilizado para o deslocamento do Bispo e para as sub-movimentações do Cavalo.
do-while: Utilizado para a movimentação da Rainha.
Loops Aninhados: Implementados na lógica do Cavalo para combinar movimentos verticais e horizontais em uma única sequência.

📋 *Como Executar*
Certifique-se de ter um compilador de C instalado (como gcc).
Salve o código em um arquivo chamado xadrez.c.
Abra o terminal e compile o arquivo:
bash
gcc xadrez.c -o xadrez
Use o código com cuidado.

Execute o programa:
bash
./xadrez
Use o código com cuidado.

📝 *Exemplo de Saída*
text
Movimento da Torre:
Direita (5x)

Movimento do Bispo:
Cima, Direita (5x)

Movimento da Rainha:
Esquerda (8x)

Movimento do Cavalo:
Baixo
Baixo
Esquerda
Use o código com cuidado.
