	@ data/maps/MossdeepCity_Gym/scripts.inc:408 MossdeepCity_Gym_Text_HannahDefeat (+1 aliases)
	.globl gText_Rom_20BADB
gText_Rom_20BADB: @ 0x0820BADB
	.string "あなたは さらに つよすぎた!$"
	.if (. - gText_Rom_20BADB) > 0x10
	.error "gText_Rom_20BADB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BADB) < 0x10
	.space 0x10 - (. - gText_Rom_20BADB)
	.endif
