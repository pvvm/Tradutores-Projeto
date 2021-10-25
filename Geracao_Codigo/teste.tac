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
mov $0, $20
slt $22, 12, 20
inttofl $23, $22
mov $1, $23
sleq $25, 31, 20
inttofl $26, $25
mov $1, $26
sleq $28, 20, 31
inttofl $29, $28
mov $1, $29
seq $31, $0, $2
inttofl $32, $31
mov $1, $32
seq $34, $0, $2
not $35, $34
inttofl $36, $35
mov $1, $36
add $38, $0, $2
inttofl $39, $38
and $40, $39, $1
or $41, $40, $2
inttofl $42, $41
mov $1, $42
