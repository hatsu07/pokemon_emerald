	@ data/maps/MtChimney/scripts.inc:678 MtChimney_Text_ArchieIHaveMyHandsFull
	.globl gText_Rom_21558F
gText_Rom_21558F: @ 0x0821558F
	.string "アオギリ『うーむ むむむ!\pマツブサの やつを とめに いきたいが\nさすがの おれも\l3にん どうじに あいてを していては\lてが はなせない!$"
	.if (. - gText_Rom_21558F) > 0x49
	.error "gText_Rom_21558F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21558F) < 0x49
	.space 0x49 - (. - gText_Rom_21558F)
	.endif
