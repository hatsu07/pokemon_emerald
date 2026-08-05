	@ data/text/apprentice.inc:172 gText_ApprenticeRejectTeaching10
	.globl gText_Rom_26E12D
gText_Rom_26E12D: @ 0x0826E12D
	.string "そんな つめたい こと いうと\nこうだぞ!\pうえーん うえーん えーん えん えん\pなんてね うそなき!\pね! いいだろ\nおいらの ししょうに なって おくれよ!"
	.byte EOS
	.if (. - gText_Rom_26E12D) > 0x52
	.error "gText_Rom_26E12D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E12D) < 0x52
	.space 0x52 - (. - gText_Rom_26E12D)
	.endif
