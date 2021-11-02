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
mov $17, $13
mov $13, $13[1]
mov $12, $12[1]
brnz L4, $12
mov $17[1], 0
memf $13
mov FL, $11
mov $20, FL
mema $21, 2
mov $19, $21
L5:
mov $22, $20[0]
param $22
call leq_10, 1
pop $23
brz L6, $23
mov $21[0], $22
mema $24, 2
mov $21[1], $24
mov $25, $21
mov $21, $21[1]
L6:
mov $20, $20[1]
brnz L5, $20
mov $25[1], 0
memf $21
mov $6, $19
seq $27, $6, 0
not $28, $27
brz L7, $28
mov $29, 0
mov $30, 0
mov $30, 0
mov $29, $6
L8:
seq $33, $29, 0
not $34, $33
brz L9, $34
add $37, $30, 1
mov $30, $37
mov $39, $29[0]
print $39
mov $41, 1
mov $42, 0
L10:
mov $43, &s2
mov $43, $43[$42]
print $43
add $42, $42, 1
sub $44, $41, $42
brnz L10, $44
mov $35, $29[1]
mov $29, $35
jump L8
L9:
mov $46, 1
mov $47, 0
L11:
mov $48, &s3
mov $48, $48[$47]
print $48
add $47, $47, 1
sub $49, $46, $47
brnz L11, $49
print '\n'
mov $51, 17
mov $52, 0
L12:
mov $53, &s4
mov $53, $53[$52]
print $53
add $52, $52, 1
sub $54, $51, $52
brnz L12, $54
print $30
mov $57, 11
mov $58, 0
L13:
mov $59, &s5
mov $59, $59[$58]
print $59
add $58, $58, 1
sub $60, $57, $58
brnz L13, $60
print '\n'
jump L14
L7:
mov $62, 35
mov $63, 0
L15:
mov $64, &s6
mov $64, $64[$63]
print $64
add $63, $63, 1
sub $65, $62, $63
brnz L15, $65
print '\n'
L14:
nop
