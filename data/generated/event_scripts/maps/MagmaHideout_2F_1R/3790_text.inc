	@ data/maps/MagmaHideout_2F_1R/scripts.inc:24 MagmaHideout_2F_1R_Text_Grunt14Intro (+1 aliases)
	.globl gText_Rom_21C2E3
gText_Rom_21C2E3: @ 0x0821C2E3
	.string "むむむ!\pここに はいって これるのは\nマグマだんの メンバー だけのはず!\pなのに あなたは\nマグマだんの ふくを きていない……\pえーい あやしい やつめ!\nわたしと しょうぶ しなさい!"
	.byte EOS
	.if (. - gText_Rom_21C2E3) > 0x61
	.error "gText_Rom_21C2E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C2E3) < 0x61
	.space 0x61 - (. - gText_Rom_21C2E3)
	.endif
