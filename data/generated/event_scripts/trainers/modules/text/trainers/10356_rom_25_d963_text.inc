	@ data/text/trainers.inc:1634 Route116_Text_KarenRematchIntro (+1 aliases)
	.globl gText_Rom_25D963
gText_Rom_25D963: @ 0x0825D963
	.string "あれから ものすっごく べんきょう したの!\nその せいか みてもらうからね!{EOS}"
	.if (. - gText_Rom_25D963) > 0x28
	.error "gText_Rom_25D963 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D963) < 0x28
	.space 0x28 - (. - gText_Rom_25D963)
	.endif
