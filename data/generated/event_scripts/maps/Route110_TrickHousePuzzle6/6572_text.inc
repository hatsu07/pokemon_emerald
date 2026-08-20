	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:69 Route110_TrickHousePuzzle6_Text_SebastianDefeat (+1 aliases)
	.globl gText_Rom_23FE7E
gText_Rom_23FE7E: @ 0x0823FE7E
	.string "くーるくる くーるくる\nおれは もう ダメだ……{EOS}"
	.if (. - gText_Rom_23FE7E) > 0x19
	.error "gText_Rom_23FE7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FE7E) < 0x19
	.space 0x19 - (. - gText_Rom_23FE7E)
	.endif
