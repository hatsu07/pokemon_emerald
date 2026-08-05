	@ src/berry_tag_screen.c:177 sText_SizeSlash
	.globl gText_Rom_5C977D
gText_Rom_5C977D: @ 0x085C977D
	.string "おおきさ$"
	.if (. - gText_Rom_5C977D) > 0x5
	.error "gText_Rom_5C977D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C977D) < 0x5
	.space 0x5 - (. - gText_Rom_5C977D)
	.endif
