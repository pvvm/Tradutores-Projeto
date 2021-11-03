.table

int a = 0
int teste = 0
char s0[] = "c agora eh: "
char s1[] = "Vamos imprimir 10 vezes"
char s2[] = "So mais uma vez"
char s3[] = "a eh maior que 21"
char s4[] = "a eh menor ou igual a 21"

.code

repete:
mov $0, 0
mov $1, 0
mov $2, 0
mov $2, 0
mov $0, 0
L0:
slt $5, $0, 3
brz L1, $5
mov $1, 0
L2:
slt $9, $1, 2
brz L3, $9
mov $12, 12
mov $13, 0
L4:
mov $14, &s0
mov $14, $14[$13]
print $14
add $13, $13, 1
sub $15, $12, $13
brnz L4, $15
add $17, $2, 1
mov $2, $17
println $2
add $10, $1, 1
mov $1, $10
jump L2
L3:
add $6, $0, 1
mov $0, $6
jump L0
L1:
return 0

funcao:
mov $0, #0
mov $1, #1
add $2, $0, $1
println $2
add $4, $0, $1
seq $5, $0, $4
inttofl $6, $5
return $6
return 0.0

main:
add $0, 20, 1
mov $1, &teste
mov $1, $0
mov $2, 0
mov $2, a
scani a
print a
mov $2, $1
mov $7, 0
mov $7, 0
L5:
slt $9, $7, 10
brz L6, $9
mov $12, 23
mov $13, 0
L7:
mov $14, &s1
mov $14, $14[$13]
print $14
add $13, $13, 1
sub $15, $12, $13
brnz L7, $15
print '\n'
add $10, $7, 1
mov $7, $10
jump L5
L6:
param 3
fltoint $18, 7.156
param $18
call funcao, 2
pop $19
println $19
param $7
param $2
call funcao, 2
pop $23
inttofl $24, 2
add $25, $24, $23
fltoint $26, $25
mov $7, $26
println $7
mov $29, 15
mov $30, 0
L8:
mov $31, &s2
mov $31, $31[$30]
print $31
add $30, $30, 1
sub $32, $29, $30
brnz L8, $32
print '\n'
add $34, 20, 3
print $34
mov $7, 0
slt $37, 21, $7
brz L9, $37
mov $38, 17
mov $39, 0
L10:
mov $40, &s3
mov $40, $40[$39]
print $40
add $39, $39, 1
sub $41, $38, $39
brnz L10, $41
print '\n'
jump L11
L9:
mov $43, 24
mov $44, 0
L12:
mov $45, &s4
mov $45, $45[$44]
print $45
add $44, $44, 1
sub $46, $43, $44
brnz L12, $46
print '\n'
L11:
mov $48, 0
println $2
add $50, 90, 2
minus $51, 1
sub $52, $50, $51
mul $53, 2, $52
add $54, $53, $2
mov $48, $54
println $48
scani $2
mov $48, $2
println $48
call repete
pop $60
nop
