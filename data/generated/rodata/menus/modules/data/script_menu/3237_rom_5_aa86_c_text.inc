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
	@ Decoded text from ROM range: offset=0x5AA871, size=0x6
	.string "ぐーんと　$"
