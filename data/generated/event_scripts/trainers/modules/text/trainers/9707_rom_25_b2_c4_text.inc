	@ data/text/trainers.inc:707 Route109_Text_ChandlerPostBattle
	.globl gText_Rom_25B2C4
gText_Rom_25B2C4: @ 0x0825B2C4
	.string "せっかく まるい うきわを\nみせて あげたのにさ$"
	.if (. - gText_Rom_25B2C4) > 0x19
	.error "gText_Rom_25B2C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B2C4) < 0x19
	.space 0x19 - (. - gText_Rom_25B2C4)
	.endif
