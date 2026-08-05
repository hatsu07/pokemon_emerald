	@ data/maps/RustboroCity_Gym/scripts.inc:239 RustboroCity_Gym_Text_RoxanneRegisterCall
	.globl gText_Rom_2029DC
gText_Rom_2029DC: @ 0x082029DC
	.string "…… …… ……\n…… …… …… ピッ!\pツツジ『あっ {PLAYER}さん ですか?\nわたくし カナズミの ツツジです!\pトウキさんから ききましたよぉ\nあなた すごい いきおいで\lかちすすんで いるらしい ですね!\pこちらも まけっぱなしでは いられません\nもういちど ジムを きたえなおして\lいつかまた ちょうせんを うけますよ!\pそのひが くるのを\nどうぞ まっていて くださいね!\p…… …… ……\n…… …… …… ツー$"
	.if (. - gText_Rom_2029DC) > 0xd4
	.error "gText_Rom_2029DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2029DC) < 0xd4
	.space 0xd4 - (. - gText_Rom_2029DC)
	.endif
