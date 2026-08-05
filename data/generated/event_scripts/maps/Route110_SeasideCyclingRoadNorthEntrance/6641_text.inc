	@ data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.inc:55 Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad (+1 aliases)
	.globl gText_Rom_240744
gText_Rom_240744: @ 0x08240744
	.string "サイクリング ロードでは\nおもいっきり スピードを だせるんだ!\pだれにも ぶつからずに かけぬけると\nすごく きもち いいよ!$"
	.if (. - gText_Rom_240744) > 0x41
	.error "gText_Rom_240744 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240744) < 0x41
	.space 0x41 - (. - gText_Rom_240744)
	.endif
