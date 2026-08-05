	@ data/text/trainers.inc:154 Route103_Text_IsabelleDefeated (+1 aliases)
	.globl gText_Rom_259BF6
gText_Rom_259BF6: @ 0x08259BF6
	.string "んん……"
	.byte EOS
	.if (. - gText_Rom_259BF6) > 0x5
	.error "gText_Rom_259BF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259BF6) < 0x5
	.space 0x5 - (. - gText_Rom_259BF6)
	.endif
