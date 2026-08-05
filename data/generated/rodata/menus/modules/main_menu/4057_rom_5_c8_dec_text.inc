	@ src/main_menu.c:275 gText_ContinueMenuTime (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8DEC
gText_Rom_5C8DEC: @ 0x085C8DEC
	.string "プレイじかん$"
	.if (. - gText_Rom_5C8DEC) != 0x7
	.error "gText_Rom_5C8DEC must retain its original byte length"
	.endif
