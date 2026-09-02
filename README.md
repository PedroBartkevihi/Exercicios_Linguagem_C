# Exercícios em C

Coleção de exercícios resolvidos durante meus estudos de linguagem C. O repositório
serve como registro da minha evolução, organizado em listas que acompanham a progressão
dos conteúdos — dos primeiros programas de entrada e saída até a manipulação de strings.

## Sobre o projeto

- Cada lista reúne exercícios em torno de um tema central da linguagem.
- O enunciado de cada exercício fica no próprio código, em um comentário no início do arquivo.
- O foco é praticar lógica de programação e os recursos da linguagem, não entregar um produto final.
- O conteúdo é atualizado conforme avanço nos estudos.

Padrão adotado:

- Uma pasta por lista: `Lista1`, `Lista2`, ...
- Um arquivo por exercício, nomeado como `ExercicioNN.c` (número sempre com dois dígitos).
- Cada arquivo é independente e tem sua própria função `main`.
- Os binários compilados ficam em uma pasta `output/` dentro de cada lista e não são
  versionados (ver `.gitignore`).

## Estrutura do repositório

```text
Exercicios_Linguagem_C/
├── Lista1/                     # Exercicio01.c ... Exercicio25.c
│   ├── Exercicio01.c
│   ├── Exercicio02.c
│   ├── ...
│   └── output/                 # binários compilados (ignorado pelo Git)
├── Lista2/                     # Exercicio01.c ... Exercicio28.c
├── Lista3/                     # Exercicio01.c ... Exercicio41.c
├── Lista4/                     # Exercicio01.c ... Exercicio36.c
├── Lista5/                     # Exercicio01.c ... Exercicio24.c
├── .gitignore
└── README.md
```

## Progresso

- [x] **Lista 1** — Variáveis, entrada/saída e expressões aritméticas (25 exercícios)
- [x] **Lista 2** — Operadores lógicos e estruturas de seleção (28 exercícios)
- [x] **Lista 3** — Estruturas de repetição (41 exercícios)
- [x] **Lista 4** — Vetores e matrizes (36 exercícios)
- [x] **Lista 5** — Strings (24 exercícios)

Total: **154 exercícios** resolvidos.

## Listas de exercícios

### Lista 1 — Variáveis, entrada/saída e expressões aritméticas

Primeiros programas da linguagem: ler dados do usuário, aplicar uma fórmula e imprimir o
resultado. Os problemas envolvem cálculos geométricos, conversões de unidades, porcentagens
e bastante manipulação de números inteiros dígito a dígito (separar uma data, inverter um
número, somar algarismos) usando divisão inteira e resto.

Conceitos praticados:

- Entrada e saída com `printf` e `scanf`
- Tipos numéricos (`int`, `float`, `double`) e conversão entre eles
- Operadores aritméticos e precedência
- Divisão inteira e resto (`%`)
- Constantes com `const`
- Formatação de saída (`%.2f`, `%02d`)

### Lista 2 — Operadores lógicos e estruturas de seleção

Exercícios de tomada de decisão: validar entradas, classificar valores por faixas
(idade, IMC, conceito escolar, imposto de renda) e resolver tabelas de decisão. Aqui
também aparecem os primeiros usos de `<math.h>` para raiz quadrada, potência e fórmulas
mais elaboradas.

Conceitos praticados:

- Operadores relacionais e lógicos (`&&`, `||`, `!`)
- `if`, `else if`, `else` e condicionais aninhadas
- `switch` / `case`, incluindo `case` agrupado e `default`
- Validação de entrada e encerramento com `return`
- Funções de `<math.h>` (`sqrt`, `pow`)
- Tipo `bool` de `<stdbool.h>`

### Lista 3 — Estruturas de repetição

Foco em laços: percorrer intervalos, acumular somas, médias e percentuais, ler valores
até uma condição de parada (sentinela) e combinar laços aninhados. Inclui séries
matemáticas, progressões, Fibonacci, testes de números (primo, perfeito, capicua) e
desenho de figuras com asteriscos.

Conceitos praticados:

- `for`, `while` e `do while`
- Contadores, acumuladores, incremento e decremento
- `break` e `continue`
- Laços controlados por sentinela
- Laços aninhados
- Somatórios, séries e progressões (PA / PG)
- `long long` para resultados grandes

### Lista 4 — Vetores e matrizes

Trabalho com arranjos: preencher, percorrer, filtrar e transformar vetores, além de
operações entre dois vetores (soma, concatenação, intercalação, elementos em comum). Na
parte de matrizes há soma, multiplicação, determinante, verificação de simetria e
varreduras por diagonais. Alguns exercícios usam vetores cujo tamanho é definido em
tempo de execução.

Conceitos praticados:

- Vetores unidimensionais e bidimensionais (matrizes)
- Leitura, escrita e varredura de arranjos
- Vetores de tamanho variável (`int v[n]`)
- Inicialização com `{0}` e vetores de frequência
- Laços aninhados para percorrer matrizes
- Algoritmos clássicos: busca, contagem, deslocamento, intercalação, Crivo de Eratóstenes
- `<stdbool.h>` e `<limits.h>`

### Lista 5 — Strings

Manipulação de cadeias de caracteres implementando na mão o que normalmente viria de
`<string.h>`: medir, copiar, concatenar, buscar, inserir e remover trechos. Também há
conversão entre maiúsculas e minúsculas via código ASCII, verificação de palíndromo,
cifra de César e estatística de caracteres.

Conceitos praticados:

- Strings como vetores de `char` terminados em `'\0'`
- Leitura com `fgets` e remoção do `'\n'`
- `#define` para o tamanho máximo do buffer
- Percurso e reescrita in-place com índices de leitura e escrita
- Aritmética de caracteres pelo código ASCII
- `<ctype.h>` (`tolower`, `toupper`, `isalpha`, `isdigit`)
- Vetores de frequência e aritmética modular

## Tecnologias

- **Linguagem C** — usa recursos do padrão C99, como declaração de variável no `for`,
  vetores de tamanho variável e `<stdbool.h>`.
- **GCC** para compilação (MinGW-w64 no Windows).
- **Git** e **GitHub** para versionamento.

## Como executar

É necessário ter o GCC instalado. Cada exercício é compilado e executado de forma
independente.

Linux ou macOS:

```bash
gcc Lista1/Exercicio01.c -o exercicio
./exercicio
```

Windows (PowerShell ou Prompt de Comando):

```bash
gcc Lista1\Exercicio01.c -o exercicio.exe
.\exercicio.exe
```

A convenção do repositório é gerar os binários em `Lista<N>/output/`, pasta ignorada pelo
Git (crie-a na primeira vez, se necessário).

Os exercícios que incluem `<math.h>` precisam da flag `-lm` na compilação (Lista 2 —
exercícios 10, 12, 13 e 14; Lista 3 — exercício 14):

```bash
gcc Lista2/Exercicio12.c -o exercicio -lm
```
