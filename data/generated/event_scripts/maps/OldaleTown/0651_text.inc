	@ data/maps/OldaleTown/scripts.inc:386 OldaleTown_Text_BrendanLetsGoBack
	.globl gText_Rom_1E4C11
gText_Rom_1E4C11: @ 0x081E4C11
	.string "ユウキ『オレ さきに\nけんきゅうじょに もどるから\l{PLAYER}も はやく こいよな{EOS}"
	.if (. - gText_Rom_1E4C11) > 0x27
	.error "gText_Rom_1E4C11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E4C11) < 0x27
	.space 0x27 - (. - gText_Rom_1E4C11)
	.endif
