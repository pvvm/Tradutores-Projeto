.table

char s0[] = "Abaixo do normal"
char s1[] = "Peso ideal"
char s2[] = "Acima do peso"
char s3[] = "Obesidade grau I para cima"
char s4[] = "Digite o seu peso em quilos: "
char s5[] = "Digite a sua altura em metros: "

.code

calcula_imc:
mov $0, #0
mov $1, #1
mul $2, $1, $1
div $3, $0, $2
return $3
return 0.0

classifica_imc:
mov $0, #0
slt $1, $0, 18.5
brz L0, $1
mov $2, 16
mov $3, 0
L1:
mov $4, &s0
mov $4, $4[$3]
print $4
add $3, $3, 1
sub $5, $2, $3
brnz L1, $5
print '\n'
return 1
L0:
sleq $8, 18.6, $0
sleq $9, $0, 24.9
and $10, $8, $9
brz L2, $10
mov $11, 10
mov $12, 0
L3:
mov $13, &s1
mov $13, $13[$12]
print $13
add $12, $12, 1
sub $14, $11, $12
brnz L3, $14
print '\n'
return 1
L2:
inttofl $17, 25
sleq $18, $17, $0
sleq $19, $0, 29.9
and $20, $18, $19
brz L4, $20
mov $21, 13
mov $22, 0
L5:
mov $23, &s2
mov $23, $23[$22]
print $23
add $22, $22, 1
sub $24, $21, $22
brnz L5, $24
print '\n'
return 1
L4:
slt $27, 29.9, $0
brz L6, $27
mov $28, 26
mov $29, 0
L7:
mov $30, &s3
mov $30, $30[$29]
print $30
add $29, $29, 1
sub $31, $28, $29
brnz L7, $31
print '\n'
return 1
L6:
return 0

main:
mov $0, 0.0
mov $1, 0.0
mov $2, 29
mov $3, 0
L8:
mov $4, &s4
mov $4, $4[$3]
print $4
add $3, $3, 1
sub $5, $2, $3
brnz L8, $5
print '\n'
scanf $0
mov $8, 31
mov $9, 0
L9:
mov $10, &s5
mov $10, $10[$9]
print $10
add $9, $9, 1
sub $11, $8, $9
brnz L9, $11
print '\n'
scanf $1
mov $14, 0.0
param $0
param $1
call calcula_imc, 2
pop $17
mov $14, $17
param $14
call classifica_imc, 1
pop $20
nop
