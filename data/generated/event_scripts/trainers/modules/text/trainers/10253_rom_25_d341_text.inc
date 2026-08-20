	@ data/text/trainers.inc:1490 Route115_Text_CyndyPostBattle
	.globl gText_Rom_25D341
gText_Rom_25D341: @ 0x0825D341
	.string "すなが クッションに なるから\nからだを いためないの\lさいこうの しゅぎょう ばしょね!{EOS}"
	.if (. - gText_Rom_25D341) > 0x2e
	.error "gText_Rom_25D341 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D341) < 0x2e
	.space 0x2e - (. - gText_Rom_25D341)
	.endif
