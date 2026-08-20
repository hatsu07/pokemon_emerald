	@ data/maps/PacifidlogTown/scripts.inc:30 PacifidlogTown_Text_FastRunningCurrent
	.globl gText_Rom_1E63B7
gText_Rom_1E63B7: @ 0x081E63B7
	.string "キナギから カイナへは\nしおの ながれが とても はげしいの\pうかつに なみのり すると\nおもわぬ ほうこうに ながされちゃう{EOS}"
	.if (. - gText_Rom_1E63B7) > 0x40
	.error "gText_Rom_1E63B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E63B7) < 0x40
	.space 0x40 - (. - gText_Rom_1E63B7)
	.endif
