.table

char s0[] = "Testando essa caceta"
char s1[] = "So mais uma vez"

.code

funcao:
add $0, #0, #1
println $0
inttofl $2, 1
return $2
return 0.0

main:
mov $0, 0
mov $0, 0
L0:
slt $2, $0, 10
brz L1, $2
mov $5, 20
mov $6, 0
L2:
mov $7, &s0
mov $7, $7[$6]
print $7
add $6, $6, 1
sub $8, $5, $6
brnz L2, $8
print '\n'
add $3, $0, 1
mov $0, $3
jump L0
L1:
fltoint $10, 2.999
param $10
fltoint $11, 7.156
param $11
call funcao, 2
mov $12, 15
mov $13, 0
L3:
mov $14, &s1
mov $14, $14[$13]
print $14
add $13, $13, 1
sub $15, $12, $13
brnz L3, $15
print '\n'
add $17, 20, 3
print $17
