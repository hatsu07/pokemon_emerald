	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AABBB
gText_Rom_5AABBB: @ 0x085AABBB
	.string "かった！$"
	.if (. - gText_Rom_5AABBB) > 0x5
	.error "gText_Rom_5AABBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AABBB) < 0x5
	.space 0x5 - (. - gText_Rom_5AABBB)
	.endif
	@ Decoded text from ROM range: offset=0x5AABC0, size=0xF
	.string "かぜは　ねっぷうに　なった！$"

