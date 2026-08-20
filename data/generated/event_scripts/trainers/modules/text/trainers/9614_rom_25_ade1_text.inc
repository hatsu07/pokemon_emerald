	@ data/text/trainers.inc:572 Route109_Text_DavidIntro (+1 aliases)
	.globl gText_Rom_25ADE1
gText_Rom_25ADE1: @ 0x0825ADE1
	.string "うりゃーっ!!\nみごとに われた ふっきんを みろーっ!!{EOS}"
	.if (. - gText_Rom_25ADE1) > 0x1e
	.error "gText_Rom_25ADE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ADE1) < 0x1e
	.space 0x1e - (. - gText_Rom_25ADE1)
	.endif
