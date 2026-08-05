	@ data/text/apprentice.inc:574 gText_ApprenticeMonFirstThanks15
	.globl gText_Rom_270D5D
gText_Rom_270D5D: @ 0x08270D5D
	.string "{STR_VAR_1}……\nうそでは ないだろうね?\pいや ほんとう なら いいんだ\nどうも ありがとう\lこんな わたしだが がんばって みよう\pでは いずれまた あおう!"
	.byte EOS
	.if (. - gText_Rom_270D5D) > 0x4e
	.error "gText_Rom_270D5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270D5D) < 0x4e
	.space 0x4e - (. - gText_Rom_270D5D)
	.endif
