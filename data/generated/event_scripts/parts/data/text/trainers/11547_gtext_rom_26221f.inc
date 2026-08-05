	@ data/text/trainers.inc:3395 Route134_Text_KelvinDefeat (+1 aliases)
	.globl gText_Rom_26221F
gText_Rom_26221F: @ 0x0826221F
	.string "あわわわわ\nやめてください やめてくださいよ!$"
	.if (. - gText_Rom_26221F) > 0x18
	.error "gText_Rom_26221F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26221F) < 0x18
	.space 0x18 - (. - gText_Rom_26221F)
	.endif
