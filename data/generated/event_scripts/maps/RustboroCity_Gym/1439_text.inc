	@ data/maps/RustboroCity_Gym/scripts.inc:141 RustboroCity_Gym_Text_JoshIntro (+1 aliases)
	.globl gText_Rom_202612
gText_Rom_202612: @ 0x08202612
	.string "ジム トレーナーを なめるなよ!\nじつりょくの ちがいを みせてやる!{EOS}"
	.if (. - gText_Rom_202612) > 0x24
	.error "gText_Rom_202612 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202612) < 0x24
	.space 0x24 - (. - gText_Rom_202612)
	.endif
