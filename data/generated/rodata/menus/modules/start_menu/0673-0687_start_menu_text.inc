	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BA8
gText_Rom_4E8BA8: @ 0x084E8BA8
	.string "げんざい　1だんめ$"
	.if (. - gText_Rom_4E8BA8) > 0xa
	.error "gText_Rom_4E8BA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BA8) < 0xa
	.space 0xa - (. - gText_Rom_4E8BA8)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BB2
gText_Rom_4E8BB2: @ 0x084E8BB2
	.string "げんざい　2だんめ$"
	.if (. - gText_Rom_4E8BB2) > 0xa
	.error "gText_Rom_4E8BB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BB2) < 0xa
	.space 0xa - (. - gText_Rom_4E8BB2)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BBC
gText_Rom_4E8BBC: @ 0x084E8BBC
	.string "げんざい　3だんめ$"
	.if (. - gText_Rom_4E8BBC) > 0xa
	.error "gText_Rom_4E8BBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BBC) < 0xa
	.space 0xa - (. - gText_Rom_4E8BBC)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BC6
gText_Rom_4E8BC6: @ 0x084E8BC6
	.string "げんざい　4だんめ$"
	.if (. - gText_Rom_4E8BC6) > 0xa
	.error "gText_Rom_4E8BC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BC6) < 0xa
	.space 0xa - (. - gText_Rom_4E8BC6)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BD0
gText_Rom_4E8BD0: @ 0x084E8BD0
	.string "げんざい　5だんめ$"
	.if (. - gText_Rom_4E8BD0) > 0xa
	.error "gText_Rom_4E8BD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BD0) < 0xa
	.space 0xa - (. - gText_Rom_4E8BD0)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BDA
gText_Rom_4E8BDA: @ 0x084E8BDA
	.string "げんざい　6だんめ$"
	.if (. - gText_Rom_4E8BDA) > 0xa
	.error "gText_Rom_4E8BDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BDA) < 0xa
	.space 0xa - (. - gText_Rom_4E8BDA)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BE4
gText_Rom_4E8BE4: @ 0x084E8BE4
	.string "げんざい　7だんめ$"
	.if (. - gText_Rom_4E8BE4) > 0xa
	.error "gText_Rom_4E8BE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BE4) < 0xa
	.space 0xa - (. - gText_Rom_4E8BE4)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BEE
gText_Rom_4E8BEE: @ 0x084E8BEE
	.string "げんざい　ちょうじょう$"
	.if (. - gText_Rom_4E8BEE) > 0xc
	.error "gText_Rom_4E8BEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BEE) < 0xc
	.space 0xc - (. - gText_Rom_4E8BEE)
	.endif
	.space 0x2, 0x00
