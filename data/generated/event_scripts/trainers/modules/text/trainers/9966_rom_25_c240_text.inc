	@ data/text/trainers.inc:1073 Route111_Text_HaydenIntro (+1 aliases)
	.globl gText_Rom_25C240
gText_Rom_25C240: @ 0x0825C240
	.string "おいらは いま はらが へっている\nだから ようしゃは しないぞ!{EOS}"
	.if (. - gText_Rom_25C240) > 0x22
	.error "gText_Rom_25C240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C240) < 0x22
	.space 0x22 - (. - gText_Rom_25C240)
	.endif
