	@ src/main_menu.c:275 gText_ContinueMenuTime (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC341
gText_Rom_5CC341: @ 0x085CC341
	.string "プレイじかん$"
	.if (. - gText_Rom_5CC341) != 0x7
	.error "gText_Rom_5CC341 must retain its original byte length"
	.endif
