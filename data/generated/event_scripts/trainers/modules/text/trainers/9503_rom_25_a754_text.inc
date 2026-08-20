	@ data/text/trainers.inc:410 Route106_Text_DouglasDefeated (+2 aliases)
	.globl gText_Rom_25A754
gText_Rom_25A754: @ 0x0825A754
	.string "まいりましたーっ!{EOS}"
	.if (. - gText_Rom_25A754) > 0xa
	.error "gText_Rom_25A754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A754) < 0xa
	.space 0xa - (. - gText_Rom_25A754)
	.endif
