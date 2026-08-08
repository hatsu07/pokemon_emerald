	@ data/maps/BattleFrontier_Lounge2/scripts.inc:182 BattleFrontier_Lounge2_Text_PalaceMavenGoldMons
	.globl gText_Rom_237330
gText_Rom_237330: @ 0x08237330
	.string "きみは ほんきの パレスガーディアンと\nたたかったこと あるかい?\pやつが てかげんぬきで たたかうときは\nほのおの でんせつポケモン!\lノーマルの ものぐさポケモン\lみずの オーロラポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_237330) > 0x74
	.error "gText_Rom_237330 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237330) < 0x74
	.space 0x74 - (. - gText_Rom_237330)
	.endif
