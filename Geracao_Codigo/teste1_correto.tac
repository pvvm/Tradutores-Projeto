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
mov $1, 0.0
mov $2, 0.0
mov $3, $0[0]
mov $2, $3
mov $5, $0[1]
mov $6, $5[0]
mov $1, $6
mul $8, $2, $2
div $9, $1, $8
return $9
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
mov $0, 0
mov $1, 0.0
mov $2, 0.0
mov $3, 29
mov $4, 0
L8:
mov $5, &s4
mov $5, $5[$4]
print $5
add $4, $4, 1
sub $6, $3, $4
brnz L8, $6
print '\n'
scanf $1
mema $9, 2
mov $9[0], $1
mov $9[1], $0
mov $0, $9
mov $11, 31
mov $12, 0
L9:
mov $13, &s5
mov $13, $13[$12]
print $13
add $12, $12, 1
sub $14, $11, $12
brnz L9, $14
print '\n'
scanf $2
mema $17, 2
mov $17[0], $2
mov $17[1], $0
mov $0, $17
mov $19, 0.0
param $0
call calcula_imc, 1
pop $21
mov $19, $21
param $19
call classifica_imc, 1
pop $24
nop
