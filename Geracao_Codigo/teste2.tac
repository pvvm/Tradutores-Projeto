.table


.code

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
fltoint $46, 1.3
mema $47, 2
mov $47[0], $46
mov $47[1], $45
mov $45, $47
mov $49, $45[0]
println $49
mema $51, 2
mov $51[0], 2
mov $51[1], $45
mov $45, $51
mov $53, $45[0]
println $53
mema $55, 2
mov $55[0], 3
mov $55[1], $45
mov $45, $55
mov $57, $45[0]
println $57
mov $59, $45[1]
mov $60, $59[0]
println $60
mov $62, $45[1]
mov $63, $45
mov $45, $45[1]
memf $63
mov $64, $45[0]
println $64
mov $66, $45[1]
mov $67, $66[0]
println $67
mov $69, $45[1]
mov $70, $45
mov $45, $45[1]
memf $70
mov $71, $45[0]
println $71
mov $73, $45[0]
println $73
nop
