	@ data/maps/FortreeCity_Gym/scripts.inc:176 FortreeCity_Gym_Text_EdwardoPostBattle
	.globl gText_Rom_2046EA
gText_Rom_2046EA: @ 0x082046EA
	.string "せかいは ひろい\nつよい トレーナーは たくさん いる\pオレも ここで しゅぎょうを つづけて\nつよくなって みせるよ!{EOS}"
	.if (. - gText_Rom_2046EA) > 0x3d
	.error "gText_Rom_2046EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2046EA) < 0x3d
	.space 0x3d - (. - gText_Rom_2046EA)
	.endif
