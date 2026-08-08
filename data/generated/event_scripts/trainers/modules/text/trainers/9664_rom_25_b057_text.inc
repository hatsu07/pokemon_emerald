	@ data/text/trainers.inc:632 Route109_Text_LolaDefeated (+2 aliases)
	.globl gText_Rom_25B057
gText_Rom_25B057: @ 0x0825B057
	.string "ママーっ!$"
	.if (. - gText_Rom_25B057) > 0x6
	.error "gText_Rom_25B057 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B057) < 0x6
	.space 0x6 - (. - gText_Rom_25B057)
	.endif
