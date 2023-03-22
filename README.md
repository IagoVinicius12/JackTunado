# JackTunado
Primeiro Laboratório de Algorítimos e Estrutura de Dados, foi proposto a resolução de um problema de movimentação na matriz,
em que os dados eram lidos de um arquivo, os dados estavam em forma de matriz, e todos eram números.
<p>Após transfomados em inteiros, 
é aplicado o algorítimo guloso, que se movimentaria nos números que tinham maior valor.
</p>

# Funcionamento
O algoritimo se comporta o tempo todo como um radar, que sempre confere as 5 posições disponíveis: 
- Abaixo(Ir para linha de baixo), 
- Direita(Ir para próxima coluna), 
- Diagonal direita,
- Diagonal esquerda,
- Atrás (Voltar para coluna anterior).

<p>Após verificar todas essas posições, e encontrar a que possui maior valor, ele se moverá para aquela que possui o maior valor.</p>
<div align="center">
<img src="https://user-images.githubusercontent.com/115949326/226216151-5f38b0f5-67bc-4159-87e7-4f9a958ea383.png" width="250px"/>
<img src="https://user-images.githubusercontent.com/115949326/226216324-b24457f6-ec53-4570-a2f4-f349ac194369.png" width="250px"/>
<img src="https://user-images.githubusercontent.com/115949326/226216428-1d8d3281-9c8d-4b17-bfa1-1332ce7c839c.png" width="250px"/>
</div>

- Mesmo que o objetivo do algoritmo esteja em seu alcance, ele ainda é um algorítimo guloso, então se moverá antes para os maiores valores, com a exceção de que ele esteja na ultima linha.
- Assim que o algorítmo percebe que está na ultima linha, seu único objetivo é se mover para a direita, até o fim.
<p>Caso ocorra de todas as posições serem iguais, ele sempre se moverá para baixo, mirando chegar na ultima linha, onde o único objetivo dele será andar para a direita,
até chegar no ponto definido como fim.</p> <p>Ao andar, ele sempre marcará a posição já passada com -1, pois a matriz será somente de números positivos, então 
não ocorrerá de por acaso, ele voltar à uma posição já passada, quando ele chegar ao fim, ele marcará o objetivo como -2.</p>
<div align="center">
<img src="https://user-images.githubusercontent.com/115949326/226203114-3da8cc28-bf17-4018-ad21-b1b017fb29d4.png" width="250px"/>
<img src="https://user-images.githubusercontent.com/115949326/226134020-0ffe6217-7e74-4272-b8d6-4d5098db4dee.png" width="250px"/>
<img src="https://user-images.githubusercontent.com/115949326/226203258-29556db6-6cdc-49a7-836a-bb41466327a6.png" width="250px"/>
</div>

# Casos especiais
Caso, no lopping nenhuma das condições de movimento sejam atendidas, será chamada uma função de casos especiais.

<p>Por exemplo: a posição atual está na ultima coluna.</p>

Nesta posição ele não poderá comparar o valor de duas posições, pois estas não estão na matriz,
direita e diagonal direita. Dessa forma, qualquer lixo de memória não afetará o código e continuará se movendo pelo maior número que esteja dentro do vetor
de duas dimensões.

# Resultados de Testes

<p>Resultados em Matriz 5x5:</p>
<div align="center">
<img src="https://user-images.githubusercontent.com/115949326/226613556-c024a58c-c471-41e7-8c90-f02084a1d83a.png" width="250px"/>
</div>

# Explicando as funções

<p>Esse algorítmo possui 3 funções na classe funcs. Essas 3 funções cada uma é necessária para a resolução do problema.</p>

- Primeira função: ler()

<p>Esta função é usada para ler a matriz do arquivo, transmitindo os dados e transformando eles para inteiros (anteriormente caracteres), assim que eles são transformados para inteiros é montada a matriz e será chamada a segunda função. Nesta função, para ler o arquivo são utilizadas várias ferramentas do C++ para conseguir extrair as informações necessárias para construção da matriz.</p>
<p>Primeiramente é lida a primeira linha do arquivo, conseguindo dessa forma ler o tamanho de todas as matrizes presentes dentro dele e as informações serão armazenadas em um vetor de caracteres. Então é usado o strtok para tokenizar tudo que foi pego do arquivo, e será passado para um vector de strings, e do vetor de string será usado a função stoi(string to int) para transformar todas as strings em inteiros e será armazenado em outro vector, que finalmente passará todas as posições para a matriz, e ela estará pronta para ser lida.</p>

- Segunda função: andar()

<p>Esta função tem o objetivo de andar pela matriz de acordo com os padrões impostos pelo algoritmo guloso. Caso haja algum caso que não seja possível resolver nesta função ou que seja um provável erro, será chamada a terceira função. Ela recebe a matriz feita pela primeira função, a partir disso a matriz é resolvida por uma série de ifs dentro de uma while cuja condição é uma variavel, quando a variável recebe 1, significa que o objetivo foi achado, e a matriz resolvida.</p>

- Terceira função: casosespeciais()

<p>Esta função é chamada assim que a segunda função não consegue resolver um caso por si só, assim que chamada haverá uma grande sequência de condições que resolverão o caso. Por exemplo, para não correr o risco de sair da matriz, caso a posição da coluna seja a última, ele não poderá andar para a próxima coluna ou pela diagonal direita.</p>

# Compilação e Execução

Esse pequeno exemplo possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
