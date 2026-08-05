	@ data/text/berries.inc:99 Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop
	.globl gText_Rom_263B5B
gText_Rom_263B5B: @ 0x08263B5B
	.string "カナズミの ちかくにある サン・トウカという\nフラワーショップも よろしくの\pせかいに はなを さかせましょう!$"
	.if (. - gText_Rom_263B5B) > 0x39
	.error "gText_Rom_263B5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263B5B) < 0x39
	.space 0x39 - (. - gText_Rom_263B5B)
	.endif
