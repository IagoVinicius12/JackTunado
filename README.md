# JackTunado
Primeiro Laboratório de Algorítimos e Estrutura de Dados, foi proposto a resolução de um problema de movimentação na matriz,
em que os dados eram lidos de um arquivo, os dados estavam em forma de matriz, e todos eram números, após transfomados em inteiros, 
era aplicado o algorítimo guloso, que se movimentaria nos números que tinham maior valor.

# Funcionamento
O algoritimo se comporta o tempo todo como um radar, que sempre confere as 5 posições disponíveis: Abaixo, Direita, Diagonal direita, Diagonal esquerda e Atrás.
após verificar todas essas posições, e encontrar a que possui maior valor, ele se moverá para aquela posição.
Caso ocorra de todas as posições serem iguais, ele sempre se moverá para baixo, mirando chegar na ultima linha, onde o único objetivo dele será andar para a direita,
até chegar no ponto definido como fim.

# Casos especiais
Caso, no lopping nenhuma das condições de movimento sejam atendidas, será chamada uma função de casos especiais.
Por exemplo: a posição atual está na ultima coluna, nesta posição ele não poderá comparar o valor de duas posições, pois estas não estão na matriz,
direita e diagonal direita. Dessa forma, qualquer lixo de memória não afetará o código e continuará se movendo pelo maior número que esteja dentro do vetor
de duas dimensões.
