	@ data/text/trainers.inc:1232 Route113_Text_ToriPostBattle
	.globl gText_Rom_25C8A7
gText_Rom_25C8A7: @ 0x0825C8A7
	.string "ナナ『かざんばい どれくらい たまったかな?\nしろいビードロ つくれると いいのにね!{EOS}"
	.if (. - gText_Rom_25C8A7) > 0x2c
	.error "gText_Rom_25C8A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C8A7) < 0x2c
	.space 0x2c - (. - gText_Rom_25C8A7)
	.endif
