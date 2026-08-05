	@ data/text/apprentice.inc:1 gText_ApprenticeChallenge0
	.globl gText_Rom_26CD7D
gText_Rom_26CD7D: @ 0x0826CD7D
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばん でしです!\nグスン…… きんちょう するなあ"
	.byte EOS
	.if (. - gText_Rom_26CD7D) > 0x22
	.error "gText_Rom_26CD7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CD7D) < 0x22
	.space 0x22 - (. - gText_Rom_26CD7D)
	.endif
