	@ data/text/trainers.inc:58 Route103_Text_DaisyPostBattle
	.globl gText_Rom_259795
gText_Rom_259795: @ 0x08259795
	.string "アロマとは かおりのこと……\nかおりは こころと からだを いやすのです"
	.byte EOS
	.if (. - gText_Rom_259795) > 0x25
	.error "gText_Rom_259795 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259795) < 0x25
	.space 0x25 - (. - gText_Rom_259795)
	.endif
