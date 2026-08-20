	@ src/strings.c:494 gText_MenuOptionSave (+1 aliases)
	.globl gText_Rom_4E8B6D
gText_Rom_4E8B6D: @ 0x084E8B6D
	.string "レポート{EOS}"
	.if (. - gText_Rom_4E8B6D) > 0x5
	.error "gText_Rom_4E8B6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B6D) < 0x5
	.space 0x5 - (. - gText_Rom_4E8B6D)
	.endif

