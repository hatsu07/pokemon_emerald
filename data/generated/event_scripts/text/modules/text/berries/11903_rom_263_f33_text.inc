	@ data/text/berries.inc:196 SootopolisCity_Text_NameIsKiriHaveOneOfThese
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_263F33
gText_Rom_263F33: @ 0x08263F33
	.string "{STR_VAR_1} なまえ なんていうの?\p……… ……… ………\nへー いいねー\pわたしは キリ っていう なまえなの\pパパと ママが すくすくと そだって\nこころの あたたかい おんなのこに なって\lほしいっていう ねがいを こめたんだって!\p{STR_VAR_1}にも これ あげる$"
	.if (. - gText_Rom_263F33) != 0x81
	.error "gText_Rom_263F33 must retain its original byte length"
	.endif
