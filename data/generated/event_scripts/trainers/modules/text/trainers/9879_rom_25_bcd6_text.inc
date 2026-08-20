	@ data/text/trainers.inc:950 Route111_Text_DustyRematchIntro (+1 aliases)
	.globl gText_Rom_25BCD6
gText_Rom_25BCD6: @ 0x0825BCD6
	.string "いせきを さがして 30ねん!\pいや いせきを さがして 40ねん!\nそんな わたしと たたかうのかね?{EOS}"
	.if (. - gText_Rom_25BCD6) > 0x35
	.error "gText_Rom_25BCD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BCD6) < 0x35
	.space 0x35 - (. - gText_Rom_25BCD6)
	.endif
