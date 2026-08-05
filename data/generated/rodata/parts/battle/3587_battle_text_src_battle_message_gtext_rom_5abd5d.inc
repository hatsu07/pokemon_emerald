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
