	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:363 BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21F1DE
gText_Rom_21F1DE: @ 0x0821F1DE
	.string "ハブネークが こわくて\nバトルチューブに はいれないの……\pで でも せっかく きたんだから\nがんばって せいは するわ……! ブルブル"
	.byte EOS
	.if (. - gText_Rom_21F1DE) != 0x45
	.error "gText_Rom_21F1DE must retain its original byte length"
	.endif
	.globl gText_Rom_21F21E
	.set gText_Rom_21F21E, gText_Rom_21F1DE + 0x40
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
