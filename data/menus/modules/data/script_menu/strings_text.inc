	@ src/strings.c:494 gText_MenuOptionSave (+1 aliases)
	.globl gText_MenuOptionSave
gText_MenuOptionSave: @ 0x084E8B6D
	.string "レポート{EOS}"
	.if (. - gText_MenuOptionSave) > 0x5
	.error "gText_MenuOptionSave may not grow beyond its original slot"
	.endif
	.if (. - gText_MenuOptionSave) < 0x5
	.space 0x5 - (. - gText_MenuOptionSave)
	.endif

