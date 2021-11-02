.table

char s0[] = "Lista 1:"
char s1[] = "Lista 2:"
char s2[] = "Lista 3:"

.code

coisa:
add $0, #0, 1
inttofl $1, $0
return $1
return 0.0

teste:
slt $0, 5, #0
return $0
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
mov $67, $67[1]
mov $66, $66[1]
brnz L0, $66
mov $67, 0
mov $64, $65
mov $72, 8
mov $73, 0
L1:
mov $74, &s0
mov $74, $74[$73]
print $74
add $73, $73, 1
sub $75, $72, $73
brnz L1, $75
print '\n'
mov $77, $45[0]
println $77
mov $79, $45[1]
mov $80, $79[0]
println $80
mov $82, 8
mov $83, 0
L2:
mov $84, &s1
mov $84, $84[$83]
print $84
add $83, $83, 1
sub $85, $82, $83
brnz L2, $85
print '\n'
mov $87, 0
mov $89, $64
mema $90, 2
mov $88, $90
L3:
mov $91, $89[0]
fltoint $91, $91
param $91
call teste, 1
pop $92
brz L4, $92
mov $90[0], $91
mema $93, 2
mov $90[1], $93
mov $90, $90[1]
L4:
mov $89, $89[1]
brnz L3, $89
mov $90, 0
mov $87, $88
mov $95, 8
mov $96, 0
L5:
mov $97, &s2
mov $97, $97[$96]
print $97
add $96, $96, 1
sub $98, $95, $96
brnz L5, $98
print '\n'
mov $100, $87[0]
println $100
mov $102, $87[1]
mov $103, $102[0]
println $103
mov $105, $87[1]
mov $106, $87
mov $87, $87[1]
memf $106
mov $107, $87[0]
println $107
mov $109, $87[1]
mov $110, $109[0]
println $110
mov $112, $87[1]
mov $113, $87
mov $87, $87[1]
memf $113
mov $114, $87[0]
println $114
mov $116, $87[0]
println $116
add $118, $0, 20
minus $119, 1.3
inttofl $120, 5
mul $121, $119, $120
inttofl $122, $118
sub $123, $122, $121
println $123
nop
