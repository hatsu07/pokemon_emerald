	@ data/maps/MeteorFalls_1F_2R/scripts.inc:132 MeteorFalls_1F_2R_Text_JayPostBattle
	.globl gText_Rom_2133FF
gText_Rom_2133FF: @ 0x082133FF
	.string "ハツ『けっこんして 50ねん……\nふうふげんかに なるたび\lポケモンしょうぶを していましたねえ{EOS}"
	.if (. - gText_Rom_2133FF) > 0x31
	.error "gText_Rom_2133FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2133FF) < 0x31
	.space 0x31 - (. - gText_Rom_2133FF)
	.endif
