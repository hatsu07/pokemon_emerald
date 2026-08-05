	@ data/text/apprentice.inc:355 gText_ApprenticeThanksHeldItem7
	.globl gText_Rom_26F48D
gText_Rom_26F48D: @ 0x0826F48D
	.string "{STR_VAR_1} ですのね!\nさっそく とりよせますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_Rom_26F48D) > 0x3d
	.error "gText_Rom_26F48D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F48D) < 0x3d
	.space 0x3d - (. - gText_Rom_26F48D)
	.endif
