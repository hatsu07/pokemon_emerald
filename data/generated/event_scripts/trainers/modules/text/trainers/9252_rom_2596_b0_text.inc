	@ data/text/trainers.inc:37 Route102_Text_RickDefeated (+1 aliases)
	.globl gText_Rom_2596B0
gText_Rom_2596B0: @ 0x082596B0
	.string "まけてしまった!"
	.byte EOS
	.if (. - gText_Rom_2596B0) > 0x9
	.error "gText_Rom_2596B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2596B0) < 0x9
	.space 0x9 - (. - gText_Rom_2596B0)
	.endif
