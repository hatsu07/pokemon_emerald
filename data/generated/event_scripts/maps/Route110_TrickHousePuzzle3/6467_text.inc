	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:307 Route110_TrickHousePuzzle3_Text_JustinIntro (+1 aliases)
	.globl gText_Rom_23EA48
gText_Rom_23EA48: @ 0x0823EA48
	.string "なんども おなじ ところに\nもどって きちゃうよー!{EOS}"
	.if (. - gText_Rom_23EA48) > 0x1b
	.error "gText_Rom_23EA48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA48) < 0x1b
	.space 0x1b - (. - gText_Rom_23EA48)
	.endif
