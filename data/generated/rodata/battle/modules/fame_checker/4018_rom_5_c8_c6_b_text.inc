	@ src/fame_checker.c:502 sText_FameCheckerName_Birch (+1 aliases)
	.globl gText_Rom_5C8C6B
gText_Rom_5C8C6B: @ 0x085C8C6B
	.string "オダマキ$"
	.if (. - gText_Rom_5C8C6B) > 0x5
	.error "gText_Rom_5C8C6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C6B) < 0x5
	.space 0x5 - (. - gText_Rom_5C8C6B)
	.endif
