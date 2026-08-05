	@ data/text/apprentice.inc:622 gText_ApprenticeMonThanks7
	.globl gText_Rom_271399
gText_Rom_271399: @ 0x08271399
	.string "{STR_VAR_1} ですのね!\nさっそく さがして きますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!$"
	.if (. - gText_Rom_271399) > 0x3f
	.error "gText_Rom_271399 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271399) < 0x3f
	.space 0x3f - (. - gText_Rom_271399)
	.endif
