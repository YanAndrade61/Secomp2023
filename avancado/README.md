# Nivel Avançado - Ideias e Soluções

Nesta seção, você encontrará uma visão geral das ideias principais para cada problema do nível avançadp, juntamente com uma breve explicação sobre como resolvê-los.
## Problema 1 - Chave numérica

**Descrição:** Você recebe um intervalo e um conjunto de símbolos (<, >, =) e deve determinar a chave correspondente dentro deste intervalo.

**Dica:** Uma abordagem eficaz é tratar esse problema como uma busca binária guiada pelos símbolos. Se o símbolo for "<", a chave está à esquerda do ponto médio do intervalo. Se for ">", a chave estará à direita do ponto médio. E se for "=", a chave é o próprio ponto médio.

**Observação:** 33, lembre-se deste número :)

👉 [Solução](problema1/codigo.cpp)

## Problema 2 - Massa

**Descrição:** Você recebe a composição de uma molécula na forma de símbolos de átomos e seus respectivos números. Deve determinar a massa molar da molécula com base na frequência de cada átomo. Por exemplo, para a entrada C15HON12, a saída seria a massa molar calculada.

**Dica:** Para calcular a massa molar, leia os símbolos dos átomos e os números associados. Utilize um loop para obter o símbolo e, em seguida, continue a leitura enquanto houver dígitos, representando a quantidade desse átomo na molécula. As massas atõmicas associadas podem ser armazenadas em um dicionário.

👉 [Solução](problema2/codigo.cpp)
## Problema 3 - Jogo de Cartas

**Descrição:** Você recebe um vetor de números inteiros e deve determinar a maior soma sequencial possível, considerando que nenhum dois elementos adjacentes podem ser iguais.

**Dica:** Uma abordagem eficaz é usar programação dinâmica. Crie um vetor onde cada elemento representará a maior soma possível que termina na posição correspondente. A cada passo, decida se é melhor continuar a sequência anterior somando o valor atual ou começar uma nova sequência a partir do valor atual. Lembre-se da restrição de elementos adjacentes não repetidos. 

👉 [Solução](problema3/codigo.cpp)
## Problema 4 - Ruínas de SJ

**Descrição:** Você recebe uma sequência de símbolos ('{', '[', '(') que representam símbolos abertos e fechados. Sua tarefa é determinar se a sequência é segura ou não, com base na ordem e correspondência dos símbolos.

**Dica:** Uma abordagem eficaz para esse problema é usar a estrutura de dados pilha. Para cada símbolo de abertura encontrado ('{', '[', '('), empilhe-o. Quando um símbolo de fechamento é encontrado ('}', '\]', ')'), compare-o com o símbolo no topo da pilha. Se eles corresponderem como um par válido (por exemplo, '{' correspondendo a '}' e assim por diante), desempilhe o símbolo no topo da pilha. No final, verifique se a pilha, se estiver vazia, e a sequência é segura; caso contrário, não é segura.

👉 [Solução](problema4/codigo.cpp)

## Problema 5 - Labirinto

**Descrição:** Você recebe uma sequência que indica a frequência e o caractere correspondente. Sua tarefa é imprimir um labirinto com base nessas informações.

**Dica:** Para construir o labirinto, faça a leitura da sequência enquanto o caractere atual for um dígito. Quando encontrar um caractere diferente de um dígito, imprima esse caractere a quantidade de vezes calculada pela frequência. Lembre-se de que o caractere '!' corresponde a uma quebra de linha ('\n') e o caractere 'b' representa um espaço em branco.

👉 [Solução](problema5/codigo.cpp)

## Problema 6 - Gene

**Descrição:** Você recebe um vetor sequencial de tamanho N e uma série de operações de troca em determinados intervalos. Sua tarefa é fornecer a posição atualizada de cada elemento após todas as operações.

**Dica:** Para acompanhar as mudanças mantenha duas estruturas de dados: uma para os elementos e outra para os índices correspondentes a cada elemento. Durante a troca de intervalos, percorra as estruturas, movendo-se do início ao fim e vice-versa. A cada troca de elementos nas pontas dos intervalos, atualize os índices correspondentes.

👉 [Solução](problema6/codigo.cpp)
## Problema 7 - Mistério nas Estrelas

**Descrição:** Você recebe um número inteiro e deve retornar os fatores primos desse número.

**Dica:** Uma abordagem eficaz é começar calculando todos os números primos até o limite do problema, usando o Crivo de Eratóstenes ou outra técnica. Com a lista, você pode verificar os fatores primos do número fornecido realizando divisões sucessivas.

👉 [Solução](problema7/codigo.cpp)
