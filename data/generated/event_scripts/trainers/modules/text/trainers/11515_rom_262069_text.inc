	@ data/text/trainers.inc:3347 Route134_Text_JackIntro (+1 aliases)
	.globl gText_Rom_262069
gText_Rom_262069: @ 0x08262069
	.string "およぎの とくいな ポケモンだって\nながされる しおの ながれだ!{EOS}"
	.if (. - gText_Rom_262069) > 0x22
	.error "gText_Rom_262069 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262069) < 0x22
	.space 0x22 - (. - gText_Rom_262069)
	.endif
