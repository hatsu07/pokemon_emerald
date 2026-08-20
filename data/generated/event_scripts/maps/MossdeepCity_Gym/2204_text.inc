	@ data/maps/MossdeepCity_Gym/scripts.inc:393 MossdeepCity_Gym_Text_VirgilPostBattle
	.globl gText_Rom_20B984
gText_Rom_20B984: @ 0x0820B984
	.string "よのなかに てんさいが いるならば\nここの ジムリーダーが そうだ……\pだが もしかすると キミの ほうが\nさいのうは うえかも しれない……{EOS}"
	.if (. - gText_Rom_20B984) > 0x48
	.error "gText_Rom_20B984 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B984) < 0x48
	.space 0x48 - (. - gText_Rom_20B984)
	.endif
