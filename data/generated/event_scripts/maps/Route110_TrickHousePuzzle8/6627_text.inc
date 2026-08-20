	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:45 Route110_TrickHousePuzzle8_Text_KeiraDefeat (+1 aliases)
	.globl gText_Rom_240573
gText_Rom_240573: @ 0x08240573
	.string "そんな わたしが\nまけるなんて……!{EOS}"
	.if (. - gText_Rom_240573) > 0x13
	.error "gText_Rom_240573 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240573) < 0x13
	.space 0x13 - (. - gText_Rom_240573)
	.endif
