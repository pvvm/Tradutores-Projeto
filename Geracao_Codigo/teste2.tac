.table

char s0[] = "Lista 1:"
char s1[] = "Lista 2:"
char s2[] = "Lista 3:"

.code

coisa:
mov $0, #0
add $1, $0, 1
inttofl $2, $1
return $2
return 0.0

teste:
mov $0, #0
slt $1, 5, $0
return $1
return 0

main:
mov $0, 0
mov $1, 0.0
mov $2, 0
inttofl $3, 2
mul $4, $1, $3
inttofl $5, 1
mul $6, $4, $5
mov $1, $6
minus $8, $1
fltoint $9, $8
mov $2, $9
not $11, $1
mov $1, $11
mul $13, $2, 3
inttofl $14, $13
add $15, $1, $14
sub $16, $15, 20.3
minus $17, 1
sub $18, 20, $17
inttofl $19, $18
slt $20, $16, $19
fltoint $21, $20
mov $0, $21
slt $23, 12, 20
inttofl $24, $23
mov $1, $24
sleq $26, 31, 20
inttofl $27, $26
mov $1, $27
sleq $29, 20, 31
inttofl $30, $29
mov $1, $30
seq $32, $0, $2
inttofl $33, $32
mov $1, $33
seq $35, $0, $2
not $36, $35
inttofl $37, $36
mov $1, $37
add $39, $0, $2
inttofl $40, $39
and $41, $40, $1
inttofl $42, $2
or $43, $41, $42
mov $1, $43
mov $45, 0
inttofl $46, 55
mema $47, 2
mov $47[0], $46
mov $47[1], $45
mov $45, $47
inttofl $49, 20
mema $50, 2
mov $50[0], $49
mov $50[1], $45
mov $45, $50
mov $52, $45[0]
println $52
inttofl $54, 1
mema $55, 2
mov $55[0], $54
mov $55[1], $45
mov $45, $55
mov $57, $45[0]
println $57
inttofl $59, 6
mema $60, 2
mov $60[0], $59
mov $60[1], $45
mov $45, $60
mov $62, $45[0]
println $62
mov $64, 0
mov $66, $45
mema $67, 2
mov $65, $67
L0:
mov $68, $66[0]
fltoint $68, $68
param $68
call coisa, 1
pop $69
mov $67[0], $69
mema $70, 2
mov $67[1], $70
mov $71, $67
mov $67, $67[1]
mov $66, $66[1]
brnz L0, $66
mov $71[1], 0
memf $67
mov $64, $65
mov $73, 8
mov $74, 0
L1:
mov $75, &s0
mov $75, $75[$74]
print $75
add $74, $74, 1
sub $76, $73, $74
brnz L1, $76
print '\n'
mov $78, $45[0]
println $78
mov $80, $45[1]
mov $81, $80[0]
println $81
mov $83, 8
mov $84, 0
L2:
mov $85, &s1
mov $85, $85[$84]
print $85
add $84, $84, 1
sub $86, $83, $84
brnz L2, $86
print '\n'
mov $88, 0
mov $90, $64
mema $91, 2
mov $89, $91
L3:
mov $92, $90[0]
fltoint $92, $92
param $92
call teste, 1
pop $93
brz L4, $93
mov $91[0], $92
mema $94, 2
mov $91[1], $94
mov $95, $91
mov $91, $91[1]
L4:
mov $90, $90[1]
brnz L3, $90
mov $95[1], 0
memf $91
mov $88, $89
mov $97, 8
mov $98, 0
L5:
mov $99, &s2
mov $99, $99[$98]
print $99
add $98, $98, 1
sub $100, $97, $98
brnz L5, $100
print '\n'
mov $102, $88[0]
println $102
mov $104, $88[1]
mov $105, $104[0]
println $105
mov $107, $88[1]
mov $108, $88
mov $88, $88[1]
memf $108
mov $109, $88[0]
println $109
mov $111, $88[1]
mov $112, $111[0]
println $112
mov $114, $88[1]
mov $115, $88
mov $88, $88[1]
memf $115
mov $116, $88[0]
println $116
mov $118, $88[0]
println $118
add $120, $0, 20
minus $121, 1.3
inttofl $122, 5
mul $123, $121, $122
inttofl $124, $120
sub $125, $124, $123
println $125
nop
