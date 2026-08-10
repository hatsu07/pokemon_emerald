	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AA80C
gText_Rom_5AA80C: @ 0x085AA80C
	.string "かった！$"
	.if (. - gText_Rom_5AA80C) > 0x5
	.error "gText_Rom_5AA80C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA80C) < 0x5
	.space 0x5 - (. - gText_Rom_5AA80C)
	.endif
	@ analyzed canonical ROM range 0x085AA811-0x085AA820
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x13FD, 0x0019, 0x1AFD, 0xFE44, 0x1F03, 0x0008, 0x1F07, 0x1527
	.globl gText_Rom_5AA821
gText_Rom_5AA821: @ 0x085AA821
	.string "かった！$"
	.if (. - gText_Rom_5AA821) > 0x5
	.error "gText_Rom_5AA821 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA821) < 0x5
	.space 0x5 - (. - gText_Rom_5AA821)
	.endif

