	@ data/text/trainers.inc:1250 Route113_Text_CobyIntro (+1 aliases)
	.globl gText_Rom_25C992
gText_Rom_25C992: @ 0x0825C992
	.string "おまえ なんか この つばさで\nふきとばして やるぜっ!{EOS}"
	.if (. - gText_Rom_25C992) > 0x1d
	.error "gText_Rom_25C992 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C992) < 0x1d
	.space 0x1d - (. - gText_Rom_25C992)
	.endif
