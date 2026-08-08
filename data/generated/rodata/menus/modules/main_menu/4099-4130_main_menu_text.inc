	@ src/main_menu.c:481 main_menu_line_481
	.globl gText_Rom_5C8E9A
gText_Rom_5C8E9A: @ 0x085C8E9A
	.string "イツオ$"
	.if (. - gText_Rom_5C8E9A) > 0x4
	.error "gText_Rom_5C8E9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E9A) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E9A)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:482 main_menu_line_482
	.globl gText_Rom_5C8EA0
gText_Rom_5C8EA0: @ 0x085C8EA0
	.string "ギョク$"
	.if (. - gText_Rom_5C8EA0) > 0x4
	.error "gText_Rom_5C8EA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EA0) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EA0)
	.endif
	@ Replaced baserom.gba range: offset=0x5C8EA4, size=0x8
	.byte 0xFF, 0xFF, 0x59, 0x52, 0xFF, 0xFF, 0xFF, 0xFF

	@ src/main_menu.c:484 main_menu_line_484
	.globl gText_Rom_5C8EAC
gText_Rom_5C8EAC: @ 0x085C8EAC
	.string "シュウサク$"
	.if (. - gText_Rom_5C8EAC) > 0x6
	.error "gText_Rom_5C8EAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EAC) < 0x6
	.space 0x6 - (. - gText_Rom_5C8EAC)
	.endif

	@ src/main_menu.c:485 main_menu_line_485
	.globl gText_Rom_5C8EB2
gText_Rom_5C8EB2: @ 0x085C8EB2
	.string "セイゴ$"
	.if (. - gText_Rom_5C8EB2) > 0x4
	.error "gText_Rom_5C8EB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EB2) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EB2)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:486 main_menu_line_486
	.globl gText_Rom_5C8EB8
gText_Rom_5C8EB8: @ 0x085C8EB8
	.string "ダイサク$"
	.if (. - gText_Rom_5C8EB8) > 0x5
	.error "gText_Rom_5C8EB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EB8) < 0x5
	.space 0x5 - (. - gText_Rom_5C8EB8)
	.endif
	.space 0x1, 0xFF

	@ src/main_menu.c:487 main_menu_line_487
	.globl gText_Rom_5C8EBE
gText_Rom_5C8EBE: @ 0x085C8EBE
	.string "タカヒト$"
	.if (. - gText_Rom_5C8EBE) > 0x5
	.error "gText_Rom_5C8EBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EBE) < 0x5
	.space 0x5 - (. - gText_Rom_5C8EBE)
	.endif
	.space 0x1, 0xFF

	@ src/main_menu.c:488 main_menu_line_488
	.globl gText_Rom_5C8EC4
gText_Rom_5C8EC4: @ 0x085C8EC4
	.string "タツヤ$"
	.if (. - gText_Rom_5C8EC4) > 0x4
	.error "gText_Rom_5C8EC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EC4) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EC4)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:489 main_menu_line_489
	.globl gText_Rom_5C8ECA
gText_Rom_5C8ECA: @ 0x085C8ECA
	.string "ダニエル$"
	.if (. - gText_Rom_5C8ECA) > 0x5
	.error "gText_Rom_5C8ECA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8ECA) < 0x5
	.space 0x5 - (. - gText_Rom_5C8ECA)
	.endif
	.space 0x1, 0xFF

	@ src/main_menu.c:490 main_menu_line_490
	.globl gText_Rom_5C8ED0
gText_Rom_5C8ED0: @ 0x085C8ED0
	.string "テルキ$"
	.if (. - gText_Rom_5C8ED0) > 0x4
	.error "gText_Rom_5C8ED0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8ED0) < 0x4
	.space 0x4 - (. - gText_Rom_5C8ED0)
	.endif
	@ Replaced baserom.gba range: offset=0x5C8ED4, size=0x8
	.byte 0xFF, 0xFF, 0x64, 0x71, 0xFF, 0xFF, 0xFF, 0xFF

	@ src/main_menu.c:492 main_menu_line_492
	.globl gText_Rom_5C8EDC
gText_Rom_5C8EDC: @ 0x085C8EDC
	.string "トモヤ$"
	.if (. - gText_Rom_5C8EDC) > 0x4
	.error "gText_Rom_5C8EDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EDC) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EDC)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:493 main_menu_line_493
	.globl gText_Rom_5C8EE2
gText_Rom_5C8EE2: @ 0x085C8EE2
	.string "ヒトシ$"
	.if (. - gText_Rom_5C8EE2) > 0x4
	.error "gText_Rom_5C8EE2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EE2) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EE2)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:494 main_menu_line_494
	.globl gText_Rom_5C8EE8
gText_Rom_5C8EE8: @ 0x085C8EE8
	.string "ヒロアキ$"
	.if (. - gText_Rom_5C8EE8) > 0x5
	.error "gText_Rom_5C8EE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EE8) < 0x5
	.space 0x5 - (. - gText_Rom_5C8EE8)
	.endif
	.space 0x1, 0xFF

	@ src/main_menu.c:495 main_menu_line_495
	.globl gText_Rom_5C8EEE
gText_Rom_5C8EEE: @ 0x085C8EEE
	.string "ユキヒコ$"
	.if (. - gText_Rom_5C8EEE) > 0x5
	.error "gText_Rom_5C8EEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EEE) < 0x5
	.space 0x5 - (. - gText_Rom_5C8EEE)
	.endif
	.space 0x1, 0xFF

	@ src/main_menu.c:496 main_menu_line_496
	.globl gText_Rom_5C8EF4
gText_Rom_5C8EF4: @ 0x085C8EF4
	.string "ラルド$"
	.if (. - gText_Rom_5C8EF4) > 0x4
	.error "gText_Rom_5C8EF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EF4) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EF4)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:497 main_menu_line_497
	.globl gText_Rom_5C8EFA
gText_Rom_5C8EFA: @ 0x085C8EFA
	.string "リクヤ$"
	.if (. - gText_Rom_5C8EFA) > 0x4
	.error "gText_Rom_5C8EFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EFA) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EFA)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:498 main_menu_line_498
	.globl gText_Rom_5C8F00
gText_Rom_5C8F00: @ 0x085C8F00
	.string "リチャード$"
	.if (. - gText_Rom_5C8F00) > 0x6
	.error "gText_Rom_5C8F00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F00) < 0x6
	.space 0x6 - (. - gText_Rom_5C8F00)
	.endif

