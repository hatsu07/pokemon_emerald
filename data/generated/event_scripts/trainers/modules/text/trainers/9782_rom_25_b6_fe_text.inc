	@ data/text/trainers.inc:815 Route110_Text_EdwinIntro (+1 aliases)
	.globl gText_Rom_25B6FE
gText_Rom_25B6FE: @ 0x0825B6FE
	.string "キミの ポケモン みせてくれない?\nひとめで いいから おねがい!{EOS}"
	.if (. - gText_Rom_25B6FE) > 0x22
	.error "gText_Rom_25B6FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B6FE) < 0x22
	.space 0x22 - (. - gText_Rom_25B6FE)
	.endif
