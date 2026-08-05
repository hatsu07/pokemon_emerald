	@ data/maps/MtChimney/scripts.inc:719 MtChimney_Text_ThankYouDear
	.globl gText_Rom_21571E
gText_Rom_21571E: @ 0x0821571E
	.string "どうも ありがとね$"
	.if (. - gText_Rom_21571E) > 0xa
	.error "gText_Rom_21571E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21571E) < 0xa
	.space 0xa - (. - gText_Rom_21571E)
	.endif
