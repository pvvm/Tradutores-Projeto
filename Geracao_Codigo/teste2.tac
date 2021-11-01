.table

int lista = 0
char s0[] = "Digite um novo elemento da lista:"
char s1[] = "Lista com head e tail"

.code

times_15:
mov $0, 0
mul $1, #0, #1
mul $2, $1, 15
mov $0, $2
inttofl $4, $0
return $4
return 0.0

lt_gt:
mov $0, 0
mov $1, 0
mov $2, 0
mov $0, 10
mov $1, 20
mov $2, 30
slt $6, $1, $0
slt $7, $0, $2
and $8, $6, $7
minus $9, $1
slt $10, $0, $9
or $11, $8, $10
brz L0, $11
return $2
jump L1
L0:
fltoint $13, 10.3
return $13
L1:
return 0

unique_list:
mov $0, 0.0
mov $1, 0
mov $1, 0
mov $3, 33
mov $4, 0
L2:
mov $5, &s0
mov $5, $5[$4]
print $5
add $4, $4, 1
sub $6, $3, $4
brnz L2, $6
print '\n'
scanf $0
mema $9, 2
mov $9[0], $0
mov $9[1], $1
mov $1, $9
return $1
return 0

main:
mov $0, 0
mov $1, 0.0
inttofl $2, $0
and $3, $2, $1
mov $4, 0
mov $5, 0.0
call lt_gt
pop $6
inttofl $7, $6
mov $5, $7
inttofl $9, $0
or $10, $9, $1
fltoint $11, $10
mov $4, $11
mov $13, 21
mov $14, 0
L3:
mov $15, &s1
mov $15, $15[$14]
print $15
add $14, $14, 1
sub $16, $13, $14
brnz L3, $16
print '\n'
mov $18, 0
mov $18, 
minus $20, $0
print $20
scani $0
nop
