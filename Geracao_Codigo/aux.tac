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
mov $0, #0
mov $1, 0
minus $2, 435.7
fltoint $3, $2
mov $1, $3
mov $5, 0
mov $5, 0
mov $1, 0
L0:
slt $8, $1, $0
brz L1, $8
mov $11, 0
mov $12, 28
mov $13, 0
L2:
mov $14, &s0
mov $14, $14[$13]
print $14
add $13, $13, 1
sub $15, $12, $13
brnz L2, $15
print '\n'
scani $11
mema $18, 2
mov $18[0], $11
mov $18[1], $5
mov $5, $18
add $9, $1, 1
mov $1, $9
jump L0
L1:
return $5
return 0

succ:
mov $0, #0
add $1, $0, 1
inttofl $2, $1
return $2
return 0.0

leq_10:
mov $0, #0
inttofl $1, 10
sleq $2, $0, $1
fltoint $3, $2
return $3
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
mov $10, &IL
mov $10, $9
mov $12, $10
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
mov $18, &FL
mov $18, $11
mov $20, $18
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
brz L7, $6
mov $28, 0
mov $29, 0
mov $29, 0
mov $28, $6
L8:
brz L9, $28
add $35, $29, 1
mov $29, $35
mov $37, $28[0]
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
mov $33, $28[1]
mov $28, $33
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
print $29
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
L15:
mov $62, &s6
mov $62, $62[$61]
print $62
add $61, $61, 1
sub $63, $60, $61
brnz L15, $63
print '\n'
L14:
nop
