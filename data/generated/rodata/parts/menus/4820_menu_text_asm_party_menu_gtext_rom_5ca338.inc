	@ asm/party_menu.s:10323 CursorCb_Trade1 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA338
gText_Rom_5CA338: @ 0x085CA338
	.string "あいての　ほしがっている　タイプの\nポケモンでは　ありません$"
	.if (. - gText_Rom_5CA338) != 0x1f
	.error "gText_Rom_5CA338 must retain its original byte length"
	.endif
