	@ data/maps/BattleFrontier_Lounge2/scripts.inc:179 BattleFrontier_Lounge2_Text_PalaceMavenSilverMons
	.globl gText_Rom_2372B8
gText_Rom_2372B8: @ 0x082372B8
	.string "きみは パレスガーディアンと\nたたかったこと あるかい?\pやつは あいての こころを ためすとき\nどくと ひこうの こうもりポケモン!\lノーマルの ものぐさポケモン\lみずと こおりの のりものポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_2372B8) > 0x78
	.error "gText_Rom_2372B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2372B8) < 0x78
	.space 0x78 - (. - gText_Rom_2372B8)
	.endif
