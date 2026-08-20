	@ data/maps/MossdeepCity_Gym/scripts.inc:402 MossdeepCity_Gym_Text_BlakePostBattle
	.globl gText_Rom_20BA3C
gText_Rom_20BA3C: @ 0x0820BA3C
	.string "モンスターボールは おおきすぎた\nこの わたぼこり なら ぜったいに……\pふううううううっ……!\p…… …… ……\n…… …… ……\pちがうぞ!\nはないきで とばして なんか いないぞ!{EOS}"
	.if (. - gText_Rom_20BA3C) > 0x5e
	.error "gText_Rom_20BA3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BA3C) < 0x5e
	.space 0x5e - (. - gText_Rom_20BA3C)
	.endif
