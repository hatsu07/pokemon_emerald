	@ src/strings.c:570 gText_OutOfTheListedChoices
	.globl gText_OutOfTheListedChoices
gText_OutOfTheListedChoices: @ 0x085CBA05
	.string "ことばの なかから{EOS}"
	.if (. - gText_OutOfTheListedChoices) > 0xa
	.error "gText_OutOfTheListedChoices may not grow beyond its original slot"
	.endif
	.if (. - gText_OutOfTheListedChoices) < 0xa
	.space 0xa - (. - gText_OutOfTheListedChoices)
	.endif
