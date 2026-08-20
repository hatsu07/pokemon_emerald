	@ data/maps/Route104/scripts.inc:1108 Route104_Text_MayIntro (+1 aliases)
	.globl gText_Rom_1E7F62
gText_Rom_1E7F62: @ 0x081E7F62
	.string "ハルカ『トレーナーに なった ばかりの\n{PLAYER}{KUN}には まけないよ!{EOS}"
	.if (. - gText_Rom_1E7F62) > 0x22
	.error "gText_Rom_1E7F62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7F62) < 0x22
	.space 0x22 - (. - gText_Rom_1E7F62)
	.endif
