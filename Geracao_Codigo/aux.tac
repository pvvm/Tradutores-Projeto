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
mov $19, 0
mov $22, 0
L5:
mov $23, $20[0]
param $23
call leq_10, 1
pop $24
brz L6, $24
brnz L7, $22
mov $19, $21
mov $22, 1
L7:
mov $21[0], $23
mema $25, 2
mov $21[1], $25
mov $26, $21
mov $21, $21[1]
L6:
mov $20, $20[1]
brnz L5, $20
mov $26[1], 0
memf $21
mov $6, $19
brz L8, $6
mov $29, 0
mov $30, 0
mov $30, 0
mov $29, $6
L9:
brz L10, $29
add $36, $30, 1
mov $30, $36
mov $38, $29[0]
print $38
mov $40, 1
mov $41, 0
L11:
mov $42, &s2
mov $42, $42[$41]
print $42
add $41, $41, 1
sub $43, $40, $41
brnz L11, $43
mov $34, $29[1]
mov $29, $34
jump L9
L10:
mov $45, 1
mov $46, 0
L12:
mov $47, &s3
mov $47, $47[$46]
print $47
add $46, $46, 1
sub $48, $45, $46
brnz L12, $48
print '\n'
mov $50, 17
mov $51, 0
L13:
mov $52, &s4
mov $52, $52[$51]
print $52
add $51, $51, 1
sub $53, $50, $51
brnz L13, $53
print $30
mov $56, 11
mov $57, 0
L14:
mov $58, &s5
mov $58, $58[$57]
print $58
add $57, $57, 1
sub $59, $56, $57
brnz L14, $59
print '\n'
jump L15
L8:
mov $61, 35
mov $62, 0
L16:
mov $63, &s6
mov $63, $63[$62]
print $63
add $62, $62, 1
sub $64, $61, $62
brnz L16, $64
print '\n'
L15:
nop
