	@ asm/field_specials.s:6023 sub_0813AAAC (+4 aliases)
	.globl gText_Rom_236966
gText_Rom_236966: @ 0x08236966
	.string "こうげきの　いりょくが　あがるが\nおなじ　わざしか　だせなくなる"
	.byte EOS
	.if (. - gText_Rom_236966) > 0x21
	.error "gText_Rom_236966 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236966) < 0x21
	.space 0x21 - (. - gText_Rom_236966)
	.endif
