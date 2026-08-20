	@ data/maps/MossdeepCity_Gym/scripts.inc:474 MossdeepCity_Gym_Text_MaceyPostBattle
	.globl gText_Rom_20BDB5
gText_Rom_20BDB5: @ 0x0820BDB5
	.string "フン あんたは つよいけど\nエスパーむき では ないわ!\lなんだか たたかいかたが がさつ だもん!{EOS}"
	.if (. - gText_Rom_20BDB5) > 0x33
	.error "gText_Rom_20BDB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BDB5) < 0x33
	.space 0x33 - (. - gText_Rom_20BDB5)
	.endif
