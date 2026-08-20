	@ data/maps/LilycoveCity/scripts.inc:657 LilycoveCity_Text_TeamAquaLotGoneForGood
	.globl gText_Rom_1E11AF
gText_Rom_1E11AF: @ 0x081E11AF
	.string "いりえに あった どうくつ……\nいつのまにやら カラッポに なっておる\pアクアだんの れんちゅう\nどこかへ いって しまったらしい のう{EOS}"
	.if (. - gText_Rom_1E11AF) > 0x45
	.error "gText_Rom_1E11AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E11AF) < 0x45
	.space 0x45 - (. - gText_Rom_1E11AF)
	.endif
