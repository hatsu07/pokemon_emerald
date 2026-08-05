	@ data/text/apprentice.inc:526 gText_ApprenticeMonFirstThanks7
	.globl gText_Rom_2706C6
gText_Rom_2706C6: @ 0x082706C6
	.string "{STR_VAR_1} ですのね!\nすぐに ならびかえますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_Rom_2706C6) > 0x3d
	.error "gText_Rom_2706C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2706C6) < 0x3d
	.space 0x3d - (. - gText_Rom_2706C6)
	.endif
