	@ src/berry_tag_screen.c:178 sText_FirmSlash
	.globl gText_Rom_5C9782
gText_Rom_5C9782: @ 0x085C9782
	.string "かたさ$"
	.if (. - gText_Rom_5C9782) > 0x4
	.error "gText_Rom_5C9782 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9782) < 0x4
	.space 0x4 - (. - gText_Rom_5C9782)
	.endif
