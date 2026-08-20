	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:313 Route110_TrickHousePuzzle3_Text_JustinPostBattle
	.globl gText_Rom_23EA82
gText_Rom_23EA82: @ 0x0823EA82
	.string "とびら だらけで\nせまくて こわいよー!{EOS}"
	.if (. - gText_Rom_23EA82) > 0x15
	.error "gText_Rom_23EA82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA82) < 0x15
	.space 0x15 - (. - gText_Rom_23EA82)
	.endif
