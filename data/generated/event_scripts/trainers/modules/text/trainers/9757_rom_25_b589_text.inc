	@ data/text/trainers.inc:779 Route110_Text_AbigailRematchIntro (+1 aliases)
	.globl gText_Rom_25B589
gText_Rom_25B589: @ 0x0825B589
	.string "じてんしゃに のりながら\nポケモンしょうぶ ってのも いいものよね!$"
	.if (. - gText_Rom_25B589) > 0x23
	.error "gText_Rom_25B589 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B589) < 0x23
	.space 0x23 - (. - gText_Rom_25B589)
	.endif
