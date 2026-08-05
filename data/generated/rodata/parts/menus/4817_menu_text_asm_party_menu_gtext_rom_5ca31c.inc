	@ asm/party_menu.s:10323 CursorCb_Trade1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA31C
gText_Rom_5CA31C: @ 0x085CA31C
	.string "その　あいてとは　いまは　\nこうかん　できません$"
	.if (. - gText_Rom_5CA31C) != 0x19
	.error "gText_Rom_5CA31C must retain its original byte length"
	.endif
