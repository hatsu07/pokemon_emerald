	@ src/strings.c:579 gText_StopGivingPkmnMail (+1 aliases)
	.globl gText_Rom_5CBB76
gText_Rom_5CBB76: @ 0x085CBB76
	.string "メールを もたせるのを やめますか?$"
	.if (. - gText_Rom_5CBB76) > 0x13
	.error "gText_Rom_5CBB76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB76) < 0x13
	.space 0x13 - (. - gText_Rom_5CBB76)
	.endif
