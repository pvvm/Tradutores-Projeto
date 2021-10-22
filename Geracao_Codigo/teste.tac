.code
mov $0, 0
mov $1, 0.0
mov $2, 0
inttofl $3, 2
mul $4, $1, $3
inttofl $5, 1
mul $6, $4, $5
mov $7, $6
minus $8, $7
fltoint $9, $8
mov $10, $9
not $11, $7
mov $12, $11
mul $13, $10, 3
inttofl $14, $13
add $15, $12, $14
sub $16, $15, 20.3
inttofl $17, 20
slt $18, $16, $17
mov $19, $18
slt $20, 12, 20
inttofl $21, $20
mov $22, $21
sleq $23, 31, 20
inttofl $24, $23
mov $25, $24
sleq $26, 20, 31
inttofl $27, $26
mov $28, $27
seq $29, $19, $10
inttofl $30, $29
mov $31, $30
seq $32, $19, $10
not $33, $32
inttofl $34, $33
mov $35, $34
add $36, $19, $10
inttofl $37, $36
and $38, $37, $35
or $39, $38, $10
inttofl $40, $39
mov $41, $40
