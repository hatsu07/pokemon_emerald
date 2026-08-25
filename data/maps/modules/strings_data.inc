	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gMenuText_Confirm_Copy_Rom_4E8A71
gMenuText_Confirm_Copy_Rom_4E8A71: @ 0x084E8A71
	.string "けってい{EOS}"
	.if (. - gMenuText_Confirm_Copy_Rom_4E8A71) > 0x5
	.error "gMenuText_Confirm_Copy_Rom_4E8A71 may not grow beyond its original slot"
	.endif
	.if (. - gMenuText_Confirm_Copy_Rom_4E8A71) < 0x5
	.space 0x5 - (. - gMenuText_Confirm_Copy_Rom_4E8A71)
	.endif
