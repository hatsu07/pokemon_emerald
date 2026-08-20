	@ data/text/trainers.inc:1223 Route113_Text_LungPostBattle
	.globl gText_Rom_25C83A
gText_Rom_25C83A: @ 0x0825C83A
	.string "かくれていて なにが しんぱいって\nだれも とおらないと さびしいんだよね{EOS}"
	.if (. - gText_Rom_25C83A) > 0x26
	.error "gText_Rom_25C83A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C83A) < 0x26
	.space 0x26 - (. - gText_Rom_25C83A)
	.endif
