	@ data/maps/BattleFrontier_Lounge2/scripts.inc:197 BattleFrontier_Lounge2_Text_DoubleBattleAdvice2
	.globl gText_Rom_237557
gText_Rom_237557: @ 0x08237557
	.string "ここでの たたかいには\nちゅうい しなよ!\pダブルバトル ならではの せんぽうで\nたたかう トレーナーも いるみたいだぜ!"
	.byte EOS
	.if (. - gText_Rom_237557) > 0x3e
	.error "gText_Rom_237557 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237557) < 0x3e
	.space 0x3e - (. - gText_Rom_237557)
	.endif
