	@ data/maps/BattleFrontier_Mart/scripts.inc:47 BattleFrontier_Mart_Text_ChaperonGrandson
	.globl gText_Rom_23B2A9
gText_Rom_23B2A9: @ 0x0823B2A9
	.string "わたしらは マゴの つきそいで\nここに きたんだが\lせっかく だから きねんに\lなにか おみやげをと おもってな"
	.byte EOS
	.if (. - gText_Rom_23B2A9) > 0x39
	.error "gText_Rom_23B2A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23B2A9) < 0x39
	.space 0x39 - (. - gText_Rom_23B2A9)
	.endif
