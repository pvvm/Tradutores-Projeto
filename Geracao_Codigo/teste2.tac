.table

int a = 0
int teste = 0
char s0[] = "Testando essa caceta"
char s1[] = "So mais uma vez"

.code

funcao:
add $0, #0, #1
println $0
add $2, #0, #1
seq $3, #0, $2
inttofl $4, $3
return $4
return 0.0

main:
add $0, 20, 1
mov teste, $0
mov $2, 0
mov $2, a
scani a
print a
mov $2, teste
mov $7, 0
mov $7, 0
L0:
slt $9, $7, 10
brz L1, $9
mov $12, 20
mov $13, 0
L2:
mov $14, &s0
mov $14, $14[$13]
print $14
add $13, $13, 1
sub $15, $12, $13
brnz L2, $15
print '\n'
add $10, $7, 1
mov $7, $10
jump L0
L1:
param 3
fltoint $18, 7.156
param $18
call funcao, 2
pop $19
println $19
param 3
fltoint $22, 7.156
param $22
call funcao, 2
pop $23
inttofl $24, 2
add $25, $24, $23
fltoint $26, $25
mov $7, $26
println $7
mov $29, 15
mov $30, 0
L3:
mov $31, &s1
mov $31, $31[$30]
print $31
add $30, $30, 1
sub $32, $29, $30
brnz L3, $32
print '\n'
add $34, 20, 3
print $34
