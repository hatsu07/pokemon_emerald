	@ data/text/apprentice.inc:13 gText_ApprenticeChallenge4
	.globl gText_Rom_26CDF9
gText_Rom_26CDF9: @ 0x0826CDF9
	.string "{STR_VAR_1}の {STR_VAR_2}ばん でしなの!\nしょうぶ して あげるわ!"
	.byte EOS
	.if (. - gText_Rom_26CDF9) > 0x1d
	.error "gText_Rom_26CDF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CDF9) < 0x1d
	.space 0x1d - (. - gText_Rom_26CDF9)
	.endif
