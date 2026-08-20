	@ data/text/trainers.inc:1643 Route116_Text_SarahIntro (+1 aliases)
	.globl gText_Rom_25D9C3
gText_Rom_25D9C3: @ 0x0825D9C3
	.string "わたくし いままで\nひとに なにかで まけた ことって\lありませんの!{EOS}"
	.if (. - gText_Rom_25D9C3) > 0x24
	.error "gText_Rom_25D9C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D9C3) < 0x24
	.space 0x24 - (. - gText_Rom_25D9C3)
	.endif
