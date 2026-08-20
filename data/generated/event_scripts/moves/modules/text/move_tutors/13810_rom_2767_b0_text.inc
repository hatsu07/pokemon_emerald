	@ data/text/move_tutors.inc:221 MoveTutor_Text_ExplosionWhichMon
	.globl gText_Rom_2767B0
gText_Rom_2767B0: @ 0x082767B0
	.string "ぃよーし ドッカーンと おぼえさせるか!\nどの ポケモンが ぶちかますんか?{EOS}"
	.if (. - gText_Rom_2767B0) > 0x27
	.error "gText_Rom_2767B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2767B0) < 0x27
	.space 0x27 - (. - gText_Rom_2767B0)
	.endif
