.table

char s0[] = "Abaixo do normal"
char s1[] = "Peso ideal"
char s2[] = "Acima do peso"
char s3[] = "Obesidade grau I para cima"
char s4[] = "Digite o seu peso em quilos: "
char s5[] = "Digite a sua altura em metros: "

.code

calcula_imc:
mov $0, 0.0
mov $1, 0.0
mov $1, 
mov $0, 
mul $4, $1, $1
div $5, $0, $4
return $5
return 0.0

classifica_imc:
slt $0, #0, 18.5
brz L0, $0
mov $1, 16
mov $2, 0
L1:
mov $3, &s0
mov $3, $3[$2]
print $3
add $2, $2, 1
sub $4, $1, $2
brnz L1, $4
print '\n'
jump L2
L0:
sleq $6, 18.6, #0
inttofl $7, $6
sleq $8, $7, 24.9
mov $9, 10
mov $10, 0
L2:
mov $11, &s1
mov $11, $11[$10]
print $11
add $10, $10, 1
sub $12, $9, $10
brnz L2, $12
print '\n'
jump L3
inttofl $14, 25
sleq $15, $14, #0
inttofl $16, $15
sleq $17, $16, 29.9
mov $18, 13
mov $19, 0
L3:
mov $20, &s2
mov $20, $20[$19]
print $20
add $19, $19, 1
sub $21, $18, $19
brnz L3, $21
print '\n'
jump L4
mov $23, 26
mov $24, 0
L4:
mov $25, &s3
mov $25, $25[$24]
print $25
add $24, $24, 1
sub $26, $23, $24
brnz L4, $26
print '\n'
L5:
L6:
L7:
return 0

main:
mov $0, 0
mov $1, 0
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
scani $1
mov $8, 0.0
mov $9, 31
mov $10, 0
L9:
mov $11, &s5
mov $11, $11[$10]
print $11
add $10, $10, 1
sub $12, $9, $10
brnz L9, $12
print '\n'
scanf $8
mov $15, 0
call calcula_imc, 0
fltoint $16, 
mov $15, $16
inttofl $18, $15
param $18
call classifica_imc, 1
return 0
