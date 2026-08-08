	@ data/text/trainers.inc:1415 Route114_Text_CharlotteIntro (+1 aliases)
	.globl gText_Rom_25D040
gText_Rom_25D040: @ 0x0825D040
	.string "あたし!\nかわいい だけじゃ ないんだから!$"
	.if (. - gText_Rom_25D040) > 0x17
	.error "gText_Rom_25D040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D040) < 0x17
	.space 0x17 - (. - gText_Rom_25D040)
	.endif
