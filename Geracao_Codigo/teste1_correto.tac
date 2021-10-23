.code

calcula_imc:
mov $0, 0.0
mov $1, 0.0
mov $1, 
mov $0, 
mul $4, $1, $1
div $5, $0, $4

classifica_imc:
slt $0, #0, 18.5
brz L0, $0
jump L1
L0:
sleq $1, 18.6, #0
inttofl $2, $1
sleq $3, $2, 24.9
jump L1
inttofl $4, 25
sleq $5, $4, #0
inttofl $6, $5
sleq $7, $6, 29.9
jump L1
L1:
L2:
L3:

main:
mov $0, 0
mov $1, 0
scani $1
mov $3, 0.0
scanf $3
mov $5, 0
fltoint $6, 
mov $5, $6
