	@ data/maps/SootopolisCity_House2/scripts.inc:21 SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs
	.globl gText_Rom_20F3FB
gText_Rom_20F3FB: @ 0x0820F3FB
	.string "おくりびやま……\pちょうじょうに ふたつのたまが\nおかれて いるのは ごぞんじ ですか……?{EOS}"
	.if (. - gText_Rom_20F3FB) > 0x2f
	.error "gText_Rom_20F3FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F3FB) < 0x2f
	.space 0x2f - (. - gText_Rom_20F3FB)
	.endif
