	@ data/text/trainers.inc:1772 Route117_Text_AnnaIntro (+1 aliases)
	.globl gText_Rom_25DF8B
gText_Rom_25DF8B: @ 0x0825DF8B
	.string "ミホ『かわいい コウハイの まえ だもん\nいいところ みせちゃうんだから!$"
	.if (. - gText_Rom_25DF8B) > 0x26
	.error "gText_Rom_25DF8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DF8B) < 0x26
	.space 0x26 - (. - gText_Rom_25DF8B)
	.endif
