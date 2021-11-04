.table

int sei_la = 0
int tamanho = 0
char s0[] = " "
char s1[] = "Digite um numero positivo: "
char s2[] = "A sequencia de fibonacci ate a "
char s3[] = " posicao eh:"
char s4[] = "\nTestando map..."
char s5[] = "\nTestando filter..."
char s6[] = "ISSO COM CERTEZA NAO VAI DAR CERTO"

.code

fibonacci:
mov $0, #0
mov $1, &sei_la
mov $1, 5
inttofl $2, 0
seq $3, $0, $2
inttofl $4, 1
seq $5, $0, $4
or $6, $3, $5
brz L0, $6
return 1
jump L1
L0:
inttofl $8, 1
sub $9, $0, $8
param $9
call fibonacci, 1
pop $11
inttofl $12, 2
sub $13, $0, $12
param $13
call fibonacci, 1
pop $15
add $16, $11, $15
return $16
L1:
return 0

_write_list:
mov $0, #0
mov $1, 0
mov $2, 0
mov $3, 0
mov $3, $0
L3:
brz L4, $3
mov $8, $3[0]
print $8
mov $10, 1
mov $11, 0
L5:
mov $12, &s0
mov $12, $12[$11]
print $12
add $11, $11, 1
sub $13, $10, $11
brnz L5, $13
mov $6, $3[1]
mov $3, $6
jump L3
L4:
return 1
return 0

divide:
mov $0, #0
div $1, $0, 2
return $1
return 0

filtra:
mov $0, #0
slt $1, $0, 50
return $1
return 0

main:
mov $0, 27
mov $1, 0
L6:
mov $2, &s1
mov $2, $2[$1]
print $2
add $1, $1, 1
sub $3, $0, $1
brnz L6, $3
print '\n'
scani tamanho
slt $6, 0, tamanho
brz L7, $6
mov $7, 0
mov $8, 0
mov $8, 0
sub $10, tamanho, 1
mov $7, $10
L8:
sleq $12, 0, $7
brz L9, $12
inttofl $15, $7
param $15
call fibonacci, 1
pop $16
mema $17, 2
mov $17[0], $16
mov $17[1], $8
mov $8, $17
sub $13, $7, 1
mov $7, $13
jump L8
L9:
mul $19, 2, 3
sub $20, 1, $19
mul $21, $20, 5
add $22, 2, tamanho
minus $23, $22
div $24, $21, $23
mov $25, &sei_la
mov $25, $24
mov $26, 31
mov $27, 0
L10:
mov $28, &s2
mov $28, $28[$27]
print $28
add $27, $27, 1
sub $29, $26, $27
brnz L10, $29
print tamanho
mov $32, 12
mov $33, 0
L11:
mov $34, &s3
mov $34, $34[$33]
print $34
add $33, $33, 1
sub $35, $32, $33
brnz L11, $35
param $8
call _write_list, 1
pop $38
mov $39, 17
mov $40, 0
L12:
mov $41, &s4
mov $41, $41[$40]
print $41
add $40, $40, 1
sub $42, $39, $40
brnz L12, $42
print '\n'
mov $44, 0
mov $46, $8
mema $47, 2
mov $45, $47
L13:
mov $48, $46[0]
param $48
call divide, 1
pop $49
mov $47[0], $49
mema $50, 2
mov $47[1], $50
mov $51, $47
mov $47, $47[1]
mov $46, $46[1]
brnz L13, $46
mov $51[1], 0
memf $47
mov $44, $45
param $44
call _write_list, 1
pop $54
mov $55, 20
mov $56, 0
L14:
mov $57, &s5
mov $57, $57[$56]
print $57
add $56, $56, 1
sub $58, $55, $56
brnz L14, $58
print '\n'
mov $60, 0
mov $62, $44
mema $63, 2
mov $61, 0
mov $64, 0
L15:
mov $65, $62[0]
param $65
call filtra, 1
pop $66
brz L16, $66
brnz L17, $64
mov $61, $63
mov $64, 1
L17:
mov $63[0], $65
mema $67, 2
mov $63[1], $67
mov $68, $63
mov $63, $63[1]
L16:
mov $62, $62[1]
brnz L15, $62
mov $68[1], 0
memf $63
mov $60, $61
param $60
call _write_list, 1
pop $71
jump L18
L7:
mov $72, 34
mov $73, 0
L19:
mov $74, &s6
mov $74, $74[$73]
print $74
add $73, $73, 1
sub $75, $72, $73
brnz L19, $75
print '\n'
L18:
nop
