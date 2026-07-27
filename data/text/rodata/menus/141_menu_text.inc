	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AA86C
gText_Rom_5AA86C: @ 0x085AA86C
	.string "かった！$"
	.if (. - gText_Rom_5AA86C) > 0x5
	.error "gText_Rom_5AA86C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA86C) < 0x5
	.space 0x5 - (. - gText_Rom_5AA86C)
	.endif
	.incbin "baserom.gba", 0x5aa871, 0x6
	.globl gUnknown_85AA877
gUnknown_85AA877: @ 0x085AA877

