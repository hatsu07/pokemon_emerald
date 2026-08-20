	@ data/text/trainers.inc:266 Route104_Text_WinstonPostRematch
	.globl gText_Rom_25A124
gText_Rom_25A124: @ 0x0825A124
	.string "おかねもちの ボク なのに\nなかなか ポケモンに かてない……\pなんて おくが ふかいんだろう\nポケモンって……{EOS}"
	.if (. - gText_Rom_25A124) > 0x39
	.error "gText_Rom_25A124 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A124) < 0x39
	.space 0x39 - (. - gText_Rom_25A124)
	.endif
