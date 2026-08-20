	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:324 BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers
	.globl gText_Rom_223312
gText_Rom_223312: @ 0x08223312
	.string "バトルフロンティアには\nつよい トレーナーだけでは なく\lかわった ちからを もった ひとたちも\lまねかれて いるな……\p……エニシダと いう おとこ……\pじつは なにか おおきな もくてきが\nあって ここを つくったのかも しれないぞ{EOS}"
	.if (. - gText_Rom_223312) > 0x77
	.error "gText_Rom_223312 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223312) < 0x77
	.space 0x77 - (. - gText_Rom_223312)
	.endif
