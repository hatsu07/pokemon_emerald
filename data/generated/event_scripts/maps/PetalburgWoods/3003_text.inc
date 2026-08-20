	@ data/maps/PetalburgWoods/scripts.inc:386 PetalburgWoods_Text_ICouldntWin (+1 aliases)
	.globl gText_Rom_21485F
gText_Rom_21485F: @ 0x0821485F
	.string "こんなに ポケモン いるのに\nかてなかったのか……{EOS}"
	.if (. - gText_Rom_21485F) > 0x1a
	.error "gText_Rom_21485F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21485F) < 0x1a
	.space 0x1a - (. - gText_Rom_21485F)
	.endif
