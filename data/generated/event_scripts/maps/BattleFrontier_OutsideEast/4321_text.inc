	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:312 BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll
	.globl gText_Rom_2231DF
gText_Rom_2231DF: @ 0x082231DF
	.string "さて! バトルポイントも たまったし!\nまた おおきな ぬいぐるみ でも\lもらいに いこーっと!$"
	.if (. - gText_Rom_2231DF) > 0x31
	.error "gText_Rom_2231DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2231DF) < 0x31
	.space 0x31 - (. - gText_Rom_2231DF)
	.endif
