	@ src/strings.c:494 gText_MenuOptionSave (+1 aliases)
	.globl gText_Rom_5CADC6
gText_Rom_5CADC6: @ 0x085CADC6
	.string "レポート{EOS}"
	.if (. - gText_Rom_5CADC6) > 0x5
	.error "gText_Rom_5CADC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADC6) < 0x5
	.space 0x5 - (. - gText_Rom_5CADC6)
	.endif
