	@ src/data/text/match_call_messages.h:269 gText_MatchCallCollector_Edwin_Intro2
	.globl gText_Rom_5F3473
gText_Rom_5F3473: @ 0x085F3473
	.string "ポケモンを てにいれたい!$"
	.if (. - gText_Rom_5F3473) > 0xe
	.error "gText_Rom_5F3473 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3473) < 0xe
	.space 0xe - (. - gText_Rom_5F3473)
	.endif
