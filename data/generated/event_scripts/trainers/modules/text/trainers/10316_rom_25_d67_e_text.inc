	@ data/text/trainers.inc:1574 Route116_Text_JoeyPostBattle
	.globl gText_Rom_25D67E
gText_Rom_25D67E: @ 0x0825D67E
	.string "バンソーコーは おとこの くんしょう!\nまた ひとつ ふえたぜ!{EOS}"
	.if (. - gText_Rom_25D67E) > 0x21
	.error "gText_Rom_25D67E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D67E) < 0x21
	.space 0x21 - (. - gText_Rom_25D67E)
	.endif
