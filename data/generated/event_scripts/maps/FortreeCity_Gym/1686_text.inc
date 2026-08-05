	@ data/maps/FortreeCity_Gym/scripts.inc:287 FortreeCity_Gym_Text_WinonaPreRematch (+1 aliases)
	.globl gText_Rom_204AD0
gText_Rom_204AD0: @ 0x08204AD0
	.string "ナギ『ひとは ちじょうに いる かぎり\nいんりょくから のがれることは できない\pでも ぜんりょくで はばたけば\nそらを とぶことは できるのです\pチャンピオンにまで のぼりつめた\nあなたの じつりょく\lもういちど みせて いただきますわ!$"
	.if (. - gText_Rom_204AD0) > 0x79
	.error "gText_Rom_204AD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204AD0) < 0x79
	.space 0x79 - (. - gText_Rom_204AD0)
	.endif
