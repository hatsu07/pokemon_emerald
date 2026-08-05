	@ data/maps/BattleFrontier_Lounge2/scripts.inc:155 BattleFrontier_Lounge2_Text_FactoryHeadGoldMons
	.globl gText_Rom_236F66
gText_Rom_236F66: @ 0x08236F66
	.string "きみは ほんきの ファクトリーヘッドと\nたたかったこと あるかい?\pあいつは ほんきで たたかう ときでも\nレンタルポケモンの\lなかから どれか 3ひき!\lきみと ほとんど おなじ じょうけんで\lたたかう らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_236F66) > 0x6d
	.error "gText_Rom_236F66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236F66) < 0x6d
	.space 0x6d - (. - gText_Rom_236F66)
	.endif
