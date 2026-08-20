	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:252 EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside
	.globl gText_Rom_210F6D
gText_Rom_210F6D: @ 0x08210F6D
	.string "ミクリ『もうしわけ ないが……\pここから さきの へやは\nチャンピオンに なった トレーナー だけが\lはいることの できる ばしょ\pきみは そこで オダマキはかせと\nいっしょに まっていて くれたまえ{EOS}"
	.if (. - gText_Rom_210F6D) > 0x65
	.error "gText_Rom_210F6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210F6D) < 0x65
	.space 0x65 - (. - gText_Rom_210F6D)
	.endif
