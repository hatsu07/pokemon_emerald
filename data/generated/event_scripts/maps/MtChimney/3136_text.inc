	@ data/maps/MtChimney/scripts.inc:814 MtChimney_Text_ShirleyIntro (+1 aliases)
	.globl gText_Rom_2159B4
gText_Rom_2159B4: @ 0x082159B4
	.string "おんせんに はいったら\nちょうし バッチリ なのよね!\lぜったい かてるわ!$"
	.if (. - gText_Rom_2159B4) > 0x27
	.error "gText_Rom_2159B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2159B4) < 0x27
	.space 0x27 - (. - gText_Rom_2159B4)
	.endif
