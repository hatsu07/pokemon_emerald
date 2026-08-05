	@ data/text/berries.inc:104 Route123_BerryMastersHouse_Text_DoneForToday
	.globl gText_Rom_263B94
gText_Rom_263B94: @ 0x08263B94
	.string "きょうは もう おしまいじゃ\nまた おいで\pせかいに はなを さかせましょう!$"
	.if (. - gText_Rom_263B94) > 0x28
	.error "gText_Rom_263B94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263B94) < 0x28
	.space 0x28 - (. - gText_Rom_263B94)
	.endif
