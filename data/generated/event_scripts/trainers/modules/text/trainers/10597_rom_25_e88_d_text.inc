	@ data/text/trainers.inc:410 Route106_Text_DouglasDefeated (+2 aliases)
	.globl gText_Rom_25E88D
gText_Rom_25E88D: @ 0x0825E88D
	.string "まいりましたーっ!{EOS}"
	.if (. - gText_Rom_25E88D) > 0xa
	.error "gText_Rom_25E88D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E88D) < 0xa
	.space 0xa - (. - gText_Rom_25E88D)
	.endif
