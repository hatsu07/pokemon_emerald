	@ data/text/trainers.inc:1214 Route113_Text_LaoPostRematch
	.globl gText_Rom_25C7CF
gText_Rom_25C7CF: @ 0x0825C7CF
	.string "かくれかたは よかったが\nしょうぶが いまいち だった……\pそれでは しつれいするで ござる$"
	.if (. - gText_Rom_25C7CF) > 0x2f
	.error "gText_Rom_25C7CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C7CF) < 0x2f
	.space 0x2f - (. - gText_Rom_25C7CF)
	.endif
