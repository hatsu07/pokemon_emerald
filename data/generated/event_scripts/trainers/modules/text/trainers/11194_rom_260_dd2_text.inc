	@ data/text/trainers.inc:2873 Route126_Text_IsobelIntro (+1 aliases)
	.globl gText_Rom_260DD2
gText_Rom_260DD2: @ 0x08260DD2
	.string "はなに かいすいが はいると\nすっごく つらいよね?$"
	.if (. - gText_Rom_260DD2) > 0x1b
	.error "gText_Rom_260DD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260DD2) < 0x1b
	.space 0x1b - (. - gText_Rom_260DD2)
	.endif
