	@ data/text/trainers.inc:434 Route107_Text_TonyIntro (+1 aliases)
	.globl gText_Rom_25A835
gText_Rom_25A835: @ 0x0825A835
	.string "うみは オレの にわ みたいな もの!\nしょうぶ しようぜ!{EOS}"
	.if (. - gText_Rom_25A835) > 0x1f
	.error "gText_Rom_25A835 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A835) < 0x1f
	.space 0x1f - (. - gText_Rom_25A835)
	.endif
