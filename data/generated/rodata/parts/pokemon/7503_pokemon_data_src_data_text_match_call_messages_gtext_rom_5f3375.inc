	@ src/data/text/match_call_messages.h:247 gText_MatchCallPicnicker_Diana_Pokemon
	.globl gText_Rom_5F3375
gText_Rom_5F3375: @ 0x085F3375
	.string "ポケモンは みんな すき$"
	.if (. - gText_Rom_5F3375) > 0xd
	.error "gText_Rom_5F3375 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3375) < 0xd
	.space 0xd - (. - gText_Rom_5F3375)
	.endif
