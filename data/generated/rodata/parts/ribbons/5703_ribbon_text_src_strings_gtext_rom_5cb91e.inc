	@ src/strings.c:554 gText_YourFeelingAtTheBattlesStart
	.globl gText_Rom_5CB91E
gText_Rom_5CB91E: @ 0x085CB91E
	.string "たいせんが はじまるときの きもちは$"
	.if (. - gText_Rom_5CB91E) > 0x13
	.error "gText_Rom_5CB91E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB91E) < 0x13
	.space 0x13 - (. - gText_Rom_5CB91E)
	.endif
