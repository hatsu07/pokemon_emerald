	@ data/text/apprentice.inc:34 gText_ApprenticeChallenge11
	.globl gText_Rom_26CEE3
gText_Rom_26CEE3: @ 0x0826CEE3
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんの\nでしだぜ! ノリノリで いってみようぜー!"
	.byte EOS
	.if (. - gText_Rom_26CEE3) > 0x22
	.error "gText_Rom_26CEE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CEE3) < 0x22
	.space 0x22 - (. - gText_Rom_26CEE3)
	.endif
