	@ data/text/apprentice.inc:640 gText_ApprenticeMonThanks10
	.globl gText_Rom_27160D
gText_Rom_27160D: @ 0x0827160D
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ ちがうほうに しようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー$"
	.if (. - gText_Rom_27160D) > 0x5d
	.error "gText_Rom_27160D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27160D) < 0x5d
	.space 0x5d - (. - gText_Rom_27160D)
	.endif
