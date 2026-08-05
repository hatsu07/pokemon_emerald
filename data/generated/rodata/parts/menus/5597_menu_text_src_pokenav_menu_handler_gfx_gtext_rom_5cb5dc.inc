	@ src/pokenav_menu_handler_gfx.c:111 gText_NoRibbonWinners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB5DC
gText_Rom_5CB5DC: @ 0x085CB5DC
	.string "リボンを もっている ポケモンが いません$"
	.if (. - gText_Rom_5CB5DC) != 0x16
	.error "gText_Rom_5CB5DC must retain its original byte length"
	.endif
