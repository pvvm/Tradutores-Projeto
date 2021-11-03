.table

int a = 0
char s0[] = "O a de dentro maior que zero!"
char s1[] = "\n"
char s2[] = "O a global eh maior que zero!"
char s3[] = "Poxa, o a de fora nao eh maior que zero..."
char s4[] = "Poxa, os dois sao maiores que zero!!!"
char s5[] = "Nesse caso, vamos fazer um calculo...\n"

.code

funcao:
mov $0, #0
mov $1, #1
mov $2, 0
fltoint $3, 9.34
mov $2, $3
add $5, $0, $1
div $6, $5, 2
inttofl $7, $6
mul $8, $7, 50.3
inttofl $9, $2
add $10, $8, $9
sub $11, $1, $2
add $12, $11, $0
minus $13, $2
sub $14, $12, $13
add $15, $14, $1
inttofl $16, $15
slt $17, $10, $16
println $17
mul $19, 81, $2
sub $20, 90, $19
println $20
add $22, $0, $1
div $23, $22, 2
inttofl $24, $23
mul $25, $24, 50.3
inttofl $26, $2
add $27, $25, $26
sub $28, $1, $2
add $29, $28, $0
minus $30, $2
sub $31, $29, $30
add $32, $31, $1
inttofl $33, $32
slt $34, $27, $33
mul $35, 81, $2
sub $36, 90, $35
inttofl $37, $36
and $38, $34, $37
fltoint $39, $38
return $39
return 0

main:
scani a
mov $1, 0
mov $1, 0
mov $3, 0
scani $3
println $3
slt $6, 0, $3
brz L0, $6
mov $7, 29
mov $8, 0
L1:
mov $9, &s0
mov $9, $9[$8]
print $9
add $8, $8, 1
sub $10, $7, $8
brnz L1, $10
mov $12, 2
mov $13, 0
L2:
mov $14, &s1
mov $14, $14[$13]
print $14
add $13, $13, 1
sub $15, $12, $13
brnz L2, $15
add $17, $1, 1
mov $1, $17
L0:
slt $19, 0, a
brz L3, $19
mov $20, 29
mov $21, 0
L4:
mov $22, &s2
mov $22, $22[$21]
print $22
add $21, $21, 1
sub $23, $20, $21
brnz L4, $23
print '\n'
add $25, $1, 1
mov $1, $25
jump L5
L3:
mov $27, 42
mov $28, 0
L6:
mov $29, &s3
mov $29, $29[$28]
print $29
add $28, $28, 1
sub $30, $27, $28
brnz L6, $30
print '\n'
L5:
seq $32, $1, 2
brz L8, $32
mov $33, 37
mov $34, 0
L9:
mov $35, &s4
mov $35, $35[$34]
print $35
add $34, $34, 1
sub $36, $33, $34
brnz L9, $36
print '\n'
mov $38, 39
mov $39, 0
L10:
mov $40, &s5
mov $40, $40[$39]
print $40
add $39, $39, 1
sub $41, $38, $39
brnz L10, $41
print '\n'
scani a
mov $44, 0
scani $44
param a
param $44
call funcao, 2
pop $48
println $48
L8:
println a
nop
