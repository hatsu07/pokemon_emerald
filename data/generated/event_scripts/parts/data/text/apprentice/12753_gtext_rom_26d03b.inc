	@ data/text/apprentice.inc:52 gText_ApprenticeRejectTeaching0
	.globl gText_Rom_26D03B
gText_Rom_26D03B: @ 0x0826D03B
	.string "そ そんな……\nう うう うわーん!\pおねがいです…… おねがい ですから……!"
	.byte EOS
	.if (. - gText_Rom_26D03B) > 0x29
	.error "gText_Rom_26D03B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D03B) < 0x29
	.space 0x29 - (. - gText_Rom_26D03B)
	.endif
