	@ data/text/trainers.inc:1199 Route113_Text_LaoDefeat (+2 aliases)
	.globl gText_Rom_25C75B
gText_Rom_25C75B: @ 0x0825C75B
	.string "まいったで ござる{EOS}"
	.if (. - gText_Rom_25C75B) > 0xa
	.error "gText_Rom_25C75B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C75B) < 0xa
	.space 0xa - (. - gText_Rom_25C75B)
	.endif
