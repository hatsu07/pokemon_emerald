	@ src/data/text/match_call_messages.h:158 gText_MatchCallPokefan_Miguel_Intro1
	.globl gText_Rom_5F2FB3
gText_Rom_5F2FB3: @ 0x085F2FB3
	.string "ポケモンと しんらいかんけいを$"
	.if (. - gText_Rom_5F2FB3) > 0x10
	.error "gText_Rom_5F2FB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FB3) < 0x10
	.space 0x10 - (. - gText_Rom_5F2FB3)
	.endif
