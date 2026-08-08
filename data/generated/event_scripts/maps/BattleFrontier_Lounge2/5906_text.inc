	@ data/maps/BattleFrontier_Lounge2/scripts.inc:206 BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice
	.globl gText_Rom_23762C
gText_Rom_23762C: @ 0x0823762C
	.string "ともだちが あつまったら\nつうしんマルチ バトルルーム!!\pつよい ともだちと いっしょに あそべば\nつよい トレーナーたち との\lたたかいが まってるぜ!"
	.byte EOS
	.if (. - gText_Rom_23762C) > 0x4f
	.error "gText_Rom_23762C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23762C) < 0x4f
	.space 0x4f - (. - gText_Rom_23762C)
	.endif
