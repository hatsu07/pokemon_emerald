	@ src/strings.c:511 gText_BattleTrainers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAFEF
gText_Rom_5CAFEF: @ 0x085CAFEF
	.string "たたかう トレーナー$"
	.if (. - gText_Rom_5CAFEF) != 0xb
	.error "gText_Rom_5CAFEF must retain its original byte length"
	.endif
