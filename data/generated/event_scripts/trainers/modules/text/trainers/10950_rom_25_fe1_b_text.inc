	@ data/text/trainers.inc:2510 Route123_Text_FernandoRematchIntro (+1 aliases)
	.globl gText_Rom_25FE1B
gText_Rom_25FE1B: @ 0x0825FE1B
	.string "よし きょうこそ!\n1ばんを うたっている あいだに\lサッと たおしちゃうゼ!{EOS}"
	.if (. - gText_Rom_25FE1B) > 0x28
	.error "gText_Rom_25FE1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FE1B) < 0x28
	.space 0x28 - (. - gText_Rom_25FE1B)
	.endif
