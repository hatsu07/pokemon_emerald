	@ src/data/text/match_call_messages.h:312 gText_MatchCallHiker_Sawyer_Pokemon
	.globl gText_Rom_5F3647
gText_Rom_5F3647: @ 0x085F3647
	.string "あつい ポケモンだ!$"
	.if (. - gText_Rom_5F3647) > 0xb
	.error "gText_Rom_5F3647 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3647) < 0xb
	.space 0xb - (. - gText_Rom_5F3647)
	.endif
