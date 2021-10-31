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
mov $0, 0
fltoint $1, 9.34
mov $0, $1
add $3, #0, #1
div $4, $3, 2
inttofl $5, $4
mul $6, $5, 50.3
inttofl $7, $0
add $8, $6, $7
sub $9, #1, $0
add $10, $9, #0
minus $11, $0
sub $12, $10, $11
add $13, $12, #1
inttofl $14, $13
slt $15, $8, $14
println $15
mul $17, 81, $0
sub $18, 90, $17
println $18
add $20, #0, #1
div $21, $20, 2
inttofl $22, $21
mul $23, $22, 50.3
inttofl $24, $0
add $25, $23, $24
sub $26, #1, $0
add $27, $26, #0
minus $28, $0
sub $29, $27, $28
add $30, $29, #1
inttofl $31, $30
slt $32, $25, $31
mul $33, 81, $0
sub $34, 90, $33
and $35, $32, $34
return $35
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
L5:
mov $29, &s3
mov $29, $29[$28]
print $29
add $28, $28, 1
sub $30, $27, $28
brnz L5, $30
print '\n'
L6:
seq $32, $1, 2
brz L7, $32
mov $33, 37
mov $34, 0
L8:
mov $35, &s4
mov $35, $35[$34]
print $35
add $34, $34, 1
sub $36, $33, $34
brnz L8, $36
print '\n'
mov $38, 39
mov $39, 0
L9:
mov $40, &s5
mov $40, $40[$39]
print $40
add $39, $39, 1
sub $41, $38, $39
brnz L9, $41
print '\n'
scani a
mov $44, 0
scani $44
param a
param $44
call funcao, 2
pop $48
println $48
L7:
println a
