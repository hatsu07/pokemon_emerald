	@ src/pokenav_menu_handler_gfx.c:277 pokenav_menu_handler_gfx_line_277
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB606
gText_Rom_5CB606: @ 0x085CB606
	.string "てもちポケモンを くわしく しらべます$"
	.if (. - gText_Rom_5CB606) != 0x14
	.error "gText_Rom_5CB606 must retain its original byte length"
	.endif
	.globl gText_Rom_5CB609
	.set gText_Rom_5CB609, gText_Rom_5CB606 + 0x3

	@ src/pokenav_menu_handler_gfx.c:278 pokenav_menu_handler_gfx_line_278
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB61A
gText_Rom_5CB61A: @ 0x085CB61A
	.string "すべてのポケモンを くわしく しらべます$"
	.if (. - gText_Rom_5CB61A) != 0x15
	.error "gText_Rom_5CB61A must retain its original byte length"
	.endif
	.globl gText_Rom_5CB61E
	.set gText_Rom_5CB61E, gText_Rom_5CB61A + 0x4

	@ src/pokenav_menu_handler_gfx.c:279 pokenav_menu_handler_gfx_line_279
	.globl gText_Rom_5CB62F
gText_Rom_5CB62F: @ 0x085CB62F
	.string "ポケナビの メニューに もどります$"
	.if (. - gText_Rom_5CB62F) > 0x12
	.error "gText_Rom_5CB62F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB62F) < 0x12
	.space 0x12 - (. - gText_Rom_5CB62F)
	.endif

	@ src/pokenav_menu_handler_gfx.c:280 pokenav_menu_handler_gfx_line_280
	.globl gText_Rom_5CB641
gText_Rom_5CB641: @ 0x085CB641
	.string "かっこいい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB641) > 0x12
	.error "gText_Rom_5CB641 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB641) < 0x12
	.space 0x12 - (. - gText_Rom_5CB641)
	.endif

	@ src/pokenav_menu_handler_gfx.c:281 pokenav_menu_handler_gfx_line_281
	.globl gText_Rom_5CB653
gText_Rom_5CB653: @ 0x085CB653
	.string "うつくしい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB653) > 0x12
	.error "gText_Rom_5CB653 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB653) < 0x12
	.space 0x12 - (. - gText_Rom_5CB653)
	.endif

	@ src/pokenav_menu_handler_gfx.c:282 pokenav_menu_handler_gfx_line_282
	.globl gText_Rom_5CB665
gText_Rom_5CB665: @ 0x085CB665
	.string "かわいい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB665) > 0x11
	.error "gText_Rom_5CB665 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB665) < 0x11
	.space 0x11 - (. - gText_Rom_5CB665)
	.endif

	@ src/pokenav_menu_handler_gfx.c:283 pokenav_menu_handler_gfx_line_283
	.globl gText_Rom_5CB676
gText_Rom_5CB676: @ 0x085CB676
	.string "かしこい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB676) > 0x11
	.error "gText_Rom_5CB676 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB676) < 0x11
	.space 0x11 - (. - gText_Rom_5CB676)
	.endif

	@ src/pokenav_menu_handler_gfx.c:284 pokenav_menu_handler_gfx_line_284
	.globl gText_Rom_5CB687
gText_Rom_5CB687: @ 0x085CB687
	.string "たくましい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB687) > 0x12
	.error "gText_Rom_5CB687 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB687) < 0x12
	.space 0x12 - (. - gText_Rom_5CB687)
	.endif

	@ src/pokenav_menu_handler_gfx.c:285 pokenav_menu_handler_gfx_line_285
	.globl gText_Rom_5CB699
gText_Rom_5CB699: @ 0x085CB699
	.string "コンディションの メニューに もどります$"
	.if (. - gText_Rom_5CB699) > 0x15
	.error "gText_Rom_5CB699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB699) < 0x15
	.space 0x15 - (. - gText_Rom_5CB699)
	.endif
