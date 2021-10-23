.code

main:
mov $0, 20
mov $1, 0
mov $2, &s0
mov $2, $2[$1]
print $2
add $1, $1, 1
sub $3, $0, $1
brnz L, $3