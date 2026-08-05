	@ src/data/text/match_call_messages.h:182 gText_MatchCallTriathlete_Isaiah_Pokemon
	.globl gText_Rom_5F30B5
gText_Rom_5F30B5: @ 0x085F30B5
	.string "みずタイプ ばんざい!$"
	.if (. - gText_Rom_5F30B5) > 0xc
	.error "gText_Rom_5F30B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30B5) < 0xc
	.space 0xc - (. - gText_Rom_5F30B5)
	.endif
