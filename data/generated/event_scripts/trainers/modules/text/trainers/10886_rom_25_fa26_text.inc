	@ data/text/trainers.inc:2411 Route123_Text_BraxtonPostBattle
	.globl gText_Rom_25FA26
gText_Rom_25FA26: @ 0x0825FA26
	.string "ジムバッジに はじない\nたたかい だったよ!$"
	.if (. - gText_Rom_25FA26) > 0x17
	.error "gText_Rom_25FA26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FA26) < 0x17
	.space 0x17 - (. - gText_Rom_25FA26)
	.endif
