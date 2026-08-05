	@ data/text/apprentice.inc:10 gText_ApprenticeChallenge3
	.globl gText_Rom_26CDD6
gText_Rom_26CDD6: @ 0x0826CDD6
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんでしです…\nあたし なんかが かてる かな……?"
	.byte EOS
	.if (. - gText_Rom_26CDD6) > 0x23
	.error "gText_Rom_26CDD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CDD6) < 0x23
	.space 0x23 - (. - gText_Rom_26CDD6)
	.endif
