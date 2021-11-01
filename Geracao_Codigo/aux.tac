.table

int IL = 0
int FL = 0
char s0[] = "Digite o elemento da lista: "
char s1[] = "Digite os número de elementos da lista: "
char s2[] = " "
char s3[] = " "
char s4[] = "A nova lista tem "
char s5[] = " elementos."
char s6[] = "A nova lista não possui elementos."

.code

read_list:
mov $0, 0
minus $1, 435.7
fltoint $2, $1
mov $0, $2
mov $4, 0
mov $4, 0
mov $0, 0
L0:
slt $7, $0, #0
brz L1, $7
mov $10, 0
mov $11, 28
mov $12, 0
L2:
mov $13, &s0
mov $13, $13[$12]
print $13
add $12, $12, 1
sub $14, $11, $12
brnz L2, $14
print '\n'
scani $10
mema $17, 2
mov $17[0], $10
mov $17[1], $4
mov $4, $17
add $8, $0, 1
mov $0, $8
jump L0
L1:
return $4
return 0

succ:
add $0, #0, 1
inttofl $1, $0
return $1
return 0.0

leq_10:
inttofl $0, 10
sleq $1, #0, $0
fltoint $2, $1
return $2
return 0

main:
mov $0, 41
mov $1, 0
L3:
mov $2, &s1
mov $2, $2[$1]
print $2
add $1, $1, 1
sub $3, $0, $1
brnz L3, $3
print '\n'
mov $5, 0
mov $6, 0
scani $5
param $5
call read_list, 1
pop $9
mov IL, $9
mov $12, IL
mema $13, 2
mov $11, $13
L4:
mov $14, $12[0]
param $14
call succ, 1
pop $15
mov $13[0], $15
mema $16, 2
mov $13[1], $16
mov $13, $13[1]
mov $12, $12[1]
brnz L4, $12
mov $13, 0
mov FL, $11
mov $19, FL
mema $20, 2
mov $18, $20
L5:
mov $21, $19[0]
param $21
call leq_10, 1
pop $22
brz L6, $22
mov $20[0], $21
mema $23, 2
mov $20[1], $23
mov $20, $20[1]
L6:
mov $19, $19[1]
brnz L5, $19
mov $20, 0
mov $6, $18
seq $25, $6, 0
not $26, $25
brz L7, $26
mov $27, 0
mov $28, 0
mov $28, 0
mov $27, $6
L8:
seq $31, $27, 0
not $32, $31
brz L9, $32
add $35, $28, 1
mov $28, $35
mov $37, $27[0]
print $37
mov $39, 1
mov $40, 0
L10:
mov $41, &s2
mov $41, $41[$40]
print $41
add $40, $40, 1
sub $42, $39, $40
brnz L10, $42
mov $33, $27[1]
mov $27, $33
jump L8
L9:
mov $44, 1
mov $45, 0
L11:
mov $46, &s3
mov $46, $46[$45]
print $46
add $45, $45, 1
sub $47, $44, $45
brnz L11, $47
print '\n'
mov $49, 17
mov $50, 0
L12:
mov $51, &s4
mov $51, $51[$50]
print $51
add $50, $50, 1
sub $52, $49, $50
brnz L12, $52
print $28
mov $55, 11
mov $56, 0
L13:
mov $57, &s5
mov $57, $57[$56]
print $57
add $56, $56, 1
sub $58, $55, $56
brnz L13, $58
print '\n'
jump L14
L7:
mov $60, 35
mov $61, 0
L14:
mov $62, &s6
mov $62, $62[$61]
print $62
add $61, $61, 1
sub $63, $60, $61
brnz L14, $63
print '\n'
L15:
nop
