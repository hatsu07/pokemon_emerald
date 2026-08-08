	@ data/text/trainers.inc:1001 Route111_Text_WiltonRematchDefeat (+1 aliases)
	.globl gText_Rom_25BF59
gText_Rom_25BF59: @ 0x0825BF59
	.string "なかなか やるな!$"
	.if (. - gText_Rom_25BF59) > 0xa
	.error "gText_Rom_25BF59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BF59) < 0xa
	.space 0xa - (. - gText_Rom_25BF59)
	.endif
