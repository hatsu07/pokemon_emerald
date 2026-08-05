	@ src/data/text/match_call_messages.h:384 gText_MatchCallEliteFour_Drake_Intro2
	.globl gText_Rom_5F396C
gText_Rom_5F396C: @ 0x085F396C
	.string "ポケモンに すべてを そそぐ$"
	.if (. - gText_Rom_5F396C) > 0xf
	.error "gText_Rom_5F396C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F396C) < 0xf
	.space 0xf - (. - gText_Rom_5F396C)
	.endif
