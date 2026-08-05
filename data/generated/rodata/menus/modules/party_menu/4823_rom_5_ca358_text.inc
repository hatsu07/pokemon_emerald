	@ asm/party_menu.s:10323 CursorCb_Trade1 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA358
gText_Rom_5CA358: @ 0x085CA358
	.string "それは　タマゴでは　ありません$"
	.if (. - gText_Rom_5CA358) != 0x10
	.error "gText_Rom_5CA358 must retain its original byte length"
	.endif
