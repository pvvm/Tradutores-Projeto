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
sleq $1, 18.6, #0
inttofl $2, $1
sleq $3, $2, 24.9
inttofl $4, 25
sleq $5, $4, #0
inttofl $6, $5
sleq $7, $6, 29.9

main:
mov $0, 0
mov $1, 0
mov $2, 0.0
mov $3, 0
fltoint $4, 
mov $3, $4
