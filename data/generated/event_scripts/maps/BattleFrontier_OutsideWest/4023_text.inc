	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:363 BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21F1DE
gText_Rom_21F1DE: @ 0x0821F1DE
	.string "ハブネークが こわくて\nバトルチューブに はいれないの……\pで でも せっかく きたんだから\nがんばって せいは するわ……! ブルブル"
	.byte EOS
	.if (. - gText_Rom_21F1DE) != 0x45
	.error "gText_Rom_21F1DE must retain its original byte length"
	.endif
