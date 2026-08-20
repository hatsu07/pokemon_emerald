	@ data/text/trainers.inc:2477 Route123_Text_YukiIntro (+1 aliases)
	.globl gText_Rom_25FCC1
gText_Rom_25FCC1: @ 0x0825FCC1
	.string "ユキ『よーし!\nトレーナーさんの ポケモン やっつけます!{EOS}"
	.if (. - gText_Rom_25FCC1) > 0x1e
	.error "gText_Rom_25FCC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FCC1) < 0x1e
	.space 0x1e - (. - gText_Rom_25FCC1)
	.endif
