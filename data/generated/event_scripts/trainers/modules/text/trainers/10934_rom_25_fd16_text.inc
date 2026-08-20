	@ data/text/trainers.inc:2486 Route123_Text_YukiNotEnoughMons (+1 aliases)
	.globl gText_Rom_25FD16
gText_Rom_25FD16: @ 0x0825FD16
	.string "ユキ『ポケモンさん 2ひきは いないと\nたたかっても つまらないもん!{EOS}"
	.if (. - gText_Rom_25FD16) > 0x24
	.error "gText_Rom_25FD16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FD16) < 0x24
	.space 0x24 - (. - gText_Rom_25FD16)
	.endif
