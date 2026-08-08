	@ data/maps/MtPyre_Summit/scripts.inc:424 MtPyre_Summit_Text_Grunt1Intro (+1 aliases)
	.globl gText_Rom_216FD6
gText_Rom_216FD6: @ 0x08216FD6
	.string "くっそー! マグマだんの れんちゅうに\nさきを こされて しまったが\pオレたちだって まけちゃ いないぜ!$"
	.if (. - gText_Rom_216FD6) > 0x36
	.error "gText_Rom_216FD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216FD6) < 0x36
	.space 0x36 - (. - gText_Rom_216FD6)
	.endif
