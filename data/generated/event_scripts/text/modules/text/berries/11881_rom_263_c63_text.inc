	@ data/text/berries.inc:126 Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife
	.globl gText_Rom_263C63
gText_Rom_263C63: @ 0x08263C63
	.string "まごたち 4にんも じいさんを しのぐ\nおおものに なるじゃろうて\pじんせい たのしいことが つきんのう!$"
	.if (. - gText_Rom_263C63) > 0x36
	.error "gText_Rom_263C63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263C63) < 0x36
	.space 0x36 - (. - gText_Rom_263C63)
	.endif
