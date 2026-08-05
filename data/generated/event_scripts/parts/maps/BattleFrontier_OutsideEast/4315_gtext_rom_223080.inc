	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:303 BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid
	.globl gText_Rom_223080
gText_Rom_223080: @ 0x08223080
	.string "きみは しって いるか!?\nバトルピラミッドの でんせつを!!\pみなぎる ゆうきを もつ トレーナー\nきんじとうの いただきを めざすとき\lおとこの なかの おとこ あらわれる\p……どうだ? しらないだろー!\nだって これ さっき おれが\lかんがえたんだ もんな!\pなに? どういう いみ かって?\nチッチッ!! それは おしえられないな!$"
	.if (. - gText_Rom_223080) > 0xab
	.error "gText_Rom_223080 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223080) < 0xab
	.space 0xab - (. - gText_Rom_223080)
	.endif
