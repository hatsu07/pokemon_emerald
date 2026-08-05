	@ data/text/apprentice.inc:352 gText_ApprenticeThanksNoHeldItem7
	.globl gText_Rom_26F44B
gText_Rom_26F44B: @ 0x0826F44B
	.string "わかりましたわ!\nこのまま がんばる ことに しますわ\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_Rom_26F44B) > 0x42
	.error "gText_Rom_26F44B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F44B) < 0x42
	.space 0x42 - (. - gText_Rom_26F44B)
	.endif
