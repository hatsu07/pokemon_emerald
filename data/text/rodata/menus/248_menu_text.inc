	@ src/pokenav_menu_handler_gfx.c:272 pokenav_menu_handler_gfx_line_272
	.globl gText_Rom_5CB589
gText_Rom_5CB589: @ 0x085CB589
	.string "ホウエンちほうの マップを みます$"
	.if (. - gText_Rom_5CB589) > 0x12
	.error "gText_Rom_5CB589 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB589) < 0x12
	.space 0x12 - (. - gText_Rom_5CB589)
	.endif

	@ src/pokenav_menu_handler_gfx.c:273 pokenav_menu_handler_gfx_line_273
	.globl gText_Rom_5CB59B
gText_Rom_5CB59B: @ 0x085CB59B
	.string "ポケモンを くわしく しらべます$"
	.if (. - gText_Rom_5CB59B) > 0x11
	.error "gText_Rom_5CB59B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB59B) < 0x11
	.space 0x11 - (. - gText_Rom_5CB59B)
	.endif

	@ src/pokenav_menu_handler_gfx.c:274 pokenav_menu_handler_gfx_line_274
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB5AC
gText_Rom_5CB5AC: @ 0x085CB5AC
	.string "とうろくした ひとを よびだします$"
	.if (. - gText_Rom_5CB5AC) != 0x12
	.error "gText_Rom_5CB5AC must retain its original byte length"
	.endif
	.globl gText_Rom_5CB5BA
	.set gText_Rom_5CB5BA, gText_Rom_5CB5AC + 0xe

	@ src/pokenav_menu_handler_gfx.c:275 pokenav_menu_handler_gfx_line_275
	.globl gText_Rom_5CB5BE
gText_Rom_5CB5BE: @ 0x085CB5BE
	.string "てにいれた きねんリボンを みます$"
	.if (. - gText_Rom_5CB5BE) > 0x12
	.error "gText_Rom_5CB5BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB5BE) < 0x12
	.space 0x12 - (. - gText_Rom_5CB5BE)
	.endif

	@ src/pokenav_menu_handler_gfx.c:276 pokenav_menu_handler_gfx_line_276
	.globl gText_Rom_5CB5D0
gText_Rom_5CB5D0: @ 0x085CB5D0
	.string "ポケナビを しまいます$"
	.if (. - gText_Rom_5CB5D0) > 0xc
	.error "gText_Rom_5CB5D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB5D0) < 0xc
	.space 0xc - (. - gText_Rom_5CB5D0)
	.endif
	.globl gUnknown_85CB5DC
gUnknown_85CB5DC: @ 0x085CB5DC

	@ src/pokenav_menu_handler_gfx.c:111 gText_NoRibbonWinners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB5DC
gText_Rom_5CB5DC: @ 0x085CB5DC
	.string "リボンを もっている ポケモンが いません$"
	.if (. - gText_Rom_5CB5DC) != 0x16
	.error "gText_Rom_5CB5DC must retain its original byte length"
	.endif
	.globl gText_Rom_5CB5EE
	.set gText_Rom_5CB5EE, gText_Rom_5CB5DC + 0x12
	.incbin "baserom.gba", 0x5cb5f2, 0x10

