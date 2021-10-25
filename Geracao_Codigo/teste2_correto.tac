.table

char s0[] = " "
char s1[] = "Digite um numero positivo: "
char s2[] = "A sequencia de fibonacci ate a "
char s3[] = " posicao eh:"
char s4[] = "Hoje nao!"

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
return 1
jump L1
L0:
inttofl $7, 1
sub $8, #0, $7
call fibonacci, 0
inttofl $9, 2
sub $10, #0, $9
call fibonacci, 0
add $11, , 
return $11
L1:
return 0

_write_list:
mov $0, 0
mov $1, 0
mov $0, 0
L2:
slt $3, $0, #1
brz L3, $3
mov $1, 
print $1
mov $8, 1
mov $9, 0
L4:
mov $10, &s0
mov $10, $10[$9]
print $10
add $9, $9, 1
sub $11, $8, $9
brnz L4, $11
add $4, $0, 1
mov $0, $4
jump L2
L3:
return 1
return 0

main:
mov $0, 0
mov $1, 27
mov $2, 0
L5:
mov $3, &s1
mov $3, $3[$2]
print $3
add $2, $2, 1
sub $4, $1, $2
brnz L5, $4
print '\n'
scani $0
slt $7, 0, $0
brz L6, $7
mov $8, 0
mov $9, 0
sub $10, $0, 1
mov $8, $10
L7:
sleq $12, 0, $8
brz L8, $12
inttofl $15, $8
param $15
call fibonacci, 1
sub $13, $8, 1
mov $8, $13
jump L7
L8:
mul $16, 2, 3
sub $17, 1, $16
mul $18, $17, 5
add $19, 2, $0
minus $20, $19
div $21, $18, $20
mov $0, $21
mov $23, 31
mov $24, 0
L9:
mov $25, &s2
mov $25, $25[$24]
print $25
add $24, $24, 1
sub $26, $23, $24
brnz L9, $26
print $0
mov $29, 12
mov $30, 0
L10:
mov $31, &s3
mov $31, $31[$30]
print $31
add $30, $30, 1
sub $32, $29, $30
brnz L10, $32
call _write_list, 0
jump L11
L6:
mov $34, 9
mov $35, 0
L11:
mov $36, &s4
mov $36, $36[$35]
print $36
add $35, $35, 1
sub $37, $34, $35
brnz L11, $37
L12:
mov $39, 0
mov $39, 0
return 0
