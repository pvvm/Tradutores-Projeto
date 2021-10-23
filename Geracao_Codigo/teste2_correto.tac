.code
mov $0, 0

fibonacci:
mov $0, 5
inttofl $1, 0
seq $2, #0, $1
inttofl $3, 1
seq $4, #0, $3
or $5, $2, $4
brz L0, $5
jump L1
L0:
inttofl $6, 1
sub $7, #0, $6
inttofl $8, 2
sub $9, #0, $8
add $10, , 
L1:

_write_list:
mov $0, 0
mov $1, 0
mov $0, 0
L2:
slt $3, $0, #1
brz L3, $3
mov $1, 
print $1
add $4, $0, 1
mov $0, $4
jump L2
L3:

main:
mov $0, 0
scani $0
slt $2, 0, $0
brz L4, $2
mov $3, 0
mov $4, 0
sub $5, $0, 1
mov $3, $5
L5:
sleq $7, 0, $3
brz L6, $7
sub $8, $3, 1
mov $3, $8
jump L5
L6:
mul $10, 2, 3
sub $11, 1, $10
mul $12, $11, 5
add $13, 2, $0
minus $14, $13
div $15, $12, $14
mov $0, $15
print $0
jump L7
L4:
L7:
mov $18, 0
mov $18, 0
