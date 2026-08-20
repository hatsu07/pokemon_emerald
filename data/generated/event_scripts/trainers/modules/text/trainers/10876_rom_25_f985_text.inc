	@ data/text/trainers.inc:2396 Route123_Text_WendyIntro (+1 aliases)
	.globl gText_Rom_25F985
gText_Rom_25F985: @ 0x0825F985
	.string "あなたの じつりょくが\nどれほどの ものか……\lわたしが たしかめて あげる!{EOS}"
	.if (. - gText_Rom_25F985) > 0x28
	.error "gText_Rom_25F985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F985) < 0x28
	.space 0x28 - (. - gText_Rom_25F985)
	.endif
