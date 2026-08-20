	@ data/text/trainers.inc:3356 Route134_Text_LaurelIntro (+1 aliases)
	.globl gText_Rom_2620AF
gText_Rom_2620AF: @ 0x082620AF
	.string "わたしの ラブカスたちと\nたのしく しょうぶ しましょうよ!{EOS}"
	.if (. - gText_Rom_2620AF) > 0x1f
	.error "gText_Rom_2620AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2620AF) < 0x1f
	.space 0x1f - (. - gText_Rom_2620AF)
	.endif
