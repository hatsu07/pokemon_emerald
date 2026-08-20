	@ data/text/trainers.inc:344 Route105_Text_ImaniPostBattle
	.globl gText_Rom_25A486
gText_Rom_25A486: @ 0x0825A486
	.string "あたしと いると なごむって いわれたいの\nうふふふふ!{EOS}"
	.if (. - gText_Rom_25A486) > 0x1d
	.error "gText_Rom_25A486 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A486) < 0x1d
	.space 0x1d - (. - gText_Rom_25A486)
	.endif
