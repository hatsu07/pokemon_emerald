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
