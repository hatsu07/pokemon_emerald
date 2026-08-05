	@ data/text/apprentice.inc:31 gText_ApprenticeChallenge10
	.globl gText_Rom_26CEBE
gText_Rom_26CEBE: @ 0x0826CEBE
	.string "{STR_VAR_1}の 1000ばんめの でしだ!\nうそ ほんとは {STR_VAR_2}ばん! いくぞ!"
	.byte EOS
	.if (. - gText_Rom_26CEBE) > 0x25
	.error "gText_Rom_26CEBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CEBE) < 0x25
	.space 0x25 - (. - gText_Rom_26CEBE)
	.endif
