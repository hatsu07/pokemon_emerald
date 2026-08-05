	@ data/maps/BattleFrontier_Lounge2/scripts.inc:152 BattleFrontier_Lounge2_Text_FactoryHeadSilverMons
	.globl gText_Rom_236F08
gText_Rom_236F08: @ 0x08236F08
	.string "きみは もう ファクトリーヘッドと\nたたかったこと あるかい?\pあいつが つかう ポケモンは\nレンタルポケモンの\lなかから どれか 3ひき!\lきみと ほぼ おなじ じょうけん らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_236F08) > 0x5e
	.error "gText_Rom_236F08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236F08) < 0x5e
	.space 0x5e - (. - gText_Rom_236F08)
	.endif
