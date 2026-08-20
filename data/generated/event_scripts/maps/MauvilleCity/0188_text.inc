	@ data/maps/MauvilleCity/scripts.inc:549 MauvilleCity_Text_WallyPokenavCall
	.globl gText_Rom_1DE1A8
gText_Rom_1DE1A8: @ 0x081DE1A8
	.string "…… …… ……\n…… …… …… ピッ!\pミツル『あっ {PLAYER}さん!\nあのね おじさんが ぼくのために\lポケナビを てにいれて くれたんです!\pこれで いつでも {PLAYER}さんと\nれんらくが とれますね!\p…… …… ……\n…… …… …… ツー{EOS}"
	.if (. - gText_Rom_1DE1A8) > 0x79
	.error "gText_Rom_1DE1A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE1A8) < 0x79
	.space 0x79 - (. - gText_Rom_1DE1A8)
	.endif
