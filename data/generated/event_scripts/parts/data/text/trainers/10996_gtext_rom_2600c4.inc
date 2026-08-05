	@ data/text/trainers.inc:2579 Route123_Text_KayleyPostBattle
	.globl gText_Rom_2600C4
gText_Rom_2600C4: @ 0x082600C4
	.string "こもの づかいも おしゃれの ひけつよ!$"
	.if (. - gText_Rom_2600C4) > 0x15
	.error "gText_Rom_2600C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2600C4) < 0x15
	.space 0x15 - (. - gText_Rom_2600C4)
	.endif
