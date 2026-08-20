	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:317 MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream
	.globl gText_Rom_20D38D
gText_Rom_20D38D: @ 0x0820D38D
	.string "でっかい てつの かたまりが\nおおぞらを つきぬけ\lうちゅうまで とんで いく……\pそんな わしのゆめを ジャマする\nマグマだんめ! ぬぬぬ ゆるさん!{EOS}"
	.if (. - gText_Rom_20D38D) > 0x4d
	.error "gText_Rom_20D38D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D38D) < 0x4d
	.space 0x4d - (. - gText_Rom_20D38D)
	.endif
