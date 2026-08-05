	@ src/data/text/match_call_messages.h:273 gText_MatchCallPkmnBreeder_Lydia_Intro1
	.globl gText_Rom_5F349C
gText_Rom_5F349C: @ 0x085F349C
	.string "ポケモンを そだてる コツは$"
	.if (. - gText_Rom_5F349C) > 0xf
	.error "gText_Rom_5F349C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F349C) < 0xf
	.space 0xf - (. - gText_Rom_5F349C)
	.endif
