	@ data/text/trainers.inc:1247 Route113_Text_TiaNotEnoughMons (+1 aliases)
	.globl gText_Rom_25C96C
gText_Rom_25C96C: @ 0x0825C96C
	.string "ネネ『あたしたち 2たい2で たたかいたいの\nそうしないと かてないもん!{EOS}"
	.if (. - gText_Rom_25C96C) > 0x26
	.error "gText_Rom_25C96C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C96C) < 0x26
	.space 0x26 - (. - gText_Rom_25C96C)
	.endif
