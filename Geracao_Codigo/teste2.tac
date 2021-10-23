.code

main:
mov $0, 0
mov $1, 0
mov $2, 0
mov $0, 0
L0:
slt $4, $0, 3
brz L1, $4
mov $1, 0
L2:
slt $8, $1, 2
brz L3, $8
add $11, $2, 1
mov $2, $11
slt $13, $2, 3
brz L4, $13
add $14, $2, 2
mov $2, $14
jump L5
L4:
add $16, $2, 3
mov $2, $16
L5:
add $9, $1, 1
mov $1, $9
jump L2
L3:
add $5, $0, 1
mov $0, $5
jump L0
L1:
mul $18, 2, 3
add $19, 1, $18
slt $20, 0, $19
add $21, 1, 2
add $22, $21, 3
and $23, $20, $22
print $23
println $2
scani $2
println $2
mov $28, 0.0
scanf $28
println $28
