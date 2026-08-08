	@ data/text/trainers.inc:1745 Route117_Text_MariaDefeat (+2 aliases)
	.globl gText_Rom_25DEB6
gText_Rom_25DEB6: @ 0x0825DEB6
	.string "れんしゅうが たりなかったかな?$"
	.if (. - gText_Rom_25DEB6) > 0x11
	.error "gText_Rom_25DEB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DEB6) < 0x11
	.space 0x11 - (. - gText_Rom_25DEB6)
	.endif
