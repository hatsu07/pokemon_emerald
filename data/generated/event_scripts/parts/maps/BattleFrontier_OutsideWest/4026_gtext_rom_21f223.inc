	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:366 BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors
	.globl gText_Rom_21F223
gText_Rom_21F223: @ 0x0821F223
	.string "ね! わたしと ジャンケンしよ!\nじゃーん けーん ぽん!\p…… …… ……"
	.byte EOS
	.if (. - gText_Rom_21F223) > 0x27
	.error "gText_Rom_21F223 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F223) < 0x27
	.space 0x27 - (. - gText_Rom_21F223)
	.endif
