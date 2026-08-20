	@ data/text/trainers.inc:869 Route110_Text_TimmyDefeated (+1 aliases)
	.globl gText_Rom_25B932
gText_Rom_25B932: @ 0x0825B932
	.string "かっこいい だけじゃ だめかぁ……{EOS}"
	.if (. - gText_Rom_25B932) > 0x12
	.error "gText_Rom_25B932 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B932) < 0x12
	.space 0x12 - (. - gText_Rom_25B932)
	.endif
