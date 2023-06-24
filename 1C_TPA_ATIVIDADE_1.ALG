Algoritmo "atividade 1"

// Descrição   : Calculador Salário 1
// Autor(a)    : André Luís N°2 Henrique Marques N°16
Var
   nome:caracter
   idade: inteiro
   cargo:caracter
   salario, SBR, gt, SL: real


Inicio
   Escreva ("nome: ")
   Leia (nome)
   Escreva ("idade: ")
   Leia (idade)
   Escreva ("cargo: ")
   Leia (cargo)
   Escreva ("salário: ")
   Leia (salario)

   SBR:= salario*(138/100)
   Escreval ("Salário Bruto Reajustado: ", SBR)
   gt:= SBR*(120/100)
   Escreval ("Gratificação: ", gt)
   SL:= gt*(85/100)
   Escreval ("Salário líquido: ", SL)

Fimalgoritmo