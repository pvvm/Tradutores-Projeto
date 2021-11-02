.table

int sei_la = 0
int tamanho = 0
char s0[] = " "
char s1[] = "Digite um numero positivo: "
char s2[] = "A sequencia de fibonacci ate a "
char s3[] = " posicao eh:"
char s4[] = "Testando map..."
char s5[] = "Testando reduce..."
char s6[] = "ISSO COM CERTEZA NAO VAI DAR CERTO"
char s7[] = "Eh maior que 10!"
char s8[] = "Eh entre 0 e 10"
char s9[] = "Negativo, senhor"

.code

fibonacci:
mov sei_la, 5
inttofl $1, 0
seq $2, #0, $1
inttofl $3, 1
seq $4, #0, $3
or $5, $2, $4
brz L0, $5
return 1
jump L1
L0:
inttofl $7, 1
sub $8, #0, $7
param $8
call fibonacci, 1
pop $10
inttofl $11, 2
sub $12, #0, $11
param $12
call fibonacci, 1
pop $14
add $15, $10, $14
return $15
L1:
return 0

_write_list:
mov $0, 0
mov $1, 0
mov $0, 0
L3:
slt $3, $0, tamanho
brz L4, $3
mov $6, #0[0]
mov $1, $6
mov $8, #0[1]
mov #0, $8
print $1
mov $11, 1
mov $12, 0
L5:
mov $13, &s0
mov $13, $13[$12]
print $13
add $12, $12, 1
sub $14, $11, $12
brnz L5, $14
add $4, $0, 1
mov $0, $4
jump L3
L4:
fltoint $16, 2.3
mema $17, 2
mov $17[0], $16
mov $17[1], #0
mov #0, $17
return 1
return 0

subtrai:
sub $0, #0, 5
return $0
return 0

negativo:
slt $0, #0, 0
return $0
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
mov sei_la, $24
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
mov $39, 15
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
call subtrai, 1
pop $49
mov $47[0], $49
mema $50, 2
mov $47[1], $50
mov $47, $47[1]
mov $46, $46[1]
brnz L13, $46
mov $47, 0
mov $44, $45
param $44
call _write_list, 1
pop $53
mov $54, 18
mov $55, 0
L14:
mov $56, &s5
mov $56, $56[$55]
print $56
add $55, $55, 1
sub $57, $54, $55
brnz L14, $57
print '\n'
mov $59, 0
mov $61, $44
mema $62, 2
mov $60, $62
L15:
mov $63, $61[0]
param $63
call negativo, 1
pop $64
brz L16, $64
mov $62[0], $63
mema $65, 2
mov $62[1], $65
mov $62, $62[1]
L16:
mov $61, $61[1]
brnz L15, $61
mov $62, 0
mov $59, $60
param $59
call _write_list, 1
pop $68
jump L17
L7:
mov $69, 34
mov $70, 0
L18:
mov $71, &s6
mov $71, $71[$70]
print $71
add $70, $70, 1
sub $72, $69, $70
brnz L18, $72
print '\n'
L17:
mov $74, 0
mov $74, 0
scani $74
slt $77, 0, $74
brz L20, $77
slt $78, 10, $74
brz L21, $78
mov $79, 16
mov $80, 0
L22:
mov $81, &s7
mov $81, $81[$80]
print $81
add $80, $80, 1
sub $82, $79, $80
brnz L22, $82
print '\n'
jump L23
L21:
mov $84, 15
mov $85, 0
L24:
mov $86, &s8
mov $86, $86[$85]
print $86
add $85, $85, 1
sub $87, $84, $85
brnz L24, $87
print '\n'
L23:
jump L26
L20:
mov $89, 16
mov $90, 0
L27:
mov $91, &s9
mov $91, $91[$90]
print $91
add $90, $90, 1
sub $92, $89, $90
brnz L27, $92
print '\n'
L26:
nop
