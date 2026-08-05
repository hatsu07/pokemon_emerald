	@ data/maps/JaggedPass/scripts.inc:215 JaggedPass_Text_EthanRematchDefeat (+1 aliases)
	.globl gText_Rom_215F52
gText_Rom_215F52: @ 0x08215F52
	.string "やっぱり デコボコだと\nたたかいにくいよ……$"
	.if (. - gText_Rom_215F52) > 0x17
	.error "gText_Rom_215F52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215F52) < 0x17
	.space 0x17 - (. - gText_Rom_215F52)
	.endif
