	@ src/strings.c:570 gText_OutOfTheListedChoices
	.globl gText_Rom_5CBA05
gText_Rom_5CBA05: @ 0x085CBA05
	.string "ことばの なかから{EOS}"
	.if (. - gText_Rom_5CBA05) > 0xa
	.error "gText_Rom_5CBA05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA05) < 0xa
	.space 0xa - (. - gText_Rom_5CBA05)
	.endif
