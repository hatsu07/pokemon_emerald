	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:310 Route110_TrickHousePuzzle3_Text_JustinDefeat (+1 aliases)
	.globl gText_Rom_23EA63
gText_Rom_23EA63: @ 0x0823EA63
	.string "ぼくが こまってるのに\nダメおしで かつなんて ひどいよー!{EOS}"
	.if (. - gText_Rom_23EA63) > 0x1f
	.error "gText_Rom_23EA63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA63) < 0x1f
	.space 0x1f - (. - gText_Rom_23EA63)
	.endif
