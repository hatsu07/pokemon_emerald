	@ src/battle_main.c:361 battle_main_line_361
	.globl gText_Rom_2E37ED
gText_Rom_2E37ED: @ 0x082E37ED
	.string "ドームスーパースター$"
	.if (. - gText_Rom_2E37ED) > 0xb
	.error "gText_Rom_2E37ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37ED) < 0xb
	.space 0xb - (. - gText_Rom_2E37ED)
	.endif
