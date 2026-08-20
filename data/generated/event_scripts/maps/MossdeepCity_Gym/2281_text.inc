	@ data/maps/MossdeepCity_Gym/scripts.inc:507 MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons (+1 aliases)
	.globl gText_Rom_20C0D6
gText_Rom_20C0D6: @ 0x0820C0D6
	.string "フウ『へへへ…… ジムリーダーが\pラン『ふたりも いるんで おどろいた?\pフウ『あら? たたかえる ポケモンが\nラン『いっぴき しか いないヨ!\pフウ『それでは たたかえないね!\nラン『しょうぶを たのしみたいから\lもっと ポケモン つれてきてヨ!{EOS}"
	.if (. - gText_Rom_20C0D6) > 0x7d
	.error "gText_Rom_20C0D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C0D6) < 0x7d
	.space 0x7d - (. - gText_Rom_20C0D6)
	.endif
