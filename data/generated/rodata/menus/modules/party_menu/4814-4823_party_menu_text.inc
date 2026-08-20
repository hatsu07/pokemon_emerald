	@ asm/party_menu.s:10323 CursorCb_Trade1 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2FC
gText_Rom_5CA2FC: @ 0x085CA2FC
	.string "いまは　そのポケモンを　\nあいては　うけとることが　できません{EOS}"
	.if (. - gText_Rom_5CA2FC) != 0x20
	.error "gText_Rom_5CA2FC must retain its original byte length"
	.endif
	.globl gText_Rom_5CA318
	.set gText_Rom_5CA318, gText_Rom_5CA2FC + 0x1c

	@ asm/party_menu.s:10323 CursorCb_Trade1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA31C
gText_Rom_5CA31C: @ 0x085CA31C
	.string "その　あいてとは　いまは　\nこうかん　できません{EOS}"
	.if (. - gText_Rom_5CA31C) != 0x19
	.error "gText_Rom_5CA31C must retain its original byte length"
	.endif
	.globl gText_Rom_5CA331
	.set gText_Rom_5CA331, gText_Rom_5CA31C + 0x15
	.space 0x3, 0x00

	@ asm/party_menu.s:10323 CursorCb_Trade1 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA338
gText_Rom_5CA338: @ 0x085CA338
	.string "あいての　ほしがっている　タイプの\nポケモンでは　ありません{EOS}"
	.if (. - gText_Rom_5CA338) != 0x1f
	.error "gText_Rom_5CA338 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA353
	.set gText_Rom_5CA353, gText_Rom_5CA338 + 0x1b
	.space 0x1, 0x00

	@ asm/party_menu.s:10323 CursorCb_Trade1 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA358
gText_Rom_5CA358: @ 0x085CA358
	.string "それは　タマゴでは　ありません{EOS}"
	.if (. - gText_Rom_5CA358) != 0x10
	.error "gText_Rom_5CA358 must retain its original byte length"
	.endif
