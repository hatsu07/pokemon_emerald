	@ data/maps/MossdeepCity_Gym/scripts.inc:456 MossdeepCity_Gym_Text_KathleenPostBattle
	.globl gText_Rom_20BD13
gText_Rom_20BD13: @ 0x0820BD13
	.string "あなたの げんきが うつるわ\nはやく いっちゃいなさいよ!{EOS}"
	.if (. - gText_Rom_20BD13) > 0x1e
	.error "gText_Rom_20BD13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BD13) < 0x1e
	.space 0x1e - (. - gText_Rom_20BD13)
	.endif
