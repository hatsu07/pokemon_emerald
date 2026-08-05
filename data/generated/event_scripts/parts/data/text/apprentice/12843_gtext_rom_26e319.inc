	@ data/text/apprentice.inc:184 gText_ApprenticeRejectTeaching11
	.globl gText_Rom_26E319
gText_Rom_26E319: @ 0x0826E319
	.string "そんな!\nノリが わるいじゃ ないか!\pな いいじゃ ないか\nぜひとも わしを でしに してください!"
	.byte EOS
	.if (. - gText_Rom_26E319) > 0x34
	.error "gText_Rom_26E319 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E319) < 0x34
	.space 0x34 - (. - gText_Rom_26E319)
	.endif
