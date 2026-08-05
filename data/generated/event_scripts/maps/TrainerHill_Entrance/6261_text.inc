	@ data/maps/TrainerHill_Entrance/scripts.inc:296 TrainerHill_Entrance_Text_WelcomeToTrainerHill
	.globl gText_Rom_23BA7C
gText_Rom_23BA7C: @ 0x0823BA7C
	.string "ようこそ いらっしゃいました!\pここは さまざまな トレーナーさんとの\nタッグバトルが たのしめる\lトレーナーヒルです!"
	.byte EOS
	.if (. - gText_Rom_23BA7C) > 0x3d
	.error "gText_Rom_23BA7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BA7C) < 0x3d
	.space 0x3d - (. - gText_Rom_23BA7C)
	.endif
