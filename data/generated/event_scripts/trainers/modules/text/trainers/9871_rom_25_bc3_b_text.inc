	@ data/text/trainers.inc:938 Route111_Text_DustyIntro (+1 aliases)
	.globl gText_Rom_25BC3B
gText_Rom_25BC3B: @ 0x0825BC3B
	.string "いせきを さがして 30ねん!\nそんな わたしと たたかうのかね?{EOS}"
	.if (. - gText_Rom_25BC3B) > 0x22
	.error "gText_Rom_25BC3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BC3B) < 0x22
	.space 0x22 - (. - gText_Rom_25BC3B)
	.endif
