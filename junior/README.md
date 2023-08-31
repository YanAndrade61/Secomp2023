# Nivel Júnior - Ideias e Soluções

Nesta seção, você encontrará uma visão geral das ideias principais para cada problema do nível júnior, juntamente com uma breve explicação sobre como resolvê-los.

## Problema 1 - Dígitos

**Descrição:** Você recebe um número inteiro N e deve determinar a frequência de ocorrência dos dígitos de 0 a 9 na sequência de números de 1 até N.

**Dica:** Para encontrar a frequência dos dígitos em um número, você pode iterar por cada dígito individual do número usando operações de módulo por 10 e divisão por 10. Isso permite que você isole e conte cada dígito. Lembre-se de usar estruturas de dados simples para guardar as contagens de cada dígito.

👉 [Solução](problema1/codigo.cpp)

## Problema 2 - Massa

**Descrição:** Você recebe a composição de uma molécula na forma de símbolos de átomos e seus respectivos números. Deve determinar a massa molar da molécula com base na frequência de cada átomo. Por exemplo, para a entrada C15HON12, a saída seria a massa molar calculada.

**Dica:** Para calcular a massa molar, leia os símbolos dos átomos e os números associados. Utilize um loop para obter o símbolo e, em seguida, continue a leitura enquanto houver dígitos, representando a quantidade desse átomo na molécula. As massas atõmicas associadas podem ser armazenadas em um dicionário.

👉 [Solução](problema2/codigo.cpp)

## Problema 3 - Chocolate

**Descrição:** Você recebe as dimensões de um chocolate, ou seja, o número de colunas e linhas, e deve determinar a quantidade mínima de cortes necessários para separar todos os pedaços de chocolate.

**Dica:** Para obter o número mínimo de cortes, comece escolhendo a orientação com maior cardinalidade (horizontal ou vertical). Execute os cortes nessa orientação para separar o chocolate em segmentos. Em seguida, faça os cortes na outra orientação para cada segmento criado anteriormente. Lembre-se de que, por exemplo , 5 colunas são separadas por apenas 4 espaços.

👉 [Solução](problema3/codigo.cpp)

## Problema 4 - Código

**Descrição:** Você recebe um texto criptografado e precisa decodificá-lo com base em operações utilizando a tabela ASCII.

**Dica:** O algoritmo de decodificação envolve subtrair 7 do valor numérico do caractere na tabela ASCII para obter o caractere original.

👉 [Solução](problema4/codigo.cpp)

## Problema 5 - Labirinto

**Descrição:** Você recebe uma sequência que indica a frequência e o caractere correspondente. Sua tarefa é imprimir um labirinto com base nessas informações.

**Dica:** Para construir o labirinto, faça a leitura da sequência enquanto o caractere atual for um dígito. Quando encontrar um caractere diferente de um dígito, imprima esse caractere a quantidade de vezes calculada pela frequência. Lembre-se de que o caractere '!' corresponde a uma quebra de linha ('\n') e o caractere 'b' representa um espaço em branco.

👉 [Solução](problema5/codigo.cpp)

## Problema 6 - Gene

**Descrição:** Você recebe um vetor sequencial de tamanho N e uma série de operações de troca em determinados intervalos. Sua tarefa é fornecer a posição atualizada de cada elemento após todas as operações.

**Dica:** Para acompanhar as mudanças mantenha duas estruturas de dados: uma para os elementos e outra para os índices correspondentes a cada elemento. Durante a troca de intervalos, percorra as estruturas, movendo-se do início ao fim e vice-versa. A cada troca de elementos nas pontas dos intervalos, atualize os índices correspondentes.

👉 [Solução](problema6/codigo.cpp)

## Problema 7 - Feedback

**Descrição:** Você recebe o número de um setor e deve imprimir o nome do responsável por esse setor.

**Dica:** Mantenha uma estrutura de dados, como um dicionário, onde o índice corresponde ao número do setor e o valor é o nome do responsável.

👉 [Solução](problema7/codigo.cpp)
