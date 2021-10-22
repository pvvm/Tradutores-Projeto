.code

main:
mov $0, 0
mov $1, 0
mov $2, 0
add $3, $0, 1
mov $0, $3
inttofl $5, 5
mul $6, $5, 3.33
fltoint $7, $6
mov $1, $7
mov $2, 3
minus $10, $2
add $11, $1, $10
mov $0, $11
slt $13, $0, $2
slt $14, $2, $0
seq $15, $13, $14
mov $1, $15
add $17, 20, 1
seq $18, $0, $17
brz L0, $18
add $19, $1, 1
mov $0, $19
brz L1, 1
mov $2, 2
L1:
jump L2
L0:
mov $0, 50
L2:
brz L3, 1
mov $0, 6
L3:
brz L4, 2
L4:
