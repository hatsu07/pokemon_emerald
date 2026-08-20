	@ data/text/trainers.inc:782 Route110_Text_AbigailRematchDefeated (+1 aliases)
	.globl gText_Rom_25B5AC
gText_Rom_25B5AC: @ 0x0825B5AC
	.string "うわー\nどうして そんなに つよいの?{EOS}"
	.if (. - gText_Rom_25B5AC) > 0x14
	.error "gText_Rom_25B5AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B5AC) < 0x14
	.space 0x14 - (. - gText_Rom_25B5AC)
	.endif
