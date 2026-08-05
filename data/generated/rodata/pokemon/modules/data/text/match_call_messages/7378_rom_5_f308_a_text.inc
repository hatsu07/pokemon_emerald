	@ src/data/text/match_call_messages.h:178 gText_MatchCallFisherman_Elliot_Intro1
	.globl gText_Rom_5F308A
gText_Rom_5F308A: @ 0x085F308A
	.string "あんなに でっかい ポケモンを$"
	.if (. - gText_Rom_5F308A) > 0x10
	.error "gText_Rom_5F308A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F308A) < 0x10
	.space 0x10 - (. - gText_Rom_5F308A)
	.endif
