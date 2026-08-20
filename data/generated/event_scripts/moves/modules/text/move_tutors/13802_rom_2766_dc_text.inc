	@ data/text/move_tutors.inc:199 MoveTutor_Text_DoubleEdgeWhichMon
	.globl gText_Rom_2766DC
gText_Rom_2766DC: @ 0x082766DC
	.string "ん じゃあ\nどの ポケモンが いいか きめてよ{EOS}"
	.if (. - gText_Rom_2766DC) > 0x18
	.error "gText_Rom_2766DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2766DC) < 0x18
	.space 0x18 - (. - gText_Rom_2766DC)
	.endif
