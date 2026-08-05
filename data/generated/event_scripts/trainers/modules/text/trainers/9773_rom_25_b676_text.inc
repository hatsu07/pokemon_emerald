	@ data/text/trainers.inc:803 Route110_Text_EdwardPostBattle
	.globl gText_Rom_25B676
gText_Rom_25B676: @ 0x0825B676
	.string "おまえの みらいが みえる……\pふうむ……\nあかるい ひかりが みえるぞ……!$"
	.if (. - gText_Rom_25B676) > 0x28
	.error "gText_Rom_25B676 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B676) < 0x28
	.space 0x28 - (. - gText_Rom_25B676)
	.endif
