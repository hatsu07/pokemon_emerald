	@ src/battle_message.c:1509 gText_WillChampionshipDreamComeTrue
	.globl gText_Rom_5ABD5D
gText_Rom_5ABD5D: @ 0x085ABD5D
	.string "ひがんの はつ ゆうしょう なるか!?\p$"
	.if (. - gText_Rom_5ABD5D) > 0x15
	.error "gText_Rom_5ABD5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD5D) < 0x15
	.space 0x15 - (. - gText_Rom_5ABD5D)
	.endif

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

	@ src/battle_message.c:1511 gText_ThePreviousChampion
	.globl gText_Rom_5ABD7E
gText_Rom_5ABD7E: @ 0x085ABD7E
	.string "ぜんかい チャンピオン!\p$"
	.if (. - gText_Rom_5ABD7E) > 0xe
	.error "gText_Rom_5ABD7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD7E) < 0xe
	.space 0xe - (. - gText_Rom_5ABD7E)
	.endif

