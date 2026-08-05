	@ data/maps/Route110/scripts.inc:793 Route110_Text_BrendanDefeated (+1 aliases)
	.globl gText_Rom_1E9931
gText_Rom_1E9931: @ 0x081E9931
	.string "ふうん……\nなかなか やるね$"
	.if (. - gText_Rom_1E9931) > 0xf
	.error "gText_Rom_1E9931 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9931) < 0xf
	.space 0xf - (. - gText_Rom_1E9931)
	.endif
