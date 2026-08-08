	@ data/text/trainers.inc:1448 Route115_Text_TimothyRematchDefeat (+1 aliases)
	.globl gText_Rom_25D18D
gText_Rom_25D18D: @ 0x0825D18D
	.string "あいかわらずの つよさだ……!$"
	.if (. - gText_Rom_25D18D) > 0x10
	.error "gText_Rom_25D18D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D18D) < 0x10
	.space 0x10 - (. - gText_Rom_25D18D)
	.endif
