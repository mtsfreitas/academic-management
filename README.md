# academic-management

# O objetivo deste projeto é o desenvolvimento de um sistema de gestão acadêmica de uma escola. O sistema possui as seguintes funcionalidades:

## 1. 
Cadastramento de estudantes: deve ser possível inserir um estudante no sistema, com os dados de nome, nome do pai, nome da mãe, data de nascimento, endereço. Para cada aluno inserido, deve ser gerado um número de matrícula único para o estudante.

## 2. 
Cadastramento de professores: deve ser possível inserir um professor no sistema, com os dados de nome, endereço, área (Exatas, Humanas, Biológicas,…), salário por hora.

## 3. 
Cadastramento de turmas: o cadastramento de uma turma envolve alocar um professor para um grupo de alunos. A turma deve ter um professor, uma lista de alunos, um código único, o ano que está sendo ofertada.

## 4. 
Lançamento de notas: para lançar as notas, deve-se escolher a turma e, para cada aluno da turma, lançar as notas. Um aluno pode ter várias notas ao longo do ano.

## 5. 
Geração de boletim: ao escolher uma turma, deve ser possível gerar o boletim para todos os alunos da turma. O boletim deve mostrar, para cada aluno, o nome, a matrícula e a média das notas. Deve ser apresentado se o aluno está aprovado se a média for maior ou igual a 60, ou reprovado se a média for menor que 60.

## 6. 
Listagem e alteração de estudantes: deve ser possível listar todos os estudantes de uma turma. Ao selecionar um estudante, deve ser possível alterar os seus dados.

## 7. 
Listagem e alteração de professores: deve ser possível listar todos os professores da escola. Ao selecionar um professor, deve ser possível alterar os seus dados. 

# Implementação

Foi seguido o padrão de software modularizado em Arquivos de Cabeçalho e arquivos de Código-Fonte, que isola as regras de negócios da lógica de apresentação, a interface com o usuário. Possibilitando a divisão do projeto em camadas muito bem definidas para suas classes.

![image](https://github.com/mtsfreitas/academic-management/assets/21324690/4fe68749-0b2d-4d80-9c79-d98f5714a141)

**Arquivos de Cabeçalho:** É responsável por interpretar as ações de entrada através do mouse e teclado realizadas pelo usuário. Enviando essas ações para o para a janela de visualização onde serão realizadas as operações necessárias.

**Arquivos de Código-Fonte:** É o coração da execução, responsável por tudo que a aplicação vai fazer a partir dos comandos que controlam um ou mais elementos de dados, respondendo a perguntas sobre o sua condição e a instruções para mudá-las. Contém a classe principal com o método main para chamar a interface gráfica e alguns testes de inserções.

# Decisões de projeto
Foram utilizados estruturas de vetores (vector<>) que contém estudantes e turmas. O tratamento de erros e exceções foi feito por condições de if-else e do-while, tendo em vista um funcionamento robusto que permite executar até quando o usuário desejar.

O desenvolvimento do software na linguagem C++, utilizando a orientação objetos, possui suas pastas devidamente organizadas, inclui também o tratamento de possíveis erros que um determinado usuário possa eventualmente cometer através de estruturas de comparação.

## Software em funcionamento
![image](https://github.com/mtsfreitas/academic-management/assets/21324690/61ab7ef3-ca8b-4539-9fc8-a56c14865524)

![image](https://github.com/mtsfreitas/academic-management/assets/21324690/d05e02b7-01c7-4e8c-87f6-bf6e35cf6ce2)

