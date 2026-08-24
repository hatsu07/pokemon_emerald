	@ src/strings.c:599 gText_AtTheBattlesStart
	.globl gText_AtTheBattlesStart
gText_AtTheBattlesStart: @ 0x085CBBBE
	.string "たいせんが はじまるとき{EOS}"
	.if (. - gText_AtTheBattlesStart) > 0xd
	.error "gText_AtTheBattlesStart may not grow beyond its original slot"
	.endif
	.if (. - gText_AtTheBattlesStart) < 0xd
	.space 0xd - (. - gText_AtTheBattlesStart)
	.endif
