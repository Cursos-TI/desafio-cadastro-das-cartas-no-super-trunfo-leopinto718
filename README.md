## Super Trunfo de Países - README
📝 Descrição
Este projeto implementa um jogo de Super Trunfo que compara atributos geográficos e econômicos entre dois países (Alemanha e Brasil). O jogador seleciona dois atributos diferentes, e o programa compara as cartas baseado na soma desses atributos.

##🛠️ Como Compilar e Executar
Requisitos
Compilador GCC instalado

Sistema operacional Linux/Windows/macOS

Compilação
bash
gcc super_trunfo.c -o super_trunfo
Execução
bash
./super_trunfo

##🎮 Como Jogar
O programa exibirá um menu com 6 atributos disponíveis

Escolha o primeiro atributo digitando seu número

Escolha um segundo atributo diferente do primeiro

O programa mostrará:

Os valores de cada atributo para ambos países

A soma dos atributos selecionados

O país vencedor baseado na maior soma

##📊 Atributos Disponíveis
Número	Atributo	Descrição
1	População	Número de habitantes do país
2	Área	Tamanho do território em km²
3	PIB	Produto Interno Bruto em milhões US$
4	Pontos turísticos	Quantidade de atrações turísticas
5	Densidade populacional	Habitantes por km²
6	PIB per capita	PIB dividido pela população
##✨ Exemplo de Jogo
Escolha o primeiro atributo para comparar:
1. Populacao
2. Area
3. PIB
4. Pontos turisticos
5. Densidade populacional
6. PIB per capita
Digite o numero da opcao: 1

Voce escolheu: Populacao

Escolha o segundo atributo para comparar:
2. Area
3. PIB
4. Pontos turisticos
5. Densidade populacional
6. PIB per capita
Digite o numero da opcao: 3

Voce escolheu: PIB

=== RESULTADOS ===

Alemanha:
- Populacao: 83200000.00
- PIB: 4226000.00
SOMA: 87426000.00

Brasil:
- Populacao: 214000000.00
- PIB: 1600000.00
SOMA: 215600000.00

=== RESULTADO FINAL ===
Soma Alemanha: 87426000.00
Soma Brasil: 215600000.00

VENCEDOR: Brasil (87426000.00 vs 215600000.00)
##📌 Observações
O jogo compara automaticamente a soma dos dois atributos selecionados

O país com maior soma vence a partida

Em caso de empate, o jogo declara "EMPATE"

O menu é dinâmico - atributos já selecionados não aparecem novamente
