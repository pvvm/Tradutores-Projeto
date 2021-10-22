.code
mov $0, 0
mov $1, 0
mov $2, 0
add $3, $0, 1
mov $0, $3
inttofl $4, 5
mul $5, $4, 3.33
fltoint $6, $5
mov $1, $6
mov $2, 3
add $7, $1, $2
mov $0, $7
slt $8, $0, $2
slt $9, $2, $0
seq $10, $8, $9
mov $1, $10
