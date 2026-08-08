	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:309 BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower
	.globl gText_Rom_223181
gText_Rom_223181: @ 0x08223181
	.string "このひと バトルタワーに\nちょうせん している ときに\lおそろしく つよい トレーナーと\lたたかった みたい なの……\pあなたも バトルタワーに\nちょうせんする ときは ちゅういして……$"
	.if (. - gText_Rom_223181) > 0x5e
	.error "gText_Rom_223181 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223181) < 0x5e
	.space 0x5e - (. - gText_Rom_223181)
	.endif
