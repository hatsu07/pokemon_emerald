	@ data/text/berries.inc:89 Route123_BerryMastersHouse_Text_YoureDeservingOfBerry
	.globl gText_Rom_263AE4
gText_Rom_263AE4: @ 0x08263AE4
	.string "わしは きのみめいじんと よばれておる\pわしは せかいじゅうを うつくしい はなで\nうめつくそうと きのみを そだてて\lそして くばり まくって おるのじゃ\pきみにも きのみを わけて あげよう!$"
	.if (. - gText_Rom_263AE4) > 0x63
	.error "gText_Rom_263AE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263AE4) < 0x63
	.space 0x63 - (. - gText_Rom_263AE4)
	.endif
