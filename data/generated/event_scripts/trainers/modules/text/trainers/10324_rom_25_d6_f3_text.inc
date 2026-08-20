	@ data/text/trainers.inc:1586 Route116_Text_JaniceIntro (+1 aliases)
	.globl gText_Rom_25D6F3
gText_Rom_25D6F3: @ 0x0825D6F3
	.string "わたしの かわいい ポケモンの つよさ\nじっくりと おしえて あげるわ!{EOS}"
	.if (. - gText_Rom_25D6F3) > 0x25
	.error "gText_Rom_25D6F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D6F3) < 0x25
	.space 0x25 - (. - gText_Rom_25D6F3)
	.endif
