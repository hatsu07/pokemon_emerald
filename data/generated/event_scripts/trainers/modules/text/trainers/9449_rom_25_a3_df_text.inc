	@ data/text/trainers.inc:329 Route105_Text_BeverlyIntro (+1 aliases)
	.globl gText_Rom_25A3DF
gText_Rom_25A3DF: @ 0x0825A3DF
	.string "みずに はいると からだが かるくなるわね\nなんだか スリムに なったみたい!$"
	.if (. - gText_Rom_25A3DF) > 0x28
	.error "gText_Rom_25A3DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A3DF) < 0x28
	.space 0x28 - (. - gText_Rom_25A3DF)
	.endif
