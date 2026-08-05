	@ src/strings.c:579 gText_StopGivingPkmnMail (+1 aliases)
	.globl gText_Rom_5CBA71
gText_Rom_5CBA71: @ 0x085CBA71
	.string "メールを もたせるのを やめますか?$"
	.if (. - gText_Rom_5CBA71) > 0x13
	.error "gText_Rom_5CBA71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA71) < 0x13
	.space 0x13 - (. - gText_Rom_5CBA71)
	.endif
