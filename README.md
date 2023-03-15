# JackTunado
Primeiro Laboratório de Algorítimos e Estrutura de Dados
Foi proposto a construção de um código que conseguisse reunir as informações de um arquivo que seriam passados como matriz,
e a partir disso conseguir transformar os dados em números inteiros e utilizar o algoritimo guloso, para dessa forma chegar ao objetivo,
que seria a ultima posição da diagonal principal. 
# Funcionamento
O algoritimo se comporta o tempo todo como um radar, que sempre confere as 5 posições disponíveis: Abaixo, Direita, Diagonal direita, Diagonal esquerda e Atrás.
após verificar todas essas posições, e encontrar a que possui maior valor, ele se moverá para aquela posição.
Caso ocorra de todas as posições serem iguais, ele sempre se moverá para baixo, mirando chegar na ultima linha, onde o único objetivo dele será andar para a direita,
até chegar no ponto definido como fim.
# Casos Especiais
Caso ocorra de nenhuma condição ser aceita durante o looping da matriz, será chamada uma função para esse caso.
Por exemplo: a posição atual é a ultima coluna, neste caso ele não pode comparar posições não existentes, como a sua direita, pois acontecerá algum erro,
sendo assim ele irá para um caso que terá como principio de entrada estar na ultima coluna.

