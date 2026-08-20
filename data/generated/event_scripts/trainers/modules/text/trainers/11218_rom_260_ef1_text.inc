	@ data/text/trainers.inc:2909 Route127_Text_JonahIntro (+1 aliases)
	.globl gText_Rom_260EF1
gText_Rom_260EF1: @ 0x08260EF1
	.string "つりを することで てにいれた\nおだやかな こころ……\lそれを みせて あげましょう……{EOS}"
	.if (. - gText_Rom_260EF1) > 0x2d
	.error "gText_Rom_260EF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260EF1) < 0x2d
	.space 0x2d - (. - gText_Rom_260EF1)
	.endif
