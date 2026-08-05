	@ data/text/apprentice.inc:718 gText_ApprenticeMoveThanks7
	.globl gText_Rom_272012
gText_Rom_272012: @ 0x08272012
	.string "{STR_VAR_1} ですのね!\nさっそく そのように しますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!$"
	.if (. - gText_Rom_272012) > 0x40
	.error "gText_Rom_272012 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272012) < 0x40
	.space 0x40 - (. - gText_Rom_272012)
	.endif
