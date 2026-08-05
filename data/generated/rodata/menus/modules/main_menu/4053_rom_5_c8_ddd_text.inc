	@ src/main_menu.c:274 gText_ContinueMenuPlayer (+2 aliases)
	.globl gText_Rom_5C8DDD
gText_Rom_5C8DDD: @ 0x085C8DDD
	.string "しゅじんこう$"
	.if (. - gText_Rom_5C8DDD) > 0x7
	.error "gText_Rom_5C8DDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8DDD) < 0x7
	.space 0x7 - (. - gText_Rom_5C8DDD)
	.endif

