	@ data/text/trainers.inc:632 Route109_Text_LolaDefeated (+2 aliases)
	.globl gText_Rom_25AFEE
gText_Rom_25AFEE: @ 0x0825AFEE
	.string "ママーっ!$"
	.if (. - gText_Rom_25AFEE) > 0x6
	.error "gText_Rom_25AFEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AFEE) < 0x6
	.space 0x6 - (. - gText_Rom_25AFEE)
	.endif
