	@ data/maps/SeafloorCavern_Room1/scripts.inc:20 SeafloorCavern_Room1_Text_Grunt1PostBattle
	.globl gText_Rom_2186B6
gText_Rom_2186B6: @ 0x082186B6
	.string "はやく かんぶに なって\nしたっぱを しごいて やりたい……{EOS}"
	.if (. - gText_Rom_2186B6) > 0x1f
	.error "gText_Rom_2186B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2186B6) < 0x1f
	.space 0x1f - (. - gText_Rom_2186B6)
	.endif
