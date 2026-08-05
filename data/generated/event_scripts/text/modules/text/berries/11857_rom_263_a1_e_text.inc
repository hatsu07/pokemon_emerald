	@ data/text/berries.inc:66 Route120_Text_BerryIsRareRaiseItWithCare
	.globl gText_Rom_263A1E
gText_Rom_263A1E: @ 0x08263A1E
	.string "その きのみは めずらしいもの らしいから\nたいせつに そだててね!$"
	.if (. - gText_Rom_263A1E) > 0x23
	.error "gText_Rom_263A1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263A1E) < 0x23
	.space 0x23 - (. - gText_Rom_263A1E)
	.endif
