	@ src/main_menu.c:275 gText_ContinueMenuTime (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.

	.globl gText_Rom_4E8CC8
gText_Rom_4E8CC8: @ 0x084E8CC8
	.string "プレイじかん{EOS}"
	.if (. - gText_Rom_4E8CC8) != 0x7
	.error "gText_Rom_4E8CC8 must retain its original byte length"
	.endif
