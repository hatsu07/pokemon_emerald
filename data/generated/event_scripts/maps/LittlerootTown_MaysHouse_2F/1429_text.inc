	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:388 RivalsHouse_2F_Text_MayWhereShouldIGoNext
	.globl gText_Rom_1F1142
gText_Rom_1F1142: @ 0x081F1142
	.string "ハルカ『こんどは どこに\nポケモン つかまえに いこうかな?\pいった さきで また\n{PLAYER}{KUN}と であったりして!?{EOS}"
	.if (. - gText_Rom_1F1142) > 0x3a
	.error "gText_Rom_1F1142 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F1142) < 0x3a
	.space 0x3a - (. - gText_Rom_1F1142)
	.endif
