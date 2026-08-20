	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:408 PlayersHouse_1F_Text_DadShouldStayLonger
	.globl gText_Rom_1EFE82
gText_Rom_1EFE82: @ 0x081EFE82
	.string "ママ『パパったら\nひさしぶりに かえって きたのに\lポケモンの はなし ばっかり!\pもっと ゆっくり すれば いいのにね!{EOS}"
	.if (. - gText_Rom_1EFE82) > 0x3e
	.error "gText_Rom_1EFE82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFE82) < 0x3e
	.space 0x3e - (. - gText_Rom_1EFE82)
	.endif
