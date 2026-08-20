	@ data/text/trainers.inc:1199 Route113_Text_LaoDefeat (+2 aliases)
	.globl gText_Rom_25C7C5
gText_Rom_25C7C5: @ 0x0825C7C5
	.string "まいったで ござる{EOS}"
	.if (. - gText_Rom_25C7C5) > 0xa
	.error "gText_Rom_25C7C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C7C5) < 0xa
	.space 0xa - (. - gText_Rom_25C7C5)
	.endif
