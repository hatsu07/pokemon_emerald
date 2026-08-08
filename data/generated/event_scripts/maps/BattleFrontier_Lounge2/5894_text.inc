	@ data/maps/BattleFrontier_Lounge2/scripts.inc:188 BattleFrontier_Lounge2_Text_PyramidKingSilverMons
	.globl gText_Rom_2373FE
gText_Rom_2373FE: @ 0x082373FE
	.string "きみは もう ピラミッドキングと\nたたかったこと あるかい?\pかれは あいての ちからを ためすとき\nいわの いわやまポケモン!\lこおりの ひょうざんポケモン!\lはがねの くろがねポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_2373FE) > 0x72
	.error "gText_Rom_2373FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2373FE) < 0x72
	.space 0x72 - (. - gText_Rom_2373FE)
	.endif
