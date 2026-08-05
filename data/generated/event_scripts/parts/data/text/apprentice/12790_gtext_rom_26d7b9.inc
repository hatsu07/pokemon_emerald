	@ data/text/apprentice.inc:106 gText_ApprenticeLevelModeThanks4
	.globl gText_Rom_26D7B9
gText_Rom_26D7B9: @ 0x0826D7B9
	.string "そう {STR_VAR_1}が\nわたしに ふさわしいのね ありがと!\l{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_Rom_26D7B9) > 0x4e
	.error "gText_Rom_26D7B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D7B9) < 0x4e
	.space 0x4e - (. - gText_Rom_26D7B9)
	.endif
