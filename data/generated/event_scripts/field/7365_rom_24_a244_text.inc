	@ field-script:0x2490A8 FieldScriptText_24A244
	.globl gText_Rom_24A244
gText_Rom_24A244: @ 0x0824A244
	.string "しかい『さあ\nポケモンの　しょうかいが　おわりました\l1じ　しんさに　はいりましょう！\pかいじょうの　おきゃくさまに　よる\nポケモンの　にんき　とうひょうです！\pでは　さっそく　はじめましょう！\nとうひょう　おねがいします！$"
	.if (. - gText_Rom_24A244) > 0x71
	.error "gText_Rom_24A244 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A244) < 0x71
	.space 0x71 - (. - gText_Rom_24A244)
	.endif
