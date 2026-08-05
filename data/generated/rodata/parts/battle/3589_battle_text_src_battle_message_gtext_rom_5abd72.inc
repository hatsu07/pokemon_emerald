	@ src/battle_message.c:1510 gText_AFormerChampion
	.globl gText_Rom_5ABD72
gText_Rom_5ABD72: @ 0x085ABD72
	.string "もと チャンピオン!\p$"
	.if (. - gText_Rom_5ABD72) > 0xc
	.error "gText_Rom_5ABD72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD72) < 0xc
	.space 0xc - (. - gText_Rom_5ABD72)
	.endif
