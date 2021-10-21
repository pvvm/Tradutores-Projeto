.code
mov $0, 0
mov $1, 0.0
mov $2, 0
inttofl $3, 2
mul $4, $1, $3
inttofl $5, 1
mul $6, $4, $5
minus $7, $1
not $8, $1
mul $9, $2, 3
inttofl $10, $9
add $11, $1, $10
sub $12, $11, 20.3
inttofl $13, 20
slt $14, $12, $13
slt $15, 12, 20
sleq $16, 31, 20
sleq $17, 20, 31
seq $18, $0, $2
seq $19, $0, $2
not $20, $19
