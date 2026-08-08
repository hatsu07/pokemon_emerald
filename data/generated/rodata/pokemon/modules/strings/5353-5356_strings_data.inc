	@ src/strings.c:510 gText_BattlePokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAFE6
gText_Rom_5CAFE6: @ 0x085CAFE6
	.string "でてくるポケモン$"
	.if (. - gText_Rom_5CAFE6) != 0x9
	.error "gText_Rom_5CAFE6 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAFEA
	.set gText_Rom_5CAFEA, gText_Rom_5CAFE6 + 0x4

	@ src/strings.c:511 gText_BattleTrainers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAFEF
gText_Rom_5CAFEF: @ 0x085CAFEF
	.string "たたかう トレーナー$"
	.if (. - gText_Rom_5CAFEF) != 0xb
	.error "gText_Rom_5CAFEF must retain its original byte length"
	.endif
