	@ ANALYSIS: RAW_RANGE offset=0x5C8D0E, size=0x18
	.byte 0x37, 0x02, 0x48, 0x94, 0xAE, 0x60, 0x16, 0x26, 0x28, 0x00, 0x7A, 0x9F, 0xAE, 0x64, 0x2D, 0x00
	.byte 0x0A, 0x03, 0x0C, 0x2E, 0x0C, 0x1F, 0x0D, 0xFE
	@ src/strings.c:875 gJPText_PleaseWaitAMoment
	.globl gJPText_PleaseWaitAMoment_Copy_Menus
gJPText_PleaseWaitAMoment_Copy_Menus: @ 0x085C8D26
	.string "しばらく おまちください{EOS}"
	.if (. - gJPText_PleaseWaitAMoment_Copy_Menus) > 0xd
	.error "gJPText_PleaseWaitAMoment_Copy_Menus may not grow beyond its original slot"
	.endif
	.if (. - gJPText_PleaseWaitAMoment_Copy_Menus) < 0xd
	.space 0xd - (. - gJPText_PleaseWaitAMoment_Copy_Menus)
	.endif
	@ Decoded text from ROM range: offset=0x5C8D33, size=0x11
	.string "レポートが　こうしんされました！{EOS}"
