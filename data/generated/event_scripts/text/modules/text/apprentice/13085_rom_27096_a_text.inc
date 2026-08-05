	@ data/text/apprentice.inc:544 gText_ApprenticeMonFirstThanks10
	.globl gText_Rom_27096A
gText_Rom_27096A: @ 0x0827096A
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ そいつだけは やめようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_Rom_27096A) > 0x5e
	.error "gText_Rom_27096A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27096A) < 0x5e
	.space 0x5e - (. - gText_Rom_27096A)
	.endif
