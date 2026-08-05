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

