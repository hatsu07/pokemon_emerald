	@ src/data/text/match_call_messages.h:83 gText_MatchCallBlackBelt_Nob_Intro1
	.globl gText_Rom_5F2C6C
gText_Rom_5F2C6C: @ 0x085F2C6C
	.string "じまん じゃないけど$"
	.if (. - gText_Rom_5F2C6C) > 0xb
	.error "gText_Rom_5F2C6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C6C) < 0xb
	.space 0xb - (. - gText_Rom_5F2C6C)
	.endif
