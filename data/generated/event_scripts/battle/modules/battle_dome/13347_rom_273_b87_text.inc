	@ src/battle_dome.c:890 battle_dome_line_890
	.globl gText_Rom_273B87
gText_Rom_273B87: @ 0x08273B87
	.string "ちからを ためて いっきに せめるのが とくい。{EOS}"
	.if (. - gText_Rom_273B87) > 0x19
	.error "gText_Rom_273B87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B87) < 0x19
	.space 0x19 - (. - gText_Rom_273B87)
	.endif
