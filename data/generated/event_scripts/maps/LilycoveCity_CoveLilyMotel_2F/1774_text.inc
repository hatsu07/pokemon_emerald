	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:83 LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart
	.globl gText_Rom_205A85
gText_Rom_205A85: @ 0x08205A85
	.string "なんだか しおかぜが こころを くすぐって\nきもち いいですね!$"
	.if (. - gText_Rom_205A85) > 0x21
	.error "gText_Rom_205A85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205A85) < 0x21
	.space 0x21 - (. - gText_Rom_205A85)
	.endif
