	@ data/text/apprentice.inc:7 gText_ApprenticeChallenge2
	.globl gText_Rom_26CDBC
gText_Rom_26CDBC: @ 0x0826CDBC
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんの でしだ!\nいざ しょうぶ!"
	.byte EOS
	.if (. - gText_Rom_26CDBC) > 0x1a
	.error "gText_Rom_26CDBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CDBC) < 0x1a
	.space 0x1a - (. - gText_Rom_26CDBC)
	.endif
