	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:354 BattleFrontier_BattlePikeThreePathRoom_Text_WaveOfNostaliga
	.globl gText_Rom_234318
gText_Rom_234318: @ 0x08234318
	.string "なぜだか すこし だけ なつかしい\nふんいきを かんじるの ですが……"
	.byte EOS
	.if (. - gText_Rom_234318) > 0x24
	.error "gText_Rom_234318 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234318) < 0x24
	.space 0x24 - (. - gText_Rom_234318)
	.endif
