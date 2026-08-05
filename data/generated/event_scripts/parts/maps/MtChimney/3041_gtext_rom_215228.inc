	@ data/maps/MtChimney/scripts.inc:585 MtChimney_Text_MaxieYouHaventSeenLastOfMagma
	.globl gText_Rom_215228
gText_Rom_215228: @ 0x08215228
	.string "マツブサ『まあ いい\nこのばは ひとまず あきらめよう……\pだが マグマだんの かつどうは\nこれで おわったわけでは ないのだ!\pふふふ……\pいんせきなど つかわなくとも\nあの たまが てにはいれば ふふふ……$"
	.if (. - gText_Rom_215228) > 0x6a
	.error "gText_Rom_215228 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215228) < 0x6a
	.space 0x6a - (. - gText_Rom_215228)
	.endif
