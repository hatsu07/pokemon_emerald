	@ asm/party_menu.s:10323 CursorCb_Trade1 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2FC
gText_Rom_5CA2FC: @ 0x085CA2FC
	.string "いまは　そのポケモンを　\nあいては　うけとることが　できません$"
	.if (. - gText_Rom_5CA2FC) != 0x20
	.error "gText_Rom_5CA2FC must retain its original byte length"
	.endif
