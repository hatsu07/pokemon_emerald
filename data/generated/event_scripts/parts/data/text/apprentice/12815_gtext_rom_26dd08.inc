	@ data/text/apprentice.inc:142 gText_ApprenticeLevelModeThanks7
	.globl gText_Rom_26DD08
gText_Rom_26DD08: @ 0x0826DD08
	.string "{STR_VAR_1} ですのね!\nわかりました がんばりますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_Rom_26DD08) > 0x3f
	.error "gText_Rom_26DD08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DD08) < 0x3f
	.space 0x3f - (. - gText_Rom_26DD08)
	.endif
