	@ src/data/text/match_call_messages.h:173 gText_MatchCallYoungster_Calvin_Intro1
	.globl gText_Rom_5F305D
gText_Rom_5F305D: @ 0x085F305D
	.string "ジムリーダーに かつまで$"
	.if (. - gText_Rom_5F305D) > 0xd
	.error "gText_Rom_5F305D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F305D) < 0xd
	.space 0xd - (. - gText_Rom_5F305D)
	.endif
