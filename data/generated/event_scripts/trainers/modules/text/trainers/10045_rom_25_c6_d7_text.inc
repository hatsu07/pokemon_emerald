	@ data/text/trainers.inc:1184 Route113_Text_MadelineRegister
	.globl gText_Rom_25C6D7
gText_Rom_25C6D7: @ 0x0825C6D7
	.string "ね ちょっと パラソルに はいって\nポケナビを とうろく していって!{EOS}"
	.if (. - gText_Rom_25C6D7) > 0x24
	.error "gText_Rom_25C6D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C6D7) < 0x24
	.space 0x24 - (. - gText_Rom_25C6D7)
	.endif
