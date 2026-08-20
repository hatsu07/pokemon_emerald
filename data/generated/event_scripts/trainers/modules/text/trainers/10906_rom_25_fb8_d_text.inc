	@ data/text/trainers.inc:2444 Route123_Text_JackiIntro (+1 aliases)
	.globl gText_Rom_25FB8D
gText_Rom_25FB8D: @ 0x0825FB8D
	.string "ポケモンも ちょうのうりょくも\nつかえるだけじゃ いみ ないわ\lきたえてこそ ほんものに なるのよ{EOS}"
	.if (. - gText_Rom_25FB8D) > 0x32
	.error "gText_Rom_25FB8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FB8D) < 0x32
	.space 0x32 - (. - gText_Rom_25FB8D)
	.endif
