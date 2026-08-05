	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AA821
gText_Rom_5AA821: @ 0x085AA821
	.string "かった！$"
	.if (. - gText_Rom_5AA821) > 0x5
	.error "gText_Rom_5AA821 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA821) < 0x5
	.space 0x5 - (. - gText_Rom_5AA821)
	.endif

