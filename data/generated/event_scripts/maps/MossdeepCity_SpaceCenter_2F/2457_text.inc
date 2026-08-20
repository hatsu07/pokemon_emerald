	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:399 MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel
	.globl gText_Rom_20DD76
gText_Rom_20DD76: @ 0x0820DD76
	.string "ダイゴ『マグマだん……\nロケットの ねんりょうなんか ぬすんで\lいったい なにをする つもりなんだ！{EOS}"
	.if (. - gText_Rom_20DD76) > 0x33
	.error "gText_Rom_20DD76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DD76) < 0x33
	.space 0x33 - (. - gText_Rom_20DD76)
	.endif
